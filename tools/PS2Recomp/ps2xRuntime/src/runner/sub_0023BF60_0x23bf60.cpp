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

// Function: sub_0023BF60
// Address: 0x23bf60 - 0x23c0a0
void sub_0023BF60_0x23bf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BF60_0x23bf60");
#endif

    ctx->pc = 0x23bf60u;

    // 0x23bf60: 0x3c0b0070  lui         $t3, 0x70
    ctx->pc = 0x23bf60u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)112 << 16));
    // 0x23bf64: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x23bf64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23bf68: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x23bf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x23bf6c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x23bf6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bf70: 0x8d644100  lw          $a0, 0x4100($t3)
    ctx->pc = 0x23bf70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x704100u));
    // 0x23bf74: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x23bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x23bf78: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x23bf78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23bf7c: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x23BF7Cu;
    {
        const bool branch_taken_0x23bf7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF7Cu;
        // 0x23bf80: 0x25684100  addiu       $t0, $t3, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 16640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bf7c) {
            ctx->pc = 0x23C098u;
            goto label_23c098;
        }
    }
    ctx->pc = 0x23BF84u;
    // 0x23bf84: 0x8ca90004  lw          $t1, 0x4($a1)
    ctx->pc = 0x23bf84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x23bf88: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x23bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x23bf8c: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x23bf8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x23bf90: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x23bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x23bf94: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x23bf94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23bf98: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x23BF98u;
    {
        const bool branch_taken_0x23bf98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bf98) {
            ctx->pc = 0x23C098u;
            goto label_23c098;
        }
    }
    ctx->pc = 0x23BFA0u;
    // 0x23bfa0: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x23bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x23bfa4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x23bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23bfa8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x23bfa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23bfac: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x23BFACu;
    {
        const bool branch_taken_0x23bfac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bfac) {
            ctx->pc = 0x23C098u;
            goto label_23c098;
        }
    }
    ctx->pc = 0x23BFB4u;
    // 0x23bfb4: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x23bfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x23bfb8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x23bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x23bfbc: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x23bfbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23bfc0: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x23BFC0u;
    {
        const bool branch_taken_0x23bfc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFC0u;
        // 0x23bfc4: 0xc4102a  slt         $v0, $a2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bfc0) {
            ctx->pc = 0x23C098u;
            goto label_23c098;
        }
    }
    ctx->pc = 0x23BFC8u;
    // 0x23bfc8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23BFC8u;
    {
        const bool branch_taken_0x23bfc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BFC8u;
        // 0x23bfcc: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bfc8) {
            ctx->pc = 0x23BFECu;
            goto label_23bfec;
        }
    }
    ctx->pc = 0x23BFD0u;
    // 0x23bfd0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x23bfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23bfd4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x23bfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x23bfd8: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x23bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x23bfdc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23bfe0: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x23bfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x23bfe4: 0x8d634100  lw          $v1, 0x4100($t3)
    ctx->pc = 0x23bfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16640)));
    // 0x23bfe8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x23bfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_23bfec:
    // 0x23bfec: 0x8d624100  lw          $v0, 0x4100($t3)
    ctx->pc = 0x23bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16640)));
    // 0x23bff0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x23bff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23bff4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x23bff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x23bff8: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x23bff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x23bffc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x23bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x23c000: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23c000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23c004: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x23c004u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x23c008: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23C008u;
    {
        const bool branch_taken_0x23c008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C008u;
        // 0x23c00c: 0x461023  subu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c008) {
            ctx->pc = 0x23C014u;
            goto label_23c014;
        }
    }
    ctx->pc = 0x23C010u;
    // 0x23c010: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x23c010u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_23c014:
    // 0x23c014: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x23c014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x23c018: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x23c018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x23c01c: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x23c01cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x23c020: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23C020u;
    {
        const bool branch_taken_0x23c020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C020u;
        // 0x23c024: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c020) {
            ctx->pc = 0x23C048u;
            goto label_23c048;
        }
    }
    ctx->pc = 0x23C028u;
    // 0x23c028: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x23c028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x23c02c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x23c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23c030: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x23c030u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x23c034: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x23c034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x23c038: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23c038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23c03c: 0xad420004  sw          $v0, 0x4($t2)
    ctx->pc = 0x23c03cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
    // 0x23c040: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x23c040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x23c044: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x23c044u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_23c048:
    // 0x23c048: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x23c048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x23c04c: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x23c04cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x23c050: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x23c050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x23c054: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x23c054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x23c058: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x23c058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x23c05c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x23c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23c060: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x23c060u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x23c064: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23C064u;
    {
        const bool branch_taken_0x23c064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C064u;
        // 0x23c068: 0x461023  subu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c064) {
            ctx->pc = 0x23C070u;
            goto label_23c070;
        }
    }
    ctx->pc = 0x23C06Cu;
    // 0x23c06c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x23c06cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_23c070:
    // 0x23c070: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x23c070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x23c074: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x23C074u;
    {
        const bool branch_taken_0x23c074 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x23c074) {
            ctx->pc = 0x23C098u;
            goto label_23c098;
        }
    }
    ctx->pc = 0x23C07Cu;
    // 0x23c07c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x23c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x23c080: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23C080u;
    {
        const bool branch_taken_0x23c080 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x23C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C080u;
        // 0x23c084: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c080) {
            ctx->pc = 0x23C098u;
            goto label_23c098;
        }
    }
    ctx->pc = 0x23C088u;
    // 0x23c088: 0xad430008  sw          $v1, 0x8($t2)
    ctx->pc = 0x23c088u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 3));
    // 0x23c08c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x23c08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x23c090: 0x3e00008  jr          $ra
    ctx->pc = 0x23C090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C090u;
        // 0x23c094: 0xad43000c  sw          $v1, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C098u;
label_23c098:
    // 0x23c098: 0x3e00008  jr          $ra
    ctx->pc = 0x23C098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C098u;
        // 0x23c09c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C0A0u;
}
