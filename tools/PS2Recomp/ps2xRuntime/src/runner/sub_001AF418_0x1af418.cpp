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

// Function: sub_001AF418
// Address: 0x1af418 - 0x1af4c0
void sub_001AF418_0x1af418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF418_0x1af418");
#endif

    switch (ctx->pc) {
        case 0x1af418u: goto label_1af418;
        case 0x1af41cu: goto label_1af41c;
        case 0x1af420u: goto label_1af420;
        case 0x1af424u: goto label_1af424;
        case 0x1af428u: goto label_1af428;
        case 0x1af42cu: goto label_1af42c;
        case 0x1af430u: goto label_1af430;
        case 0x1af434u: goto label_1af434;
        case 0x1af438u: goto label_1af438;
        case 0x1af43cu: goto label_1af43c;
        case 0x1af440u: goto label_1af440;
        case 0x1af444u: goto label_1af444;
        case 0x1af448u: goto label_1af448;
        case 0x1af44cu: goto label_1af44c;
        case 0x1af450u: goto label_1af450;
        case 0x1af454u: goto label_1af454;
        case 0x1af458u: goto label_1af458;
        case 0x1af45cu: goto label_1af45c;
        case 0x1af460u: goto label_1af460;
        case 0x1af464u: goto label_1af464;
        case 0x1af468u: goto label_1af468;
        case 0x1af46cu: goto label_1af46c;
        case 0x1af470u: goto label_1af470;
        case 0x1af474u: goto label_1af474;
        case 0x1af478u: goto label_1af478;
        case 0x1af47cu: goto label_1af47c;
        case 0x1af480u: goto label_1af480;
        case 0x1af484u: goto label_1af484;
        case 0x1af488u: goto label_1af488;
        case 0x1af48cu: goto label_1af48c;
        case 0x1af490u: goto label_1af490;
        case 0x1af494u: goto label_1af494;
        case 0x1af498u: goto label_1af498;
        case 0x1af49cu: goto label_1af49c;
        case 0x1af4a0u: goto label_1af4a0;
        case 0x1af4a4u: goto label_1af4a4;
        case 0x1af4a8u: goto label_1af4a8;
        case 0x1af4acu: goto label_1af4ac;
        case 0x1af4b0u: goto label_1af4b0;
        case 0x1af4b4u: goto label_1af4b4;
        case 0x1af4b8u: goto label_1af4b8;
        case 0x1af4bcu: goto label_1af4bc;
        default: break;
    }

    ctx->pc = 0x1af418u;

label_1af418:
    // 0x1af418: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1af41c:
    // 0x1af41c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1af41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1af420:
    // 0x1af420: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1af420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1af424:
    // 0x1af424: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1af424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1af428:
    // 0x1af428: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1af42c:
    // 0x1af42c: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_1af430:
    if (ctx->pc == 0x1AF430u) {
        ctx->pc = 0x1AF430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF42Cu;
        // 0x1af430: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF434u;
        goto label_1af434;
    }
    ctx->pc = 0x1AF42Cu;
    {
        const bool branch_taken_0x1af42c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF42Cu;
        // 0x1af430: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af42c) {
            ctx->pc = 0x1AF4A8u;
            goto label_1af4a8;
        }
    }
    ctx->pc = 0x1AF434u;
label_1af434:
    // 0x1af434: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1af434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1af438:
    // 0x1af438: 0x2c62000e  sltiu       $v0, $v1, 0xE
    ctx->pc = 0x1af438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_1af43c:
    // 0x1af43c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_1af440:
    if (ctx->pc == 0x1AF440u) {
        ctx->pc = 0x1AF440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF43Cu;
        // 0x1af440: 0x8e220258  lw          $v0, 0x258($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF444u;
        goto label_1af444;
    }
    ctx->pc = 0x1AF43Cu;
    {
        const bool branch_taken_0x1af43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af43c) {
            ctx->pc = 0x1AF440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF43Cu;
            // 0x1af440: 0x8e220258  lw          $v0, 0x258($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF490u;
            goto label_1af490;
        }
    }
    ctx->pc = 0x1AF444u;
label_1af444:
    // 0x1af444: 0x2462ffeb  addiu       $v0, $v1, -0x15
    ctx->pc = 0x1af444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967275));
label_1af448:
    // 0x1af448: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1af448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1af44c:
    // 0x1af44c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_1af450:
    if (ctx->pc == 0x1AF450u) {
        ctx->pc = 0x1AF450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF44Cu;
        // 0x1af450: 0x8e220258  lw          $v0, 0x258($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF454u;
        goto label_1af454;
    }
    ctx->pc = 0x1AF44Cu;
    {
        const bool branch_taken_0x1af44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af44c) {
            ctx->pc = 0x1AF450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF44Cu;
            // 0x1af450: 0x8e220258  lw          $v0, 0x258($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF490u;
            goto label_1af490;
        }
    }
    ctx->pc = 0x1AF454u;
