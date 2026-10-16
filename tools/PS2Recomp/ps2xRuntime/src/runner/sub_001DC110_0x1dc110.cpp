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

// Function: sub_001DC110
// Address: 0x1dc110 - 0x1dc240
void sub_001DC110_0x1dc110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC110_0x1dc110");
#endif

    ctx->pc = 0x1dc110u;

    // 0x1dc110: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1dc110u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1dc114: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1dc114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc118: 0x8cc3e664  lw          $v1, -0x199C($a2)
    ctx->pc = 0x1dc118u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E664u));
    // 0x1dc11c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1dc11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1dc120: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1dc120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dc124: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1dc124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1dc128: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1dc128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1dc12c: 0x8cc2e664  lw          $v0, -0x199C($a2)
    ctx->pc = 0x1dc12cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E664u));
    // 0x1dc130: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1dc130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1dc134: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1dc134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1dc138: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1dc138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1dc13c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1dc13cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1dc140: 0x8cc3e664  lw          $v1, -0x199C($a2)
    ctx->pc = 0x1dc140u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E664u));
    // 0x1dc144: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1dc144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1dc148: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dc148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dc14c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1dc14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1dc150: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1dc150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x1dc154: 0x8cc2e664  lw          $v0, -0x199C($a2)
    ctx->pc = 0x1dc154u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E664u));
    // 0x1dc158: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1dc158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1dc15c: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1dc15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1dc160: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1dc160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1dc164: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x1dc164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x1dc168: 0x8cc3e664  lw          $v1, -0x199C($a2)
    ctx->pc = 0x1dc168u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E664u));
    // 0x1dc16c: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1dc16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1dc170: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1dc170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1dc174: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1dc174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1dc178: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x1dc178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x1dc17c: 0x8cc2e664  lw          $v0, -0x199C($a2)
    ctx->pc = 0x1dc17cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E664u));
    // 0x1dc180: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1dc180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1dc184: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x1dc184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1dc188: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1dc188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1dc18c: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x1dc18cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x1dc190: 0x8cc3e664  lw          $v1, -0x199C($a2)
    ctx->pc = 0x1dc190u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E664u));
    // 0x1dc194: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x1dc194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1dc198: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1dc198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1dc19c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1dc19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1dc1a0: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x1dc1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x1dc1a4: 0x8cc4e664  lw          $a0, -0x199C($a2)
    ctx->pc = 0x1dc1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33E664u));
    // 0x1dc1a8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1dc1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1dc1ac: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x1dc1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1dc1b0: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1dc1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1dc1b4: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x1dc1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x1dc1b8: 0x8cc2e664  lw          $v0, -0x199C($a2)
    ctx->pc = 0x1dc1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E664u));
    // 0x1dc1bc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1dc1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1dc1c0: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1dc1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1dc1c4: 0x8cc3e664  lw          $v1, -0x199C($a2)
    ctx->pc = 0x1dc1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E664u));
    // 0x1dc1c8: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x1dc1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1dc1cc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1dc1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1dc1d0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DC1D0u;
    {
        const bool branch_taken_0x1dc1d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc1d0) {
            ctx->pc = 0x1DC1F8u;
            goto label_1dc1f8;
        }
    }
    ctx->pc = 0x1DC1D8u;
    // 0x1dc1d8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1dc1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1dc1dc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC1DCu;
    {
        const bool branch_taken_0x1dc1dc = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x1dc1dc) {
            ctx->pc = 0x1DC1E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC1DCu;
            // 0x1dc1e0: 0x3c02001e  lui         $v0, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC1F0u;
            goto label_1dc1f0;
        }
    }
    ctx->pc = 0x1DC1E4u;
    // 0x1dc1e4: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1dc1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1dc1e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1DC1E8u;
    {
        const bool branch_taken_0x1dc1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1E8u;
        // 0x1dc1ec: 0x2442c350  addiu       $v0, $v0, -0x3CB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc1e8) {
            ctx->pc = 0x1DC220u;
            goto label_1dc220;
        }
    }
    ctx->pc = 0x1DC1F0u;
label_1dc1f0:
    // 0x1dc1f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DC1F0u;
    {
        const bool branch_taken_0x1dc1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC1F0u;
        // 0x1dc1f4: 0x2442c240  addiu       $v0, $v0, -0x3DC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc1f0) {
            ctx->pc = 0x1DC220u;
            goto label_1dc220;
        }
    }
    ctx->pc = 0x1DC1F8u;
label_1dc1f8:
    // 0x1dc1f8: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1DC1F8u;
    {
        const bool branch_taken_0x1dc1f8 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x1dc1f8) {
            ctx->pc = 0x1DC234u;
            goto label_1dc234;
        }
    }
    ctx->pc = 0x1DC200u;
    // 0x1dc200: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1dc200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1dc204: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1dc204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1dc208: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC208u;
    {
        const bool branch_taken_0x1dc208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC208u;
        // 0x1dc20c: 0x3c02001e  lui         $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc208) {
            ctx->pc = 0x1DC218u;
            goto label_1dc218;
        }
    }
    ctx->pc = 0x1DC210u;
    // 0x1dc210: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC210u;
    {
        const bool branch_taken_0x1dc210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC210u;
        // 0x1dc214: 0x2442c470  addiu       $v0, $v0, -0x3B90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc210) {
            ctx->pc = 0x1DC220u;
            goto label_1dc220;
        }
    }
    ctx->pc = 0x1DC218u;
label_1dc218:
    // 0x1dc218: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x1dc218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x1dc21c: 0x2442cc80  addiu       $v0, $v0, -0x3380
    ctx->pc = 0x1dc21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954112));
label_1dc220:
    // 0x1dc220: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC220u;
    {
        const bool branch_taken_0x1dc220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC220u;
        // 0x1dc224: 0xace20048  sw          $v0, 0x48($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc220) {
            ctx->pc = 0x1DC234u;
            goto label_1dc234;
        }
    }
    ctx->pc = 0x1DC228u;
    // 0x1dc228: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1dc228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1dc22c: 0x244244b8  addiu       $v0, $v0, 0x44B8
    ctx->pc = 0x1dc22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17592));
    // 0x1dc230: 0xace20048  sw          $v0, 0x48($a3)
    ctx->pc = 0x1dc230u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 2));
label_1dc234:
    // 0x1dc234: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC234u;
        // 0x1dc238: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC23Cu;
    // 0x1dc23c: 0x0  nop
    ctx->pc = 0x1dc23cu;
    // NOP
    ctx->pc = 0x1dc240u;
}
