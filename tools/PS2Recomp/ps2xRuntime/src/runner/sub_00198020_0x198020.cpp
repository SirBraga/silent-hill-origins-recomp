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

// Function: sub_00198020
// Address: 0x198020 - 0x1980b0
void sub_00198020_0x198020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198020_0x198020");
#endif

    switch (ctx->pc) {
        case 0x198080u: goto label_198080;
        default: break;
    }

    ctx->pc = 0x198020u;

    // 0x198020: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x198020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198024: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x198024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198028: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x198028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x19802c: 0x80a4000c  lb          $a0, 0xC($a1)
    ctx->pc = 0x19802cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x198030: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x198030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x198034: 0x8043000b  lb          $v1, 0xB($v0)
    ctx->pc = 0x198034u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x198038: 0x3884002f  xori        $a0, $a0, 0x2F
    ctx->pc = 0x198038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)47);
    // 0x19803c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x19803cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x198040: 0x3863002f  xori        $v1, $v1, 0x2F
    ctx->pc = 0x198040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)47);
    // 0x198044: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x198044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x198048: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x198048u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x19804c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19804Cu;
    {
        const bool branch_taken_0x19804c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x198050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19804Cu;
        // 0x198050: 0xaca209d8  sw          $v0, 0x9D8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 2520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19804c) {
            ctx->pc = 0x19805Cu;
            goto label_19805c;
        }
    }
    ctx->pc = 0x198054u;
    // 0x198054: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x198054u;
    {
        const bool branch_taken_0x198054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x198054) {
            ctx->pc = 0x198058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198054u;
            // 0x198058: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198064u;
            goto label_198064;
        }
    }
    ctx->pc = 0x19805Cu;
label_19805c:
    // 0x19805c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19805cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198060: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x198060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_198064:
    // 0x198064: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x198064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198068: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x198068u;
    {
        const bool branch_taken_0x198068 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x19806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198068u;
        // 0x19806c: 0xaca609dc  sw          $a2, 0x9DC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 2524), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198068) {
            ctx->pc = 0x1980A4u;
            goto label_1980a4;
        }
    }
    ctx->pc = 0x198070u;
    // 0x198070: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x198070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198074: 0x24a6000c  addiu       $a2, $a1, 0xC
    ctx->pc = 0x198074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x198078: 0x2408003d  addiu       $t0, $zero, 0x3D
    ctx->pc = 0x198078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x19807c: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x19807cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_198080:
    // 0x198080: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x198080u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x198084: 0x14680004  bne         $v1, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x198084u;
    {
        const bool branch_taken_0x198084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x198088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198084u;
        // 0x198088: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198084) {
            ctx->pc = 0x198098u;
            goto label_198098;
        }
    }
    ctx->pc = 0x19808Cu;
    // 0x19808c: 0x8ca209d4  lw          $v0, 0x9D4($a1)
    ctx->pc = 0x19808cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2516)));
    // 0x198090: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x198094: 0xaca209d4  sw          $v0, 0x9D4($a1)
    ctx->pc = 0x198094u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2516), GPR_U32(ctx, 2));
label_198098:
    // 0x198098: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x198098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x19809c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19809Cu;
    {
        const bool branch_taken_0x19809c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1980A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19809Cu;
        // 0x1980a0: 0xc41021  addu        $v0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19809c) {
            ctx->pc = 0x198080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198080;
        }
    }
    ctx->pc = 0x1980A4u;
label_1980a4:
    // 0x1980a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1980A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1980A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1980ACu;
    // 0x1980ac: 0x0  nop
    ctx->pc = 0x1980acu;
    // NOP
    ctx->pc = 0x1980b0u;
}
