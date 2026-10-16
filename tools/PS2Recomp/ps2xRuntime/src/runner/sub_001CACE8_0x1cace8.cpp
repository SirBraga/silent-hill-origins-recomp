#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CACE8
// Address: 0x1cace8 - 0x1cadb0
void sub_001CACE8_0x1cace8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CACE8_0x1cace8");
#endif

    switch (ctx->pc) {
        case 0x1cad04u: goto label_1cad04;
        case 0x1cad48u: goto label_1cad48;
        case 0x1cad50u: goto label_1cad50;
        case 0x1cad64u: goto label_1cad64;
        case 0x1cad7cu: goto label_1cad7c;
        case 0x1cad90u: goto label_1cad90;
        default: break;
    }

    ctx->pc = 0x1cace8u;

    // 0x1cace8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1cace8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1cacec: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1cacecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1cacf0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1cacf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1cacf4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cacf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cacf8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1cacf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1cacfc: 0xc06b968  jal         func_1AE5A0
    ctx->pc = 0x1CACFCu;
    SET_GPR_U32(ctx, 31, 0x1CAD04u);
    ctx->pc = 0x1CAD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CACFCu;
    // 0x1cad00: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE5A0u, 0x1CACFCu, 0x1CAD04u)) {
        return;
    }
    ctx->pc = 0x1CAD04u;
label_1cad04:
    // 0x1cad04: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1cad04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1cad08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cad08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cad0c: 0x2463fb08  addiu       $v1, $v1, -0x4F8
    ctx->pc = 0x1cad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966024));
    // 0x1cad10: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1cad10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cad14: 0xae200260  sw          $zero, 0x260($s1)
    ctx->pc = 0x1cad14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
    // 0x1cad18: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cad18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cad1c: 0xae200264  sw          $zero, 0x264($s1)
    ctx->pc = 0x1cad1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 0));
    // 0x1cad20: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1cad20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cad24: 0xae200270  sw          $zero, 0x270($s1)
    ctx->pc = 0x1cad24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 0));
    // 0x1cad28: 0xae200274  sw          $zero, 0x274($s1)
    ctx->pc = 0x1cad28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 0));
    // 0x1cad2c: 0xae200278  sw          $zero, 0x278($s1)
    ctx->pc = 0x1cad2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 0));
    // 0x1cad30: 0xae20027c  sw          $zero, 0x27C($s1)
    ctx->pc = 0x1cad30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 636), GPR_U32(ctx, 0));
    // 0x1cad34: 0xae230258  sw          $v1, 0x258($s1)
    ctx->pc = 0x1cad34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 3));
    // 0x1cad38: 0xae26026c  sw          $a2, 0x26C($s1)
    ctx->pc = 0x1cad38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 6));
    // 0x1cad3c: 0xae260268  sw          $a2, 0x268($s1)
    ctx->pc = 0x1cad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 6));
    // 0x1cad40: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1CAD40u;
    SET_GPR_U32(ctx, 31, 0x1CAD48u);
    ctx->pc = 0x1CAD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAD40u;
    // 0x1cad44: 0xae220280  sw          $v0, 0x280($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1CAD40u, 0x1CAD48u)) {
        return;
    }
    ctx->pc = 0x1CAD48u;
label_1cad48:
    // 0x1cad48: 0xc06db44  jal         func_1B6D10
    ctx->pc = 0x1CAD48u;
    SET_GPR_U32(ctx, 31, 0x1CAD50u);
    ctx->pc = 0x1CAD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAD48u;
    // 0x1cad4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D10u, 0x1CAD48u, 0x1CAD50u)) {
        return;
    }
    ctx->pc = 0x1CAD50u;
label_1cad50:
    // 0x1cad50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cad50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cad54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cad54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cad58: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1cad58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1cad5c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CAD5Cu;
    SET_GPR_U32(ctx, 31, 0x1CAD64u);
    ctx->pc = 0x1CAD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAD5Cu;
    // 0x1cad60: 0xae220260  sw          $v0, 0x260($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CAD5Cu, 0x1CAD64u)) {
        return;
    }
    ctx->pc = 0x1CAD64u;
label_1cad64:
    // 0x1cad64: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cad64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1cad68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cad68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cad6c: 0x24a5faf8  addiu       $a1, $a1, -0x508
    ctx->pc = 0x1cad6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966008));
    // 0x1cad70: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1cad70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cad74: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1CAD74u;
    SET_GPR_U32(ctx, 31, 0x1CAD7Cu);
    ctx->pc = 0x1CAD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAD74u;
    // 0x1cad78: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1CAD74u, 0x1CAD7Cu)) {
        return;
    }
    ctx->pc = 0x1CAD7Cu;
label_1cad7c:
    // 0x1cad7c: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1cad7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cad80: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CAD80u;
    {
        const bool branch_taken_0x1cad80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAD80u;
        // 0x1cad84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cad80) {
            ctx->pc = 0x1CAD94u;
            goto label_1cad94;
        }
    }
    ctx->pc = 0x1CAD88u;
    // 0x1cad88: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1CAD88u;
    SET_GPR_U32(ctx, 31, 0x1CAD90u);
    ctx->pc = 0x1CAD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAD88u;
    // 0x1cad8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1CAD88u, 0x1CAD90u)) {
        return;
    }
    ctx->pc = 0x1CAD90u;
label_1cad90:
    // 0x1cad90: 0xae220274  sw          $v0, 0x274($s1)
    ctx->pc = 0x1cad90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 2));
label_1cad94:
    // 0x1cad94: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1cad94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cad98: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1cad98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cad9c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1cad9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cada0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1cada0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cada4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CADA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADA4u;
        // 0x1cada8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CADA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CADACu;
    // 0x1cadac: 0x0  nop
    ctx->pc = 0x1cadacu;
    // NOP
    ctx->pc = 0x1cadb0u;
}
