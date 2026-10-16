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

// Function: sub_001D81A0
// Address: 0x1d81a0 - 0x1d8240
void sub_001D81A0_0x1d81a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D81A0_0x1d81a0");
#endif

    ctx->pc = 0x1d81a0u;

    // 0x1d81a0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D81A0u;
    {
        const bool branch_taken_0x1d81a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D81A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81A0u;
        // 0x1d81a4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d81a0) {
            ctx->pc = 0x1D81C4u;
            goto label_1d81c4;
        }
    }
    ctx->pc = 0x1D81A8u;
    // 0x1d81a8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d81a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d81ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d81acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d81b0: 0x8c449d90  lw          $a0, -0x6270($v0)
    ctx->pc = 0x1d81b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339D90u));
    // 0x1d81b4: 0xc31804  sllv        $v1, $v1, $a2
    ctx->pc = 0x1d81b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x1d81b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d81b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d81bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D81BCu;
    {
        const bool branch_taken_0x1d81bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D81C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81BCu;
        // 0x1d81c0: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d81bc) {
            ctx->pc = 0x1D81E0u;
            goto label_1d81e0;
        }
    }
    ctx->pc = 0x1D81C4u;
label_1d81c4:
    // 0x1d81c4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d81c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d81c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d81c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d81cc: 0x8c449d90  lw          $a0, -0x6270($v0)
    ctx->pc = 0x1d81ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339D90u));
    // 0x1d81d0: 0xc31804  sllv        $v1, $v1, $a2
    ctx->pc = 0x1d81d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x1d81d4: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1d81d4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1d81d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d81d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d81dc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1d81dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1d81e0:
    // 0x1d81e0: 0xac449d90  sw          $a0, -0x6270($v0)
    ctx->pc = 0x1d81e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294942096), GPR_U32(ctx, 4));
    // 0x1d81e4: 0x8ca39d90  lw          $v1, -0x6270($a1)
    ctx->pc = 0x1d81e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294942096)));
    // 0x1d81e8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1d81e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d81ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D81ECu;
    {
        const bool branch_taken_0x1d81ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D81F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81ECu;
        // 0x1d81f0: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d81ec) {
            ctx->pc = 0x1D820Cu;
            goto label_1d820c;
        }
    }
    ctx->pc = 0x1D81F4u;
    // 0x1d81f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D81F4u;
    {
        const bool branch_taken_0x1d81f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D81F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81F4u;
        // 0x1d81f8: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d81f4) {
            ctx->pc = 0x1D8204u;
            goto label_1d8204;
        }
    }
    ctx->pc = 0x1D81FCu;
    // 0x1d81fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D81FCu;
    {
        const bool branch_taken_0x1d81fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81FCu;
        // 0x1d8200: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d81fc) {
            ctx->pc = 0x1D8224u;
            goto label_1d8224;
        }
    }
    ctx->pc = 0x1D8204u;
label_1d8204:
    // 0x1d8204: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8204u;
    {
        const bool branch_taken_0x1d8204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8204u;
        // 0x1d8208: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8204) {
            ctx->pc = 0x1D8224u;
            goto label_1d8224;
        }
    }
    ctx->pc = 0x1D820Cu;
label_1d820c:
    // 0x1d820c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1d820cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1d8210: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8210u;
    {
        const bool branch_taken_0x1d8210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8210u;
        // 0x1d8214: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8210) {
            ctx->pc = 0x1D8220u;
            goto label_1d8220;
        }
    }
    ctx->pc = 0x1D8218u;
    // 0x1d8218: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8218u;
    {
        const bool branch_taken_0x1d8218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8218u;
        // 0x1d821c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8218) {
            ctx->pc = 0x1D8224u;
            goto label_1d8224;
        }
    }
    ctx->pc = 0x1D8220u;
label_1d8220:
    // 0x1d8220: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d8220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d8224:
    // 0x1d8224: 0xac629c74  sw          $v0, -0x638C($v1)
    ctx->pc = 0x1d8224u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941812), GPR_U32(ctx, 2));
    // 0x1d8228: 0x8ca29d90  lw          $v0, -0x6270($a1)
    ctx->pc = 0x1d8228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294942096)));
    // 0x1d822c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1d822cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1d8230: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D8230u;
    {
        const bool branch_taken_0x1d8230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8230) {
            ctx->pc = 0x1D8234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8230u;
            // 0x1d8234: 0xac609c74  sw          $zero, -0x638C($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294941812), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8238u;
            goto label_1d8238;
        }
    }
    ctx->pc = 0x1D8238u;
label_1d8238:
    // 0x1d8238: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8240u;
}
