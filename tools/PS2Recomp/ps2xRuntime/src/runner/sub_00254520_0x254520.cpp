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

// Function: sub_00254520
// Address: 0x254520 - 0x2545c0
void sub_00254520_0x254520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254520_0x254520");
#endif

    switch (ctx->pc) {
        case 0x254540u: goto label_254540;
        case 0x254568u: goto label_254568;
        case 0x254578u: goto label_254578;
        case 0x254584u: goto label_254584;
        case 0x254594u: goto label_254594;
        case 0x2545a0u: goto label_2545a0;
        default: break;
    }

    ctx->pc = 0x254520u;

    // 0x254520: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x254520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x254524: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x254524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x254528: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x254528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25452c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25452cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254530: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x254530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x254534: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x254534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x254538: 0xc095556  jal         func_255558
    ctx->pc = 0x254538u;
    SET_GPR_U32(ctx, 31, 0x254540u);
    ctx->pc = 0x25453Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254538u;
    // 0x25453c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255558u, 0x254538u, 0x254540u)) {
        return;
    }
    ctx->pc = 0x254540u;
label_254540:
    // 0x254540: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x254540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254544: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x254544u;
    {
        const bool branch_taken_0x254544 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x254544) {
            ctx->pc = 0x254548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254544u;
            // 0x254548: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254558u;
            goto label_254558;
        }
    }
    ctx->pc = 0x25454Cu;
    // 0x25454c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x25454cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x254550: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x254550u;
    {
        const bool branch_taken_0x254550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254550u;
        // 0x254554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254550) {
            ctx->pc = 0x2545A8u;
            goto label_2545a8;
        }
    }
    ctx->pc = 0x254558u;
label_254558:
    // 0x254558: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x254558u;
    {
        const bool branch_taken_0x254558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254558) {
            ctx->pc = 0x25455Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254558u;
            // 0x25455c: 0x8c4500a0  lw          $a1, 0xA0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25458Cu;
            goto label_25458c;
        }
    }
    ctx->pc = 0x254560u;
    // 0x254560: 0xc095534  jal         func_2554D0
    ctx->pc = 0x254560u;
    SET_GPR_U32(ctx, 31, 0x254568u);
    ctx->pc = 0x254564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254560u;
    // 0x254564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2554D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2554D0u, 0x254560u, 0x254568u)) {
        return;
    }
    ctx->pc = 0x254568u;
label_254568:
    // 0x254568: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x254568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25456c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x25456cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x254570: 0xc092848  jal         func_24A120
    ctx->pc = 0x254570u;
    SET_GPR_U32(ctx, 31, 0x254578u);
    ctx->pc = 0x254574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254570u;
    // 0x254574: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x254570u, 0x254578u)) {
        return;
    }
    ctx->pc = 0x254578u;
label_254578:
    // 0x254578: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x254578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25457c: 0xc09281a  jal         func_24A068
    ctx->pc = 0x25457Cu;
    SET_GPR_U32(ctx, 31, 0x254584u);
    ctx->pc = 0x254580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25457Cu;
    // 0x254580: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x25457Cu, 0x254584u)) {
        return;
    }
    ctx->pc = 0x254584u;
label_254584:
    // 0x254584: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x254584u;
    {
        const bool branch_taken_0x254584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254584u;
        // 0x254588: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254584) {
            ctx->pc = 0x2545A8u;
            goto label_2545a8;
        }
    }
    ctx->pc = 0x25458Cu;
label_25458c:
    // 0x25458c: 0xc0957f0  jal         func_255FC0
    ctx->pc = 0x25458Cu;
    SET_GPR_U32(ctx, 31, 0x254594u);
    ctx->pc = 0x254590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25458Cu;
    // 0x254590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255FC0u, 0x25458Cu, 0x254594u)) {
        return;
    }
    ctx->pc = 0x254594u;
label_254594:
    // 0x254594: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x254594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x254598: 0xc095622  jal         func_255888
    ctx->pc = 0x254598u;
    SET_GPR_U32(ctx, 31, 0x2545A0u);
    ctx->pc = 0x25459Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254598u;
    // 0x25459c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255888u, 0x254598u, 0x2545A0u)) {
        return;
    }
    ctx->pc = 0x2545A0u;
label_2545a0:
    // 0x2545a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2545a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2545a4: 0x0  nop
    ctx->pc = 0x2545a4u;
    // NOP
label_2545a8:
    // 0x2545a8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2545a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2545ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2545acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2545b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2545b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2545b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2545b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2545b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2545B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2545BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2545B8u;
        // 0x2545bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2545B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2545C0u;
}
