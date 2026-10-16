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

// Function: sub_00325710
// Address: 0x325710 - 0x3257a0
void sub_00325710_0x325710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325710_0x325710");
#endif

    switch (ctx->pc) {
        case 0x32574cu: goto label_32574c;
        case 0x325764u: goto label_325764;
        case 0x325778u: goto label_325778;
        default: break;
    }

    ctx->pc = 0x325710u;

    // 0x325710: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x325710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x325714: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x325714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x325718: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x325718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x32571c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x32571cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x325720: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x325720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x325724: 0x2453753c  addiu       $s3, $v0, 0x753C
    ctx->pc = 0x325724u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 30012));
    // 0x325728: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x325728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x32572c: 0x2471d1e8  addiu       $s1, $v1, -0x2E18
    ctx->pc = 0x32572cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955496));
    // 0x325730: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x325730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x325734: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x325734u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325738: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x325738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32573c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32573cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325740: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x325740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325744: 0xc0c48d9  jal         func_312364
    ctx->pc = 0x325744u;
    SET_GPR_U32(ctx, 31, 0x32574Cu);
    ctx->pc = 0x325748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325744u;
    // 0x325748: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312364u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312364u, 0x325744u, 0x32574Cu)) {
        return;
    }
    ctx->pc = 0x32574Cu;
label_32574c:
    // 0x32574c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x32574Cu;
    {
        const bool branch_taken_0x32574c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32574Cu;
        // 0x325750: 0x3c100068  lui         $s0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32574c) {
            ctx->pc = 0x32577Cu;
            goto label_32577c;
        }
    }
    ctx->pc = 0x325754u;
    // 0x325754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x325754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325758: 0x8e0575f0  lw          $a1, 0x75F0($s0)
    ctx->pc = 0x325758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30192)));
    // 0x32575c: 0xc0c48d9  jal         func_312364
    ctx->pc = 0x32575Cu;
    SET_GPR_U32(ctx, 31, 0x325764u);
    ctx->pc = 0x325760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32575Cu;
    // 0x325760: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312364u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312364u, 0x32575Cu, 0x325764u)) {
        return;
    }
    ctx->pc = 0x325764u;
label_325764:
    // 0x325764: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x325764u;
    {
        const bool branch_taken_0x325764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325764u;
        // 0x325768: 0x8e0575f0  lw          $a1, 0x75F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325764) {
            ctx->pc = 0x32577Cu;
            goto label_32577c;
        }
    }
    ctx->pc = 0x32576Cu;
    // 0x32576c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32576cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325770: 0xc0c48d9  jal         func_312364
    ctx->pc = 0x325770u;
    SET_GPR_U32(ctx, 31, 0x325778u);
    ctx->pc = 0x325774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325770u;
    // 0x325774: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312364u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312364u, 0x325770u, 0x325778u)) {
        return;
    }
    ctx->pc = 0x325778u;
label_325778:
    // 0x325778: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x325778u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_32577c:
    // 0x32577c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x32577cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325780: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x325780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x325784: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x325784u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x325788: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x325788u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32578c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x32578cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325790: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x325790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325794: 0x3e00008  jr          $ra
    ctx->pc = 0x325794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325794u;
        // 0x325798: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32579Cu;
    // 0x32579c: 0x0  nop
    ctx->pc = 0x32579cu;
    // NOP
    ctx->pc = 0x3257a0u;
}
