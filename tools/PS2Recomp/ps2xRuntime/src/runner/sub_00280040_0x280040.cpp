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

// Function: sub_00280040
// Address: 0x280040 - 0x280150
void sub_00280040_0x280040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280040_0x280040");
#endif

    switch (ctx->pc) {
        case 0x280088u: goto label_280088;
        case 0x2800d8u: goto label_2800d8;
        case 0x280114u: goto label_280114;
        default: break;
    }

    ctx->pc = 0x280040u;

    // 0x280040: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x280040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x280044: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x280044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x280048: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x280048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x28004c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x28004cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x280050: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x280050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x280054: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x280054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x280058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28005c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28005cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x280060: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x280060u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x280064: 0x12400033  beqz        $s2, . + 4 + (0x33 << 2)
    ctx->pc = 0x280064u;
    {
        const bool branch_taken_0x280064 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x280068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280064u;
        // 0x280068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280064) {
            ctx->pc = 0x280134u;
            goto label_280134;
        }
    }
    ctx->pc = 0x28006Cu;
    // 0x28006c: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x28006cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x280070: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x280070u;
    {
        const bool branch_taken_0x280070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280070u;
        // 0x280074: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280070) {
            ctx->pc = 0x280080u;
            goto label_280080;
        }
    }
    ctx->pc = 0x280078u;
    // 0x280078: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x280078u;
    {
        const bool branch_taken_0x280078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280078u;
        // 0x28007c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280078) {
            ctx->pc = 0x280134u;
            goto label_280134;
        }
    }
    ctx->pc = 0x280080u;
label_280080:
    // 0x280080: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x280080u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280084: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x280084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_280088:
    // 0x280088: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x280088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28008c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x28008cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x280090: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x280090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x280094: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x280094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x280098: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x280098u;
    {
        const bool branch_taken_0x280098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280098u;
        // 0x28009c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280098) {
            ctx->pc = 0x28011Cu;
            goto label_28011c;
        }
    }
    ctx->pc = 0x2800A0u;
    // 0x2800a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2800a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2800a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2800a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2800a8: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x2800a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x2800ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2800acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2800b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2800b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2800b4: 0x800008  jr          $a0
    ctx->pc = 0x2800B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2800BCu: goto label_2800bc;
            case 0x2800E8u: goto label_2800e8;
            case 0x2800F8u: goto label_2800f8;
            case 0x28011Cu: goto label_28011c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2800B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2800BCu;
label_2800bc:
    // 0x2800bc: 0x2458821  addu        $s1, $s2, $a1
    ctx->pc = 0x2800bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2800c0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2800c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2800c4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2800c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2800c8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2800C8u;
    {
        const bool branch_taken_0x2800c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2800CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2800C8u;
        // 0x2800cc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2800c8) {
            ctx->pc = 0x2800DCu;
            goto label_2800dc;
        }
    }
    ctx->pc = 0x2800D0u;
    // 0x2800d0: 0xc088c9e  jal         func_223278
    ctx->pc = 0x2800D0u;
    SET_GPR_U32(ctx, 31, 0x2800D8u);
    ctx->pc = 0x223278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x223278u, 0x2800D0u, 0x2800D8u)) {
        return;
    }
    ctx->pc = 0x2800D8u;
label_2800d8:
    // 0x2800d8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2800d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2800dc:
    // 0x2800dc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2800dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2800e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2800E0u;
    {
        const bool branch_taken_0x2800e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2800E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2800E0u;
        // 0x2800e4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2800e0) {
            ctx->pc = 0x280104u;
            goto label_280104;
        }
    }
    ctx->pc = 0x2800E8u;
label_2800e8:
    // 0x2800e8: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x2800e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2800ec: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2800ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2800f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2800F0u;
    {
        const bool branch_taken_0x2800f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2800F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2800F0u;
        // 0x2800f4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2800f0) {
            ctx->pc = 0x280104u;
            goto label_280104;
        }
    }
    ctx->pc = 0x2800F8u;
label_2800f8:
    // 0x2800f8: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x2800f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2800fc: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2800fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x280100: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x280100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_280104:
    // 0x280104: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280104u;
    {
        const bool branch_taken_0x280104 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x280108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280104u;
        // 0x280108: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280104) {
            ctx->pc = 0x280118u;
            goto label_280118;
        }
    }
    ctx->pc = 0x28010Cu;
    // 0x28010c: 0xc088c9e  jal         func_223278
    ctx->pc = 0x28010Cu;
    SET_GPR_U32(ctx, 31, 0x280114u);
    ctx->pc = 0x223278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x223278u, 0x28010Cu, 0x280114u)) {
        return;
    }
    ctx->pc = 0x280114u;
label_280114:
    // 0x280114: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x280114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_280118:
    // 0x280118: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x280118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_28011c:
    // 0x28011c: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x28011cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x280120: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x280120u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x280124: 0x2e630002  sltiu       $v1, $s3, 0x2
    ctx->pc = 0x280124u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x280128: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x280128u;
    {
        const bool branch_taken_0x280128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280128u;
        // 0x28012c: 0x131980  sll         $v1, $s3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280128) {
            ctx->pc = 0x280088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280088;
        }
    }
    ctx->pc = 0x280130u;
    // 0x280130: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x280130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280134:
    // 0x280134: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x280134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x280138: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x280138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28013c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28013cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280140: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x280140u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280148: 0x3e00008  jr          $ra
    ctx->pc = 0x280148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280148u;
        // 0x28014c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280150u;
}
