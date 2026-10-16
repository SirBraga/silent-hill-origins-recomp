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

// Function: sub_002564D8
// Address: 0x2564d8 - 0x256560
void sub_002564D8_0x2564d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002564D8_0x2564d8");
#endif

    switch (ctx->pc) {
        case 0x256510u: goto label_256510;
        case 0x256524u: goto label_256524;
        default: break;
    }

    ctx->pc = 0x2564d8u;

    // 0x2564d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2564d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2564dc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2564dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2564e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2564e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2564e4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2564e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2564e8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2564e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2564ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2564ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2564f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2564f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2564f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2564f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2564f8: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2564F8u;
    {
        const bool branch_taken_0x2564f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2564FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2564F8u;
        // 0x2564fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2564f8) {
            ctx->pc = 0x256534u;
            goto label_256534;
        }
    }
    ctx->pc = 0x256500u;
    // 0x256500: 0x26710020  addiu       $s1, $s3, 0x20
    ctx->pc = 0x256500u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x256504: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x256504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256508: 0xc0960e0  jal         func_258380
    ctx->pc = 0x256508u;
    SET_GPR_U32(ctx, 31, 0x256510u);
    ctx->pc = 0x25650Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256508u;
    // 0x25650c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258380u, 0x256508u, 0x256510u)) {
        return;
    }
    ctx->pc = 0x256510u;
label_256510:
    // 0x256510: 0x443000a  bgezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x256510u;
    {
        const bool branch_taken_0x256510 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x256510) {
            ctx->pc = 0x256514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256510u;
            // 0x256514: 0xa6420006  sh          $v0, 0x6($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25653Cu;
            goto label_25653c;
        }
    }
    ctx->pc = 0x256518u;
    // 0x256518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x256518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25651c: 0xc0960a0  jal         func_258280
    ctx->pc = 0x25651Cu;
    SET_GPR_U32(ctx, 31, 0x256524u);
    ctx->pc = 0x256520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25651Cu;
    // 0x256520: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258280u, 0x25651Cu, 0x256524u)) {
        return;
    }
    ctx->pc = 0x256524u;
label_256524:
    // 0x256524: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x256524u;
    {
        const bool branch_taken_0x256524 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x256524) {
            ctx->pc = 0x256528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256524u;
            // 0x256528: 0xa6420006  sh          $v0, 0x6($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25653Cu;
            goto label_25653c;
        }
    }
    ctx->pc = 0x25652Cu;
    // 0x25652c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25652Cu;
    {
        const bool branch_taken_0x25652c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x256530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25652Cu;
        // 0x256530: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25652c) {
            ctx->pc = 0x256540u;
            goto label_256540;
        }
    }
    ctx->pc = 0x256534u;
label_256534:
    // 0x256534: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x256534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x256538: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x256538u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
label_25653c:
    // 0x25653c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x25653cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_256540:
    // 0x256540: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x256540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x256544: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x256544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x256548: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x256548u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25654c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x25654cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x256550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256554: 0x3e00008  jr          $ra
    ctx->pc = 0x256554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256554u;
        // 0x256558: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25655Cu;
    // 0x25655c: 0x0  nop
    ctx->pc = 0x25655cu;
    // NOP
    ctx->pc = 0x256560u;
}
