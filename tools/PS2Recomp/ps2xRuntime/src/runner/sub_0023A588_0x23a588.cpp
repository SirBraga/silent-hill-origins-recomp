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

// Function: sub_0023A588
// Address: 0x23a588 - 0x23a6b8
void sub_0023A588_0x23a588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A588_0x23a588");
#endif

    ctx->pc = 0x23a588u;

    // 0x23a588: 0x8f8284b4  lw          $v0, -0x7B4C($gp)
    ctx->pc = 0x23a588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935732)));
    // 0x23a58c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23a58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23a590: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A590u;
    {
        const bool branch_taken_0x23a590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A590u;
        // 0x23a594: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a590) {
            ctx->pc = 0x23A5A8u;
            goto label_23a5a8;
        }
    }
    ctx->pc = 0x23A598u;
    // 0x23a598: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x23a598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x23a59c: 0x244455c0  addiu       $a0, $v0, 0x55C0
    ctx->pc = 0x23a59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21952));
    // 0x23a5a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23A5A0u;
    {
        const bool branch_taken_0x23a5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5A0u;
        // 0x23a5a4: 0x246a55d0  addiu       $t2, $v1, 0x55D0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 21968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a5a0) {
            ctx->pc = 0x23A5B8u;
            goto label_23a5b8;
        }
    }
    ctx->pc = 0x23A5A8u;
label_23a5a8:
    // 0x23a5a8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x23a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x23a5ac: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x23a5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x23a5b0: 0x244455e0  addiu       $a0, $v0, 0x55E0
    ctx->pc = 0x23a5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21984));
    // 0x23a5b4: 0x246a55f0  addiu       $t2, $v1, 0x55F0
    ctx->pc = 0x23a5b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 22000));
label_23a5b8:
    // 0x23a5b8: 0x8f838498  lw          $v1, -0x7B68($gp)
    ctx->pc = 0x23a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935704)));
    // 0x23a5bc: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x23A5BCu;
    {
        const bool branch_taken_0x23a5bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5BCu;
        // 0x23a5c0: 0x8f8290fc  lw          $v0, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a5bc) {
            ctx->pc = 0x23A634u;
            goto label_23a634;
        }
    }
    ctx->pc = 0x23A5C4u;
    // 0x23a5c4: 0x624821  addu        $t1, $v1, $v0
    ctx->pc = 0x23a5c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a5c8: 0x8d220058  lw          $v0, 0x58($t1)
    ctx->pc = 0x23a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x23a5cc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A5CCu;
    {
        const bool branch_taken_0x23a5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a5cc) {
            ctx->pc = 0x23A5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A5CCu;
            // 0x23a5d0: 0x8f828498  lw          $v0, -0x7B68($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A5E0u;
            goto label_23a5e0;
        }
    }
    ctx->pc = 0x23A5D4u;
    // 0x23a5d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x23a5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x23a5d8: 0xad200058  sw          $zero, 0x58($t1)
    ctx->pc = 0x23a5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 88), GPR_U32(ctx, 0));
    // 0x23a5dc: 0x8f828498  lw          $v0, -0x7B68($gp)
    ctx->pc = 0x23a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935704)));
label_23a5e0:
    // 0x23a5e0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x23a5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x23a5e4: 0x3c06fff8  lui         $a2, 0xFFF8
    ctx->pc = 0x23a5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65528 << 16));
    // 0x23a5e8: 0x34a5c000  ori         $a1, $a1, 0xC000
    ctx->pc = 0x23a5e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49152);
    // 0x23a5ec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x23a5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x23a5f0: 0x34c6001f  ori         $a2, $a2, 0x1F
    ctx->pc = 0x23a5f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)31);
    // 0x23a5f4: 0xad240058  sw          $a0, 0x58($t1)
    ctx->pc = 0x23a5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 88), GPR_U32(ctx, 4));
    // 0x23a5f8: 0x8d280010  lw          $t0, 0x10($t1)
    ctx->pc = 0x23a5f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x23a5fc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x23a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23a600: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x23a600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x23a604: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x23a604u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x23a608: 0x8d24000c  lw          $a0, 0xC($t1)
    ctx->pc = 0x23a608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x23a60c: 0x30473fff  andi        $a3, $v0, 0x3FFF
    ctx->pc = 0x23a60cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x23a610: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x23a610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x23a614: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x23a614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x23a618: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x23a618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x23a61c: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x23a61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x23a620: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x23a620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x23a624: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x23a624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x23a628: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x23a628u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x23a62c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x23a62cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x23a630: 0xad24000c  sw          $a0, 0xC($t1)
    ctx->pc = 0x23a630u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 4));
label_23a634:
    // 0x23a634: 0x8f83849c  lw          $v1, -0x7B64($gp)
    ctx->pc = 0x23a634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935708)));
    // 0x23a638: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x23A638u;
    {
        const bool branch_taken_0x23a638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A638u;
        // 0x23a63c: 0x8f8290fc  lw          $v0, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a638) {
            ctx->pc = 0x23A6B0u;
            goto label_23a6b0;
        }
    }
    ctx->pc = 0x23A640u;
    // 0x23a640: 0x624821  addu        $t1, $v1, $v0
    ctx->pc = 0x23a640u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23a644: 0x8d220058  lw          $v0, 0x58($t1)
    ctx->pc = 0x23a644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x23a648: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23A648u;
    {
        const bool branch_taken_0x23a648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a648) {
            ctx->pc = 0x23A64Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A648u;
            // 0x23a64c: 0x8f82849c  lw          $v0, -0x7B64($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A65Cu;
            goto label_23a65c;
        }
    }
    ctx->pc = 0x23A650u;
    // 0x23a650: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x23a650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x23a654: 0xad200058  sw          $zero, 0x58($t1)
    ctx->pc = 0x23a654u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 88), GPR_U32(ctx, 0));
    // 0x23a658: 0x8f82849c  lw          $v0, -0x7B64($gp)
    ctx->pc = 0x23a658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935708)));
label_23a65c:
    // 0x23a65c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x23a65cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x23a660: 0x3c06fff8  lui         $a2, 0xFFF8
    ctx->pc = 0x23a660u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65528 << 16));
    // 0x23a664: 0x34a5c000  ori         $a1, $a1, 0xC000
    ctx->pc = 0x23a664u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49152);
    // 0x23a668: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x23a668u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x23a66c: 0x34c6001f  ori         $a2, $a2, 0x1F
    ctx->pc = 0x23a66cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)31);
    // 0x23a670: 0xad2a0058  sw          $t2, 0x58($t1)
    ctx->pc = 0x23a670u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 88), GPR_U32(ctx, 10));
    // 0x23a674: 0x8d280010  lw          $t0, 0x10($t1)
    ctx->pc = 0x23a674u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x23a678: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x23a678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x23a67c: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x23a67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x23a680: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x23a680u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x23a684: 0x8d24000c  lw          $a0, 0xC($t1)
    ctx->pc = 0x23a684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x23a688: 0x30473fff  andi        $a3, $v0, 0x3FFF
    ctx->pc = 0x23a688u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x23a68c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x23a68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x23a690: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x23a690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x23a694: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x23a694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x23a698: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x23a698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x23a69c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x23a69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x23a6a0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x23a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x23a6a4: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x23a6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x23a6a8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x23a6a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x23a6ac: 0xad24000c  sw          $a0, 0xC($t1)
    ctx->pc = 0x23a6acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 4));
label_23a6b0:
    // 0x23a6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x23A6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A6B8u;
}
