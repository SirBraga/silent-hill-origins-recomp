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

// Function: sub_00189400
// Address: 0x189400 - 0x1894a0
void sub_00189400_0x189400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189400_0x189400");
#endif

    switch (ctx->pc) {
        case 0x189400u: goto label_189400;
        case 0x189404u: goto label_189404;
        case 0x189408u: goto label_189408;
        case 0x18940cu: goto label_18940c;
        case 0x189410u: goto label_189410;
        case 0x189414u: goto label_189414;
        case 0x189418u: goto label_189418;
        case 0x18941cu: goto label_18941c;
        case 0x189420u: goto label_189420;
        case 0x189424u: goto label_189424;
        case 0x189428u: goto label_189428;
        case 0x18942cu: goto label_18942c;
        case 0x189430u: goto label_189430;
        case 0x189434u: goto label_189434;
        case 0x189438u: goto label_189438;
        case 0x18943cu: goto label_18943c;
        case 0x189440u: goto label_189440;
        case 0x189444u: goto label_189444;
        case 0x189448u: goto label_189448;
        case 0x18944cu: goto label_18944c;
        case 0x189450u: goto label_189450;
        case 0x189454u: goto label_189454;
        case 0x189458u: goto label_189458;
        case 0x18945cu: goto label_18945c;
        case 0x189460u: goto label_189460;
        case 0x189464u: goto label_189464;
        case 0x189468u: goto label_189468;
        case 0x18946cu: goto label_18946c;
        case 0x189470u: goto label_189470;
        case 0x189474u: goto label_189474;
        case 0x189478u: goto label_189478;
        case 0x18947cu: goto label_18947c;
        case 0x189480u: goto label_189480;
        case 0x189484u: goto label_189484;
        case 0x189488u: goto label_189488;
        case 0x18948cu: goto label_18948c;
        case 0x189490u: goto label_189490;
        case 0x189494u: goto label_189494;
        case 0x189498u: goto label_189498;
        case 0x18949cu: goto label_18949c;
        default: break;
    }

    ctx->pc = 0x189400u;

label_189400:
    // 0x189400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x189400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_189404:
    // 0x189404: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x189404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_189408:
    // 0x189408: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x189408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18940c:
    // 0x18940c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18940cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_189410:
    // 0x189410: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x189410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_189414:
    // 0x189414: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x189414u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_189418:
    // 0x189418: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x189418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_18941c:
    // 0x18941c: 0x40f809  jalr        $v0
label_189420:
    if (ctx->pc == 0x189420u) {
        ctx->pc = 0x189420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18941Cu;
        // 0x189420: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189424u;
        goto label_189424;
    }
    ctx->pc = 0x18941Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x189424u);
        ctx->pc = 0x189420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18941Cu;
        // 0x189420: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18941Cu, 0x189424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x189424u;
label_189424:
    // 0x189424: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_189428:
    if (ctx->pc == 0x189428u) {
        ctx->pc = 0x189428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189424u;
        // 0x189428: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18942Cu;
        goto label_18942c;
    }
    ctx->pc = 0x189424u;
    {
        const bool branch_taken_0x189424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189424u;
        // 0x189428: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189424) {
            ctx->pc = 0x189488u;
            goto label_189488;
        }
    }
    ctx->pc = 0x18942Cu;
label_18942c:
    // 0x18942c: 0x8e040094  lw          $a0, 0x94($s0)
    ctx->pc = 0x18942cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_189430:
    // 0x189430: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x189430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_189434:
    // 0x189434: 0x50820009  beql        $a0, $v0, . + 4 + (0x9 << 2)
label_189438:
    if (ctx->pc == 0x189438u) {
        ctx->pc = 0x189438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189434u;
        // 0x189438: 0x8e0200ac  lw          $v0, 0xAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18943Cu;
        goto label_18943c;
    }
    ctx->pc = 0x189434u;
    {
        const bool branch_taken_0x189434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x189434) {
            ctx->pc = 0x189438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189434u;
            // 0x189438: 0x8e0200ac  lw          $v0, 0xAC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18945Cu;
            goto label_18945c;
        }
    }
    ctx->pc = 0x18943Cu;
