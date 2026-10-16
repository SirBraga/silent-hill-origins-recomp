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

// Function: sub_001B9B78
// Address: 0x1b9b78 - 0x1b9c40
void sub_001B9B78_0x1b9b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9B78_0x1b9b78");
#endif

    switch (ctx->pc) {
        case 0x1b9b94u: goto label_1b9b94;
        case 0x1b9bdcu: goto label_1b9bdc;
        case 0x1b9bf4u: goto label_1b9bf4;
        case 0x1b9c08u: goto label_1b9c08;
        case 0x1b9c18u: goto label_1b9c18;
        case 0x1b9c20u: goto label_1b9c20;
        default: break;
    }

    ctx->pc = 0x1b9b78u;

    // 0x1b9b78: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1b9b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1b9b7c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1b9b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1b9b80: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1b9b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1b9b84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b9b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9b88: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1b9b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1b9b8c: 0xc06b968  jal         func_1AE5A0
    ctx->pc = 0x1B9B8Cu;
    SET_GPR_U32(ctx, 31, 0x1B9B94u);
    ctx->pc = 0x1B9B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9B8Cu;
    // 0x1b9b90: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE5A0u, 0x1B9B8Cu, 0x1B9B94u)) {
        return;
    }
    ctx->pc = 0x1B9B94u;
label_1b9b94:
    // 0x1b9b94: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1b9b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1b9b98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b9b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9b9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1b9b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1b9ba0: 0x2463d1b0  addiu       $v1, $v1, -0x2E50
    ctx->pc = 0x1b9ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955440));
    // 0x1b9ba4: 0xae200260  sw          $zero, 0x260($s1)
    ctx->pc = 0x1b9ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
    // 0x1b9ba8: 0xae200264  sw          $zero, 0x264($s1)
    ctx->pc = 0x1b9ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 0));
    // 0x1b9bac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b9bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9bb0: 0xae200268  sw          $zero, 0x268($s1)
    ctx->pc = 0x1b9bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 0));
    // 0x1b9bb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b9bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9bb8: 0xae20026c  sw          $zero, 0x26C($s1)
    ctx->pc = 0x1b9bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 0));
    // 0x1b9bbc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1b9bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b9bc0: 0xae200274  sw          $zero, 0x274($s1)
    ctx->pc = 0x1b9bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 0));
    // 0x1b9bc4: 0xae200278  sw          $zero, 0x278($s1)
    ctx->pc = 0x1b9bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 0));
    // 0x1b9bc8: 0xae20027c  sw          $zero, 0x27C($s1)
    ctx->pc = 0x1b9bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 636), GPR_U32(ctx, 0));
    // 0x1b9bcc: 0xae200284  sw          $zero, 0x284($s1)
    ctx->pc = 0x1b9bccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 0));
    // 0x1b9bd0: 0xae230258  sw          $v1, 0x258($s1)
    ctx->pc = 0x1b9bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 3));
    // 0x1b9bd4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1B9BD4u;
    SET_GPR_U32(ctx, 31, 0x1B9BDCu);
    ctx->pc = 0x1B9BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9BD4u;
    // 0x1b9bd8: 0xe6200280  swc1        $f0, 0x280($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 640), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B9BD4u, 0x1B9BDCu)) {
        return;
    }
    ctx->pc = 0x1B9BDCu;
label_1b9bdc:
    // 0x1b9bdc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1b9bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1b9be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9be4: 0x24a5d1a0  addiu       $a1, $a1, -0x2E60
    ctx->pc = 0x1b9be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955424));
    // 0x1b9be8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b9be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9bec: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1B9BECu;
    SET_GPR_U32(ctx, 31, 0x1B9BF4u);
    ctx->pc = 0x1B9BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9BECu;
    // 0x1b9bf0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1B9BECu, 0x1B9BF4u)) {
        return;
    }
    ctx->pc = 0x1B9BF4u;
label_1b9bf4:
    // 0x1b9bf4: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1b9bf4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9bf8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9BF8u;
    {
        const bool branch_taken_0x1b9bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9BF8u;
        // 0x1b9bfc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9bf8) {
            ctx->pc = 0x1B9C0Cu;
            goto label_1b9c0c;
        }
    }
    ctx->pc = 0x1B9C00u;
    // 0x1b9c00: 0xc065c40  jal         func_197100
    ctx->pc = 0x1B9C00u;
    SET_GPR_U32(ctx, 31, 0x1B9C08u);
    ctx->pc = 0x1B9C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9C00u;
    // 0x1b9c04: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1B9C00u, 0x1B9C08u)) {
        return;
    }
    ctx->pc = 0x1B9C08u;
label_1b9c08:
    // 0x1b9c08: 0xae220260  sw          $v0, 0x260($s1)
    ctx->pc = 0x1b9c08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 2));
label_1b9c0c:
    // 0x1b9c0c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b9c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b9c10: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1B9C10u;
    SET_GPR_U32(ctx, 31, 0x1B9C18u);
    ctx->pc = 0x1B9C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9C10u;
    // 0x1b9c14: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B9C10u, 0x1B9C18u)) {
        return;
    }
    ctx->pc = 0x1B9C18u;
label_1b9c18:
    // 0x1b9c18: 0xc06d2f4  jal         func_1B4BD0
    ctx->pc = 0x1B9C18u;
    SET_GPR_U32(ctx, 31, 0x1B9C20u);
    ctx->pc = 0x1B9C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9C18u;
    // 0x1b9c1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4BD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4BD0u, 0x1B9C18u, 0x1B9C20u)) {
        return;
    }
    ctx->pc = 0x1B9C20u;
label_1b9c20:
    // 0x1b9c20: 0xae220270  sw          $v0, 0x270($s1)
    ctx->pc = 0x1b9c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 2));
    // 0x1b9c24: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b9c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9c28: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1b9c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b9c2c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1b9c2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b9c30: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b9c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b9c34: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C34u;
        // 0x1b9c38: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9C3Cu;
    // 0x1b9c3c: 0x0  nop
    ctx->pc = 0x1b9c3cu;
    // NOP
    ctx->pc = 0x1b9c40u;
}