label_1af454:
    // 0x1af454: 0x2462ffe1  addiu       $v0, $v1, -0x1F
    ctx->pc = 0x1af454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967265));
label_1af458:
    // 0x1af458: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1af458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1af45c:
    // 0x1af45c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_1af460:
    if (ctx->pc == 0x1AF460u) {
        ctx->pc = 0x1AF460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF45Cu;
        // 0x1af460: 0x8e220258  lw          $v0, 0x258($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF464u;
        goto label_1af464;
    }
    ctx->pc = 0x1AF45Cu;
    {
        const bool branch_taken_0x1af45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af45c) {
            ctx->pc = 0x1AF460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF45Cu;
            // 0x1af460: 0x8e220258  lw          $v0, 0x258($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF490u;
            goto label_1af490;
        }
    }
    ctx->pc = 0x1AF464u;
label_1af464:
    // 0x1af464: 0xc06ce22  jal         func_1B3888
label_1af468:
    if (ctx->pc == 0x1AF468u) {
        ctx->pc = 0x1AF46Cu;
        goto label_1af46c;
    }
    ctx->pc = 0x1AF464u;
    SET_GPR_U32(ctx, 31, 0x1AF46Cu);
    ctx->pc = 0x1B3888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3888u, 0x1AF464u, 0x1AF46Cu)) {
        return;
    }
    ctx->pc = 0x1AF46Cu;
label_1af46c:
    // 0x1af46c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1af46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1af470:
    // 0x1af470: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_1af474:
    if (ctx->pc == 0x1AF474u) {
        ctx->pc = 0x1AF474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF470u;
        // 0x1af474: 0x8e220258  lw          $v0, 0x258($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF478u;
        goto label_1af478;
    }
    ctx->pc = 0x1AF470u;
    {
        const bool branch_taken_0x1af470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1af470) {
            ctx->pc = 0x1AF474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF470u;
            // 0x1af474: 0x8e220258  lw          $v0, 0x258($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF490u;
            goto label_1af490;
        }
    }
    ctx->pc = 0x1AF478u;
label_1af478:
    // 0x1af478: 0xc06ce26  jal         func_1B3898
label_1af47c:
    if (ctx->pc == 0x1AF47Cu) {
        ctx->pc = 0x1AF480u;
        goto label_1af480;
    }
    ctx->pc = 0x1AF478u;
    SET_GPR_U32(ctx, 31, 0x1AF480u);
    ctx->pc = 0x1B3898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3898u, 0x1AF478u, 0x1AF480u)) {
        return;
    }
    ctx->pc = 0x1AF480u;
label_1af480:
    // 0x1af480: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1af480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1af484:
    // 0x1af484: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_1af488:
    if (ctx->pc == 0x1AF488u) {
        ctx->pc = 0x1AF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF484u;
        // 0x1af488: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF48Cu;
        goto label_1af48c;
    }
    ctx->pc = 0x1AF484u;
    {
        const bool branch_taken_0x1af484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1af484) {
            ctx->pc = 0x1AF488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF484u;
            // 0x1af488: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF4ACu;
            goto label_1af4ac;
        }
    }
    ctx->pc = 0x1AF48Cu;
label_1af48c:
    // 0x1af48c: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x1af48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1af490:
    // 0x1af490: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x1af490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1af494:
    // 0x1af494: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1af494u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1af498:
    // 0x1af498: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1af498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1af49c:
    // 0x1af49c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1af49cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1af4a0:
    // 0x1af4a0: 0x60f809  jalr        $v1
label_1af4a4:
    if (ctx->pc == 0x1AF4A4u) {
        ctx->pc = 0x1AF4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4A0u;
        // 0x1af4a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF4A8u;
        goto label_1af4a8;
    }
    ctx->pc = 0x1AF4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AF4A8u);
        ctx->pc = 0x1AF4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4A0u;
        // 0x1af4a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF4A0u, 0x1AF4A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF4A8u;
label_1af4a8:
    // 0x1af4a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1af4a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1af4ac:
    // 0x1af4ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1af4acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1af4b0:
    // 0x1af4b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af4b4:
    // 0x1af4b4: 0x3e00008  jr          $ra
label_1af4b8:
    if (ctx->pc == 0x1AF4B8u) {
        ctx->pc = 0x1AF4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4B4u;
        // 0x1af4b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF4BCu;
        goto label_1af4bc;
    }
    ctx->pc = 0x1AF4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4B4u;
        // 0x1af4b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF4BCu;
label_1af4bc:
    // 0x1af4bc: 0x0  nop
    ctx->pc = 0x1af4bcu;
    // NOP
    ctx->pc = 0x1af4c0u;
}