label_18943c:
    // 0x18943c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18943cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_189440:
    // 0x189440: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_189444:
    if (ctx->pc == 0x189444u) {
        ctx->pc = 0x189444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189440u;
        // 0x189444: 0x8e0200ac  lw          $v0, 0xAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189448u;
        goto label_189448;
    }
    ctx->pc = 0x189440u;
    {
        const bool branch_taken_0x189440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189440) {
            ctx->pc = 0x189444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x189440u;
            // 0x189444: 0x8e0200ac  lw          $v0, 0xAC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18945Cu;
            goto label_18945c;
        }
    }
    ctx->pc = 0x189448u;
label_189448:
    // 0x189448: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x189448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_18944c:
    // 0x18944c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18944cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_189450:
    // 0x189450: 0xc07fd18  jal         func_1FF460
label_189454:
    if (ctx->pc == 0x189454u) {
        ctx->pc = 0x189454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189450u;
        // 0x189454: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189458u;
        goto label_189458;
    }
    ctx->pc = 0x189450u;
    SET_GPR_U32(ctx, 31, 0x189458u);
    ctx->pc = 0x189454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189450u;
    // 0x189454: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x189450u, 0x189458u)) {
        return;
    }
    ctx->pc = 0x189458u;
label_189458:
    // 0x189458: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x189458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_18945c:
    // 0x18945c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_189460:
    if (ctx->pc == 0x189460u) {
        ctx->pc = 0x189460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18945Cu;
        // 0x189460: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189464u;
        goto label_189464;
    }
    ctx->pc = 0x18945Cu;
    {
        const bool branch_taken_0x18945c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18945Cu;
        // 0x189460: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18945c) {
            ctx->pc = 0x189488u;
            goto label_189488;
        }
    }
    ctx->pc = 0x189464u;
label_189464:
    // 0x189464: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x189464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_189468:
    // 0x189468: 0xc0641d6  jal         func_190758
label_18946c:
    if (ctx->pc == 0x18946Cu) {
        ctx->pc = 0x18946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189468u;
        // 0x18946c: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189470u;
        goto label_189470;
    }
    ctx->pc = 0x189468u;
    SET_GPR_U32(ctx, 31, 0x189470u);
    ctx->pc = 0x18946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189468u;
    // 0x18946c: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190758u, 0x189468u, 0x189470u)) {
        return;
    }
    ctx->pc = 0x189470u;
label_189470:
    // 0x189470: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x189470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_189474:
    // 0x189474: 0x8e07009c  lw          $a3, 0x9C($s0)
    ctx->pc = 0x189474u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_189478:
    // 0x189478: 0x24a58b70  addiu       $a1, $a1, -0x7490
    ctx->pc = 0x189478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937456));
label_18947c:
    // 0x18947c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x18947cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_189480:
    // 0x189480: 0xc05a47c  jal         func_1691F0
label_189484:
    if (ctx->pc == 0x189484u) {
        ctx->pc = 0x189484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189480u;
        // 0x189484: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189488u;
        goto label_189488;
    }
    ctx->pc = 0x189480u;
    SET_GPR_U32(ctx, 31, 0x189488u);
    ctx->pc = 0x189484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189480u;
    // 0x189484: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1691F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1691F0u, 0x189480u, 0x189488u)) {
        return;
    }
    ctx->pc = 0x189488u;
label_189488:
    // 0x189488: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x189488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18948c:
    // 0x18948c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18948cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189490:
    // 0x189490: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x189490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_189494:
    // 0x189494: 0x3e00008  jr          $ra
label_189498:
    if (ctx->pc == 0x189498u) {
        ctx->pc = 0x189498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189494u;
        // 0x189498: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18949Cu;
        goto label_18949c;
    }
    ctx->pc = 0x189494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189494u;
        // 0x189498: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18949Cu;
label_18949c:
    // 0x18949c: 0x0  nop
    ctx->pc = 0x18949cu;
    // NOP
    ctx->pc = 0x1894a0u;
}
