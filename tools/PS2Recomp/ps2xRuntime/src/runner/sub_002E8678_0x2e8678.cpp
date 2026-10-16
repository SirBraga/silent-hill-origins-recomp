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

// Function: sub_002E8678
// Address: 0x2e8678 - 0x2e8790
void sub_002E8678_0x2e8678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8678_0x2e8678");
#endif

    ctx->pc = 0x2e8678u;

    // 0x2e8678: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2e8678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e867c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2e867cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2e8680: 0x24635460  addiu       $v1, $v1, 0x5460
    ctx->pc = 0x2e8680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21600));
    // 0x2e8684: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2e8684u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2e8688: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2e8688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2e868c: 0x44c03  sra         $t1, $a0, 16
    ctx->pc = 0x2e868cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 4), 16));
    // 0x2e8690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e8690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e8694: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2e8694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e8698: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2e8698u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e869c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e869cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e86a0: 0x1242023  subu        $a0, $t1, $a0
    ctx->pc = 0x2e86a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2e86a4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2e86a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2e86a8: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E86A8u;
    {
        const bool branch_taken_0x2e86a8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2E86ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E86A8u;
        // 0x2e86ac: 0x33c03  sra         $a3, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e86a8) {
            ctx->pc = 0x2E86B8u;
            goto label_2e86b8;
        }
    }
    ctx->pc = 0x2E86B0u;
    // 0x2e86b0: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x2e86b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e86b4: 0x42023  negu        $a0, $a0
    ctx->pc = 0x2e86b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_2e86b8:
    // 0x2e86b8: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x2e86b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2e86bc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E86BCu;
    {
        const bool branch_taken_0x2e86bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e86bc) {
            ctx->pc = 0x2E86C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E86BCu;
            // 0x2e86c0: 0x33c43  sra         $a3, $v1, 17 (Delay Slot)
            SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E86D0u;
            goto label_2e86d0;
        }
    }
    ctx->pc = 0x2E86C4u;
    // 0x2e86c4: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x2e86c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2e86c8: 0x35080004  ori         $t0, $t0, 0x4
    ctx->pc = 0x2e86c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4);
    // 0x2e86cc: 0x33c43  sra         $a3, $v1, 17
    ctx->pc = 0x2e86ccu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 17));
label_2e86d0:
    // 0x2e86d0: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x2e86d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2e86d4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E86D4u;
    {
        const bool branch_taken_0x2e86d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e86d4) {
            ctx->pc = 0x2E86D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E86D4u;
            // 0x2e86d8: 0x33c83  sra         $a3, $v1, 18 (Delay Slot)
            SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E86E8u;
            goto label_2e86e8;
        }
    }
    ctx->pc = 0x2E86DCu;
    // 0x2e86dc: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x2e86dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2e86e0: 0x35080002  ori         $t0, $t0, 0x2
    ctx->pc = 0x2e86e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
    // 0x2e86e4: 0x33c83  sra         $a3, $v1, 18
    ctx->pc = 0x2e86e4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 18));
label_2e86e8:
    // 0x2e86e8: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x2e86e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2e86ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E86ECu;
    {
        const bool branch_taken_0x2e86ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E86F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E86ECu;
        // 0x2e86f0: 0x31020008  andi        $v0, $t0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e86ec) {
            ctx->pc = 0x2E8700u;
            goto label_2e8700;
        }
    }
    ctx->pc = 0x2E86F4u;
    // 0x2e86f4: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x2e86f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2e86f8: 0x35080001  ori         $t0, $t0, 0x1
    ctx->pc = 0x2e86f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x2e86fc: 0x31020008  andi        $v0, $t0, 0x8
    ctx->pc = 0x2e86fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
label_2e8700:
    // 0x2e8700: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8700u;
    {
        const bool branch_taken_0x2e8700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8700u;
        // 0x2e8704: 0x1241021  addu        $v0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8700) {
            ctx->pc = 0x2E8714u;
            goto label_2e8714;
        }
    }
    ctx->pc = 0x2E8708u;
    // 0x2e8708: 0x31cc3  sra         $v1, $v1, 19
    ctx->pc = 0x2e8708u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 19));
    // 0x2e870c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E870Cu;
    {
        const bool branch_taken_0x2e870c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E870Cu;
        // 0x2e8710: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e870c) {
            ctx->pc = 0x2E8720u;
            goto label_2e8720;
        }
    }
    ctx->pc = 0x2E8714u;
label_2e8714:
    // 0x2e8714: 0x1241023  subu        $v0, $t1, $a0
    ctx->pc = 0x2e8714u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2e8718: 0x31cc3  sra         $v1, $v1, 19
    ctx->pc = 0x2e8718u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 19));
    // 0x2e871c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e871cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e8720:
    // 0x2e8720: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2e8720u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2e8724: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2e8724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e8728: 0x24047fff  addiu       $a0, $zero, 0x7FFF
    ctx->pc = 0x2e8728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x2e872c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2e872cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e8730: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8730u;
    {
        const bool branch_taken_0x2e8730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8730u;
        // 0x2e8734: 0x28628000  slti        $v0, $v1, -0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294934528) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8730) {
            ctx->pc = 0x2E8740u;
            goto label_2e8740;
        }
    }
    ctx->pc = 0x2E8738u;
    // 0x2e8738: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8738u;
    {
        const bool branch_taken_0x2e8738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8738u;
        // 0x2e873c: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8738) {
            ctx->pc = 0x2E874Cu;
            goto label_2e874c;
        }
    }
    ctx->pc = 0x2E8740u;
label_2e8740:
    // 0x2e8740: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E8740u;
    {
        const bool branch_taken_0x2e8740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8740u;
        // 0x2e8744: 0x24028000  addiu       $v0, $zero, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8740) {
            ctx->pc = 0x2E874Cu;
            goto label_2e874c;
        }
    }
    ctx->pc = 0x2E8748u;
    // 0x2e8748: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2e8748u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2e874c:
    // 0x2e874c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2e874cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2e8750: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x2e8750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2e8754: 0x24425440  addiu       $v0, $v0, 0x5440
    ctx->pc = 0x2e8754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21568));
    // 0x2e8758: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2e8758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2e875c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e875cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e8760: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2e8760u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e8764: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2e8764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2e8768: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8768u;
    {
        const bool branch_taken_0x2e8768 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2E876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8768u;
        // 0x2e876c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8768) {
            ctx->pc = 0x2E8778u;
            goto label_2e8778;
        }
    }
    ctx->pc = 0x2E8770u;
    // 0x2e8770: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8770u;
    {
        const bool branch_taken_0x2e8770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8770u;
        // 0x2e8774: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8770) {
            ctx->pc = 0x2E8788u;
            goto label_2e8788;
        }
    }
    ctx->pc = 0x2E8778u;
label_2e8778:
    // 0x2e8778: 0x28420059  slti        $v0, $v0, 0x59
    ctx->pc = 0x2e8778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)89) ? 1 : 0);
    // 0x2e877c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E877Cu;
    {
        const bool branch_taken_0x2e877c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E877Cu;
        // 0x2e8780: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e877c) {
            ctx->pc = 0x2E8788u;
            goto label_2e8788;
        }
    }
    ctx->pc = 0x2E8784u;
    // 0x2e8784: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2e8784u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_2e8788:
    // 0x2e8788: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8788u;
        // 0x2e878c: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8790u;
}
