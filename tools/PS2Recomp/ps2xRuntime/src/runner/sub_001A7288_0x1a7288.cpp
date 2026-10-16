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

// Function: sub_001A7288
// Address: 0x1a7288 - 0x1a7320
void sub_001A7288_0x1a7288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7288_0x1a7288");
#endif

    switch (ctx->pc) {
        case 0x1a7314u: goto label_1a7314;
        default: break;
    }

    ctx->pc = 0x1a7288u;

    // 0x1a7288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a7288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a728c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1a728cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a7290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a7290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a7294: 0x94a30020  lhu         $v1, 0x20($a1)
    ctx->pc = 0x1a7294u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1a7298: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A7298u;
    {
        const bool branch_taken_0x1a7298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7298u;
        // 0x1a729c: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7298) {
            ctx->pc = 0x1A730Cu;
            goto label_1a730c;
        }
    }
    ctx->pc = 0x1A72A0u;
    // 0x1a72a0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1a72a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a72a4: 0x244281b0  addiu       $v0, $v0, -0x7E50
    ctx->pc = 0x1a72a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934960));
    // 0x1a72a8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1a72a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a72ac: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A72ACu;
    {
        const bool branch_taken_0x1a72ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A72B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72ACu;
        // 0x1a72b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a72ac) {
            ctx->pc = 0x1A72D4u;
            goto label_1a72d4;
        }
    }
    ctx->pc = 0x1A72B4u;
    // 0x1a72b4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a72b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a72b8: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1a72b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a72bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A72BCu;
    {
        const bool branch_taken_0x1a72bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A72C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72BCu;
        // 0x1a72c0: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a72bc) {
            ctx->pc = 0x1A72CCu;
            goto label_1a72cc;
        }
    }
    ctx->pc = 0x1A72C4u;
    // 0x1a72c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A72C4u;
    {
        const bool branch_taken_0x1a72c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A72C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72C4u;
        // 0x1a72c8: 0x9502002e  lhu         $v0, 0x2E($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 46)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a72c4) {
            ctx->pc = 0x1A72D8u;
            goto label_1a72d8;
        }
    }
    ctx->pc = 0x1A72CCu;
label_1a72cc:
    // 0x1a72cc: 0xc23818  mult        $a3, $a2, $v0
    ctx->pc = 0x1a72ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1a72d0: 0xe34021  addu        $t0, $a3, $v1
    ctx->pc = 0x1a72d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_1a72d4:
    // 0x1a72d4: 0x9502002e  lhu         $v0, 0x2E($t0)
    ctx->pc = 0x1a72d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 46)));
label_1a72d8:
    // 0x1a72d8: 0x9487001c  lhu         $a3, 0x1C($a0)
    ctx->pc = 0x1a72d8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1a72dc: 0x30467fff  andi        $a2, $v0, 0x7FFF
    ctx->pc = 0x1a72dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1a72e0: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1a72e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1a72e4: 0xc7182b  sltu        $v1, $a2, $a3
    ctx->pc = 0x1a72e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1a72e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A72E8u;
    {
        const bool branch_taken_0x1a72e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A72ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72E8u;
        // 0x1a72ec: 0x3049ffff  andi        $t1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a72e8) {
            ctx->pc = 0x1A72F8u;
            goto label_1a72f8;
        }
    }
    ctx->pc = 0x1A72F0u;
    // 0x1a72f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A72F0u;
    {
        const bool branch_taken_0x1a72f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A72F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A72F0u;
        // 0x1a72f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a72f0) {
            ctx->pc = 0x1A7300u;
            goto label_1a7300;
        }
    }
    ctx->pc = 0x1A72F8u;
label_1a72f8:
    // 0x1a72f8: 0xc71023  subu        $v0, $a2, $a3
    ctx->pc = 0x1a72f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1a72fc: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x1a72fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1a7300:
    // 0x1a7300: 0x30c67fff  andi        $a2, $a2, 0x7FFF
    ctx->pc = 0x1a7300u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32767);
    // 0x1a7304: 0xc91025  or          $v0, $a2, $t1
    ctx->pc = 0x1a7304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x1a7308: 0xa502002e  sh          $v0, 0x2E($t0)
    ctx->pc = 0x1a7308u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 46), (uint16_t)GPR_U32(ctx, 2));
label_1a730c:
    // 0x1a730c: 0xc06a78e  jal         func_1A9E38
    ctx->pc = 0x1A730Cu;
    SET_GPR_U32(ctx, 31, 0x1A7314u);
    ctx->pc = 0x1A9E38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9E38u, 0x1A730Cu, 0x1A7314u)) {
        return;
    }
    ctx->pc = 0x1A7314u;
label_1a7314:
    // 0x1a7314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a7314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7318: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7318u;
        // 0x1a731c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7320u;
}
