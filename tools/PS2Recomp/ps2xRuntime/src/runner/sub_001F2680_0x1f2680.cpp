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

// Function: sub_001F2680
// Address: 0x1f2680 - 0x1f3018
void sub_001F2680_0x1f2680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2680_0x1f2680");
#endif

    switch (ctx->pc) {
        case 0x1f278cu: goto label_1f278c;
        case 0x1f2820u: goto label_1f2820;
        case 0x1f288cu: goto label_1f288c;
        case 0x1f2978u: goto label_1f2978;
        case 0x1f2a20u: goto label_1f2a20;
        case 0x1f2f98u: goto label_1f2f98;
        case 0x1f2fe0u: goto label_1f2fe0;
        default: break;
    }

    ctx->pc = 0x1f2680u;

    // 0x1f2680: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1f2680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1f2684: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f2684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1f2688: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x1f2688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x1f268c: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x1f268cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x1f2690: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f2690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2694: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x1f2694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x1f2698: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1f2698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1f269c: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x1f269cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x1f26a0: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x1f26a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x1f26a4: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x1f26a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
    // 0x1f26a8: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x1f26a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
    // 0x1f26ac: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x1f26acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
    // 0x1f26b0: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x1f26b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
    // 0x1f26b4: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1f26b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1f26b8: 0x8c46e970  lw          $a2, -0x1690($v0)
    ctx->pc = 0x1f26b8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x33E970u));
    // 0x1f26bc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f26bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1f26c0: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x1f26c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1f26c4: 0x8c54e974  lw          $s4, -0x168C($v0)
    ctx->pc = 0x1f26c4u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x33E974u));
    // 0x1f26c8: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1f26c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f26cc: 0x2cc20005  sltiu       $v0, $a2, 0x5
    ctx->pc = 0x1f26ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1f26d0: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1F26D0u;
    {
        const bool branch_taken_0x1f26d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F26D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26D0u;
        // 0x1f26d4: 0x8c93e978  lw          $s3, -0x1688($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f26d0) {
            ctx->pc = 0x1F279Cu;
            goto label_1f279c;
        }
    }
    ctx->pc = 0x1F26D8u;
    // 0x1f26d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1f26d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1f26dc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1f26dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1f26e0: 0x24422010  addiu       $v0, $v0, 0x2010
    ctx->pc = 0x1f26e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8208));
    // 0x1f26e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f26e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f26e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f26e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f26ec: 0x800008  jr          $a0
    ctx->pc = 0x1F26ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F26F4u: goto label_1f26f4;
            case 0x1F273Cu: goto label_1f273c;
            case 0x1F2750u: goto label_1f2750;
            case 0x1F2778u: goto label_1f2778;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F26ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F26F4u;
label_1f26f4:
    // 0x1f26f4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1f26f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x1f26f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f26f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f26fc: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1f26fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2700: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f2700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f2704: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f2704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f2708: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1f2708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1f270c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1f270cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1f2710: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1f2710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1f2714: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1f2714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1f2718: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f2718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f271c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F271Cu;
    {
        const bool branch_taken_0x1f271c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F271Cu;
        // 0x1f2720: 0x27b30040  addiu       $s3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f271c) {
            ctx->pc = 0x1F279Cu;
            goto label_1f279c;
        }
    }
    ctx->pc = 0x1F2724u;
    // 0x1f2724: 0x3c0142ff  lui         $at, 0x42FF
    ctx->pc = 0x1f2724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17151 << 16));
    // 0x1f2728: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f2728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f272c: 0x0  nop
    ctx->pc = 0x1f272cu;
    // NOP
    // 0x1f2730: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1f2730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1f2734: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1F2734u;
    {
        const bool branch_taken_0x1f2734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2734u;
        // 0x1f2738: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2734) {
            ctx->pc = 0x1F279Cu;
            goto label_1f279c;
        }
    }
    ctx->pc = 0x1F273Cu;
label_1f273c:
    // 0x1f273c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f273cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f2740: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F2740u;
    {
        const bool branch_taken_0x1f2740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2740u;
        // 0x1f2744: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2740) {
            ctx->pc = 0x1F279Cu;
            goto label_1f279c;
        }
    }
    ctx->pc = 0x1F2748u;
    // 0x1f2748: 0x10000226  b           . + 4 + (0x226 << 2)
    ctx->pc = 0x1F2748u;
    {
        const bool branch_taken_0x1f2748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2748u;
        // 0x1f274c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2748) {
            ctx->pc = 0x1F2FE4u;
            goto label_1f2fe4;
        }
    }
    ctx->pc = 0x1F2750u;
label_1f2750:
    // 0x1f2750: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f2750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f2754: 0x14400222  bnez        $v0, . + 4 + (0x222 << 2)
    ctx->pc = 0x1F2754u;
    {
        const bool branch_taken_0x1f2754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2754u;
        // 0x1f2758: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2754) {
            ctx->pc = 0x1F2FE0u;
            goto label_1f2fe0;
        }
    }
    ctx->pc = 0x1F275Cu;
    // 0x1f275c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1f275cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f2760: 0x27b30080  addiu       $s3, $sp, 0x80
    ctx->pc = 0x1f2760u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1f2764: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x1f2764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x1f2768: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x1f2768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x1f276c: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x1f276cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x1f2770: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F2770u;
    {
        const bool branch_taken_0x1f2770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2770u;
        // 0x1f2774: 0xafa20088  sw          $v0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2770) {
            ctx->pc = 0x1F279Cu;
            goto label_1f279c;
        }
    }
    ctx->pc = 0x1F2778u;
label_1f2778:
    // 0x1f2778: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f2778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f277c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F277Cu;
    {
        const bool branch_taken_0x1f277c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F277Cu;
        // 0x1f2780: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f277c) {
            ctx->pc = 0x1F279Cu;
            goto label_1f279c;
        }
    }
    ctx->pc = 0x1F2784u;
    // 0x1f2784: 0x10000217  b           . + 4 + (0x217 << 2)
    ctx->pc = 0x1F2784u;
    {
        const bool branch_taken_0x1f2784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2784u;
        // 0x1f2788: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2784) {
            ctx->pc = 0x1F2FE4u;
            goto label_1f2fe4;
        }
    }
    ctx->pc = 0x1F278Cu;
label_1f278c:
    // 0x1f278c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f278cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2790: 0xdc8234d0  ld          $v0, 0x34D0($a0)
    ctx->pc = 0x1f2790u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 13520)));
    // 0x1f2794: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1F2794u;
    {
        const bool branch_taken_0x1f2794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2794u;
        // 0x1f2798: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2794) {
            ctx->pc = 0x1F2968u;
            goto label_1f2968;
        }
    }
    ctx->pc = 0x1F279Cu;
label_1f279c:
    // 0x1f279c: 0x56800018  bnel        $s4, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F279Cu;
    {
        const bool branch_taken_0x1f279c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f279c) {
            ctx->pc = 0x1F27A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F279Cu;
            // 0x1f27a0: 0x293980a  movz        $s3, $s4, $s3 (Delay Slot)
            if (GPR_U64(ctx, 19) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2800u;
            goto label_1f2800;
        }
    }
    ctx->pc = 0x1F27A4u;
    // 0x1f27a4: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x1f27a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f27a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f27a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f27ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f27acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f27b0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1f27b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1f27b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f27b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f27b8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1f27b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1f27bc: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x1f27bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x1f27c0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1f27c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1f27c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1f27c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1f27c8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1f27c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f27cc: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x1f27ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x1f27d0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1f27d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1f27d4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1f27d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f27d8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1f27d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1f27dc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1f27dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1f27e0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1f27e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1f27e4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1f27e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1f27e8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1f27e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f27ec: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1f27ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1f27f0: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x1f27f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1f27f4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1f27f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1f27f8: 0x293980a  movz        $s3, $s4, $s3
    ctx->pc = 0x1f27f8u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20));
    // 0x1f27fc: 0x0  nop
    ctx->pc = 0x1f27fcu;
    // NOP
label_1f2800:
    // 0x1f2800: 0x3c16006b  lui         $s6, 0x6B
    ctx->pc = 0x1f2800u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)107 << 16));
    // 0x1f2804: 0x13c00059  beqz        $fp, . + 4 + (0x59 << 2)
    ctx->pc = 0x1F2804u;
    {
        const bool branch_taken_0x1f2804 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2804u;
        // 0x1f2808: 0x3c17006b  lui         $s7, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2804) {
            ctx->pc = 0x1F296Cu;
            goto label_1f296c;
        }
    }
    ctx->pc = 0x1F280Cu;
    // 0x1f280c: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x1f280cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1f2810: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2810u;
    {
        const bool branch_taken_0x1f2810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2810) {
            ctx->pc = 0x1F2814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2810u;
            // 0x1f2814: 0x8e510040  lw          $s1, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2828u;
            goto label_1f2828;
        }
    }
    ctx->pc = 0x1F2818u;
    // 0x1f2818: 0xc091a88  jal         func_246A20
    ctx->pc = 0x1F2818u;
    SET_GPR_U32(ctx, 31, 0x1F2820u);
    ctx->pc = 0x1F281Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2818u;
    // 0x1f281c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246A20u, 0x1F2818u, 0x1F2820u)) {
        return;
    }
    ctx->pc = 0x1F2820u;
label_1f2820:
    // 0x1f2820: 0x8e510040  lw          $s1, 0x40($s2)
    ctx->pc = 0x1f2820u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1f2824: 0x0  nop
    ctx->pc = 0x1f2824u;
    // NOP
label_1f2828:
    // 0x1f2828: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F2828u;
    {
        const bool branch_taken_0x1f2828 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2828u;
        // 0x1f282c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2828) {
            ctx->pc = 0x1F2834u;
            goto label_1f2834;
        }
    }
    ctx->pc = 0x1F2830u;
    // 0x1f2830: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1f2830u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f2834:
    // 0x1f2834: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F2834u;
    {
        const bool branch_taken_0x1f2834 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2834u;
        // 0x1f2838: 0xaec04134  sw          $zero, 0x4134($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 16692), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2834) {
            ctx->pc = 0x1F285Cu;
            goto label_1f285c;
        }
    }
    ctx->pc = 0x1F283Cu;
    // 0x1f283c: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x1f283cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x1f2840: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1f2840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1f2844: 0x38430005  xori        $v1, $v0, 0x5
    ctx->pc = 0x1f2844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x1f2848: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1f2848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1f284c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1f284cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1f2850: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1f2850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1f2854: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f2854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1f2858: 0xaec24134  sw          $v0, 0x4134($s6)
    ctx->pc = 0x1f2858u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16692), GPR_U32(ctx, 2));
label_1f285c:
    // 0x1f285c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1f285cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1f2860: 0x8c624138  lw          $v0, 0x4138($v1)
    ctx->pc = 0x1f2860u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4138u));
    // 0x1f2864: 0x1202003a  beq         $s0, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1F2864u;
    {
        const bool branch_taken_0x1f2864 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2864u;
        // 0x1f2868: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2864) {
            ctx->pc = 0x1F2950u;
            goto label_1f2950;
        }
    }
    ctx->pc = 0x1F286Cu;
    // 0x1f286c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F286Cu;
    {
        const bool branch_taken_0x1f286c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F286Cu;
        // 0x1f2870: 0xdee23510  ld          $v0, 0x3510($s7) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 23), 13584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f286c) {
            ctx->pc = 0x1F2894u;
            goto label_1f2894;
        }
    }
    ctx->pc = 0x1F2874u;
    // 0x1f2874: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1f2874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f2878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f287c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f287cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2880: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f2880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1f2884: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x1F2884u;
    SET_GPR_U32(ctx, 31, 0x1F288Cu);
    ctx->pc = 0x1F2888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2884u;
    // 0x1f2888: 0xfee23510  sd          $v0, 0x3510($s7) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 23), 13584), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x1F2884u, 0x1F288Cu)) {
        return;
    }
    ctx->pc = 0x1F288Cu;
label_1f288c:
    // 0x1f288c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F288Cu;
    {
        const bool branch_taken_0x1f288c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F288Cu;
        // 0x1f2890: 0xaeb04138  sw          $s0, 0x4138($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 16696), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f288c) {
            ctx->pc = 0x1F28A4u;
            goto label_1f28a4;
        }
    }
    ctx->pc = 0x1F2894u;
label_1f2894:
    // 0x1f2894: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x1f2894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x1f2898: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f2898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f289c: 0xfee23510  sd          $v0, 0x3510($s7)
    ctx->pc = 0x1f289cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 13584), GPR_U64(ctx, 2));
    // 0x1f28a0: 0xaeb04138  sw          $s0, 0x4138($s5)
    ctx->pc = 0x1f28a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16696), GPR_U32(ctx, 16));
label_1f28a4:
    // 0x1f28a4: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1F28A4u;
    {
        const bool branch_taken_0x1f28a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F28A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F28A4u;
        // 0x1f28a8: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f28a4) {
            ctx->pc = 0x1F2950u;
            goto label_1f2950;
        }
    }
    ctx->pc = 0x1F28ACu;
    // 0x1f28ac: 0x2405fe1f  addiu       $a1, $zero, -0x1E1
    ctx->pc = 0x1f28acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
    // 0x1f28b0: 0xdc8234f8  ld          $v0, 0x34F8($a0)
    ctx->pc = 0x1f28b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 13560)));
    // 0x1f28b4: 0x92230050  lbu         $v1, 0x50($s1)
    ctx->pc = 0x1f28b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1f28b8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1f28b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1f28bc: 0x34010006  ori         $at, $zero, 0x6
    ctx->pc = 0x1f28bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)6);
    // 0x1f28c0: 0x5023000e  beql        $at, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1F28C0u;
    {
        const bool branch_taken_0x1f28c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f28c0) {
            ctx->pc = 0x1F28C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F28C0u;
            // 0x1f28c4: 0x34420160  ori         $v0, $v0, 0x160 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)352);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F28FCu;
            goto label_1f28fc;
        }
    }
    ctx->pc = 0x1F28C8u;
    // 0x1f28c8: 0x34010005  ori         $at, $zero, 0x5
    ctx->pc = 0x1f28c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)5);
    // 0x1f28cc: 0x5023000b  beql        $at, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F28CCu;
    {
        const bool branch_taken_0x1f28cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f28cc) {
            ctx->pc = 0x1F28D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F28CCu;
            // 0x1f28d0: 0x344200c0  ori         $v0, $v0, 0xC0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F28FCu;
            goto label_1f28fc;
        }
    }
    ctx->pc = 0x1F28D4u;
    // 0x1f28d4: 0x34010004  ori         $at, $zero, 0x4
    ctx->pc = 0x1f28d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)4);
    // 0x1f28d8: 0x50230008  beql        $at, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F28D8u;
    {
        const bool branch_taken_0x1f28d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f28d8) {
            ctx->pc = 0x1F28DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F28D8u;
            // 0x1f28dc: 0x34420120  ori         $v0, $v0, 0x120 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F28FCu;
            goto label_1f28fc;
        }
    }
    ctx->pc = 0x1F28E0u;
    // 0x1f28e0: 0x34010003  ori         $at, $zero, 0x3
    ctx->pc = 0x1f28e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)3);
    // 0x1f28e4: 0x50230005  beql        $at, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F28E4u;
    {
        const bool branch_taken_0x1f28e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f28e4) {
            ctx->pc = 0x1F28E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F28E4u;
            // 0x1f28e8: 0x34420080  ori         $v0, $v0, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F28FCu;
            goto label_1f28fc;
        }
    }
    ctx->pc = 0x1F28ECu;
    // 0x1f28ec: 0x34010002  ori         $at, $zero, 0x2
    ctx->pc = 0x1f28ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)2);
    // 0x1f28f0: 0x50230002  beql        $at, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F28F0u;
    {
        const bool branch_taken_0x1f28f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f28f0) {
            ctx->pc = 0x1F28F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F28F0u;
            // 0x1f28f4: 0x34420060  ori         $v0, $v0, 0x60 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F28FCu;
            goto label_1f28fc;
        }
    }
    ctx->pc = 0x1F28F8u;
    // 0x1f28f8: 0x34420000  ori         $v0, $v0, 0x0
    ctx->pc = 0x1f28f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)0);
label_1f28fc:
    // 0x1f28fc: 0x0  nop
    ctx->pc = 0x1f28fcu;
    // NOP
    // 0x1f2900: 0xfc8234f8  sd          $v0, 0x34F8($a0)
    ctx->pc = 0x1f2900u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 13560), GPR_U64(ctx, 2));
    // 0x1f2904: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1f2904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1f2908: 0xfc8034f0  sd          $zero, 0x34F0($a0)
    ctx->pc = 0x1f2908u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B34F0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6B34F0u, _value); } while (0);
    // 0x1f290c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f290cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f2910: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x1f2910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1f2914: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x1f2914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x1f2918: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1f2918u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1f291c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F291Cu;
    {
        const bool branch_taken_0x1f291c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f291c) {
            ctx->pc = 0x1F2920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F291Cu;
            // 0x1f2920: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2930u;
            goto label_1f2930;
        }
    }
    ctx->pc = 0x1F2924u;
    // 0x1f2924: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2928: 0xfc8234f0  sd          $v0, 0x34F0($a0)
    ctx->pc = 0x1f2928u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 13552), GPR_U64(ctx, 2));
    // 0x1f292c: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x1f292cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_1f2930:
    // 0x1f2930: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x1f2930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x1f2934: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x1f2934u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x1f2938: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F2938u;
    {
        const bool branch_taken_0x1f2938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2938u;
        // 0x1f293c: 0x8ec24134  lw          $v0, 0x4134($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2938) {
            ctx->pc = 0x1F2954u;
            goto label_1f2954;
        }
    }
    ctx->pc = 0x1F2940u;
    // 0x1f2940: 0xdc8234f0  ld          $v0, 0x34F0($a0)
    ctx->pc = 0x1f2940u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 13552)));
    // 0x1f2944: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1f2944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f2948: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f2948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1f294c: 0xfc8234f0  sd          $v0, 0x34F0($a0)
    ctx->pc = 0x1f294cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 13552), GPR_U64(ctx, 2));
label_1f2950:
    // 0x1f2950: 0x8ec24134  lw          $v0, 0x4134($s6)
    ctx->pc = 0x1f2950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16692)));
label_1f2954:
    // 0x1f2954: 0x1440ff8d  bnez        $v0, . + 4 + (-0x73 << 2)
    ctx->pc = 0x1F2954u;
    {
        const bool branch_taken_0x1f2954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2954u;
        // 0x1f2958: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2954) {
            ctx->pc = 0x1F278Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f278c;
        }
    }
    ctx->pc = 0x1F295Cu;
    // 0x1f295c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1f295cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1f2960: 0xdc8234d0  ld          $v0, 0x34D0($a0)
    ctx->pc = 0x1f2960u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 13520)));
    // 0x1f2964: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f2964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1f2968:
    // 0x1f2968: 0xfc8234d0  sd          $v0, 0x34D0($a0)
    ctx->pc = 0x1f2968u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 13520), GPR_U64(ctx, 2));
label_1f296c:
    // 0x1f296c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f296cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2970: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x1F2970u;
    SET_GPR_U32(ctx, 31, 0x1F2978u);
    ctx->pc = 0x1F2974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2970u;
    // 0x1f2974: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x1F2970u, 0x1F2978u)) {
        return;
    }
    ctx->pc = 0x1F2978u;
label_1f2978:
    // 0x1f2978: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x1f2978u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x1f297c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1f297cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1f2980: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x1f2980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x1f2984: 0x3402d810  ori         $v0, $zero, 0xD810
    ctx->pc = 0x1f2984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55312);
    // 0x1f2988: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x1f2988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x1f298c: 0x3442ef00  ori         $v0, $v0, 0xEF00
    ctx->pc = 0x1f298cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61184);
    // 0x1f2990: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x1f2990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x1f2994: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x1f2994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x1f2998: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x1f2998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x1f299c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1f299cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1f29a0: 0x8e03412c  lw          $v1, 0x412C($s0)
    ctx->pc = 0x1f29a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16684)));
    // 0x1f29a4: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x1f29a4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1f29a8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1f29a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1f29ac: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1f29acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1f29b0: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x1f29b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1f29b4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1f29b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1f29b8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1f29b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1f29bc: 0x7a820010  lq          $v0, 0x10($s4)
    ctx->pc = 0x1f29bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1f29c0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1f29c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1f29c4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1f29c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1f29c8: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x1f29c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1f29cc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1f29ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1f29d0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1f29d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1f29d4: 0x7a820030  lq          $v0, 0x30($s4)
    ctx->pc = 0x1f29d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1f29d8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1f29d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1f29dc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1f29dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1f29e0: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x1f29e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f29e4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1f29e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1f29e8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1f29e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1f29ec: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x1f29ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1f29f0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1f29f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1f29f4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1f29f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1f29f8: 0x7a620020  lq          $v0, 0x20($s3)
    ctx->pc = 0x1f29f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1f29fc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1f29fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1f2a00: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1f2a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1f2a04: 0x7a620030  lq          $v0, 0x30($s3)
    ctx->pc = 0x1f2a04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1f2a08: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1f2a08u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1f2a0c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1f2a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1f2a10: 0xae03412c  sw          $v1, 0x412C($s0)
    ctx->pc = 0x1f2a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 3));
    // 0x1f2a14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f2a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a18: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x1F2A18u;
    SET_GPR_U32(ctx, 31, 0x1F2A20u);
    ctx->pc = 0x1F2A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2A18u;
    // 0x1f2a1c: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x1F2A18u, 0x1F2A20u)) {
        return;
    }
    ctx->pc = 0x1F2A20u;
label_1f2a20:
    // 0x1f2a20: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1f2a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1f2a24: 0x3463000f  ori         $v1, $v1, 0xF
    ctx->pc = 0x1f2a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
    // 0x1f2a28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f2a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a2c: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x1f2a2cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x1f2a30: 0x8e02412c  lw          $v0, 0x412C($s0)
    ctx->pc = 0x1f2a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16684)));
    // 0x1f2a34: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1f2a34u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1f2a38: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1f2a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1f2a3c: 0xae02412c  sw          $v0, 0x412C($s0)
    ctx->pc = 0x1f2a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 2));
    // 0x1f2a40: 0x3406d802  ori         $a2, $zero, 0xD802
    ctx->pc = 0x1f2a40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x1f2a44: 0x63578  dsll        $a2, $a2, 21
    ctx->pc = 0x1f2a44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 21);
    // 0x1f2a48: 0x34c6fe80  ori         $a2, $a2, 0xFE80
    ctx->pc = 0x1f2a48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65152);
    // 0x1f2a4c: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x1f2a4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x1f2a50: 0x34c68002  ori         $a2, $a2, 0x8002
    ctx->pc = 0x1f2a50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32770);
    // 0x1f2a54: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x1f2a54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x1f2a58: 0x34c60004  ori         $a2, $a2, 0x4
    ctx->pc = 0x1f2a58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
    // 0x1f2a5c: 0x70c42389  pcpyld      $a0, $a2, $a0
    ctx->pc = 0x1f2a5cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
    // 0x1f2a60: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x1f2a60u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x1f2a64: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1f2a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1f2a68: 0xae02412c  sw          $v0, 0x412C($s0)
    ctx->pc = 0x1f2a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 2));
    // 0x1f2a6c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1f2a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1f2a70: 0x92420047  lbu         $v0, 0x47($s2)
    ctx->pc = 0x1f2a70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
    // 0x1f2a74: 0x8ec34134  lw          $v1, 0x4134($s6)
    ctx->pc = 0x1f2a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16692)));
    // 0x1f2a78: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x1f2a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x1f2a7c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1f2a7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f2a80: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1f2a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1f2a84: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F2A84u;
    {
        const bool branch_taken_0x1f2a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A84u;
        // 0x1f2a88: 0xac82413c  sw          $v0, 0x413C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a84) {
            ctx->pc = 0x1F2AA0u;
            goto label_1f2aa0;
        }
    }
    ctx->pc = 0x1F2A8Cu;
    // 0x1f2a8c: 0xdee23510  ld          $v0, 0x3510($s7)
    ctx->pc = 0x1f2a8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 23), 13584)));
    // 0x1f2a90: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1f2a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1f2a94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2A94u;
    {
        const bool branch_taken_0x1f2a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A94u;
        // 0x1f2a98: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a94) {
            ctx->pc = 0x1F2AACu;
            goto label_1f2aac;
        }
    }
    ctx->pc = 0x1F2A9Cu;
    // 0x1f2a9c: 0x0  nop
    ctx->pc = 0x1f2a9cu;
    // NOP
label_1f2aa0:
    // 0x1f2aa0: 0xdee23510  ld          $v0, 0x3510($s7)
    ctx->pc = 0x1f2aa0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 23), 13584)));
    // 0x1f2aa4: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x1f2aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1f2aa8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f2aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1f2aac:
    // 0x1f2aac: 0xfee23510  sd          $v0, 0x3510($s7)
    ctx->pc = 0x1f2aacu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 13584), GPR_U64(ctx, 2));
    // 0x1f2ab0: 0x92460029  lbu         $a2, 0x29($s2)
    ctx->pc = 0x1f2ab0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 41)));
    // 0x1f2ab4: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x1f2ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x1f2ab8: 0x8ee23510  lw          $v0, 0x3510($s7)
    ctx->pc = 0x1f2ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 13584)));
    // 0x1f2abc: 0x3407fc00  ori         $a3, $zero, 0xFC00
    ctx->pc = 0x1f2abcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x1f2ac0: 0x73c78  dsll        $a3, $a3, 17
    ctx->pc = 0x1f2ac0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 17);
    // 0x1f2ac4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1f2ac4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1f2ac8: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x1f2ac8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x1f2acc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1f2accu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1f2ad0: 0x73bf8  dsll        $a3, $a3, 15
    ctx->pc = 0x1f2ad0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 15);
    // 0x1f2ad4: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x1f2ad4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x1f2ad8: 0xdc640f90  ld          $a0, 0xF90($v1)
    ctx->pc = 0x1f2ad8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 3984)));
    // 0x1f2adc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1f2adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1f2ae0: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x1f2ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x1f2ae4: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x1f2ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x1f2ae8: 0x873024  and         $a2, $a0, $a3
    ctx->pc = 0x1f2ae8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x1f2aec: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x1f2aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x1f2af0: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x1f2af0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f2af4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1f2af4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1f2af8: 0x70a62389  pcpyld      $a0, $a1, $a2
    ctx->pc = 0x1f2af8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x1f2afc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1f2afcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1f2b00: 0x8e06412c  lw          $a2, 0x412C($s0)
    ctx->pc = 0x1f2b00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16684)));
    // 0x1f2b04: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x1f2b04u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x1f2b08: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1f2b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1f2b0c: 0xae06412c  sw          $a2, 0x412C($s0)
    ctx->pc = 0x1f2b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 6));
    // 0x1f2b10: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x1f2b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x1f2b14: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x1f2b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x1f2b18: 0x3442fec0  ori         $v0, $v0, 0xFEC0
    ctx->pc = 0x1f2b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65216);
    // 0x1f2b1c: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x1f2b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x1f2b20: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x1f2b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x1f2b24: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x1f2b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x1f2b28: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1f2b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1f2b2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f2b2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2b30: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x1f2b30u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x1f2b34: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1f2b34u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1f2b38: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x1f2b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1f2b3c: 0xae03412c  sw          $v1, 0x412C($s0)
    ctx->pc = 0x1f2b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 3));
    // 0x1f2b40: 0xdee23510  ld          $v0, 0x3510($s7)
    ctx->pc = 0x1f2b40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 23), 13584)));
    // 0x1f2b44: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x1f2b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x1f2b48: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x1f2b48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x1f2b4c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1f2b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1f2b50: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1f2b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1f2b54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2B54u;
    {
        const bool branch_taken_0x1f2b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B54u;
        // 0x1f2b58: 0x92420044  lbu         $v0, 0x44($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2b54) {
            ctx->pc = 0x1F2B68u;
            goto label_1f2b68;
        }
    }
    ctx->pc = 0x1F2B5Cu;
    // 0x1f2b5c: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x1f2b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x1f2b60: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x1f2b60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x1f2b64: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1f2b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1f2b68:
    // 0x1f2b68: 0x92430045  lbu         $v1, 0x45($s2)
    ctx->pc = 0x1f2b68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 69)));
    // 0x1f2b6c: 0x92440046  lbu         $a0, 0x46($s2)
    ctx->pc = 0x1f2b6cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 70)));
    // 0x1f2b70: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1f2b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1f2b74: 0x0  nop
    ctx->pc = 0x1f2b74u;
    // NOP
    // 0x1f2b78: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1f2b78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x1f2b7c: 0x92450047  lbu         $a1, 0x47($s2)
    ctx->pc = 0x1f2b7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 71)));
    // 0x1f2b80: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1f2b80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f2b84: 0x0  nop
    ctx->pc = 0x1f2b84u;
    // NOP
    // 0x1f2b88: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1f2b88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1f2b8c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1f2b8cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f2b90: 0x0  nop
    ctx->pc = 0x1f2b90u;
    // NOP
    // 0x1f2b94: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1f2b94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1f2b98: 0x3c013b01  lui         $at, 0x3B01
    ctx->pc = 0x1f2b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15105 << 16));
    // 0x1f2b9c: 0x34211b50  ori         $at, $at, 0x1B50
    ctx->pc = 0x1f2b9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6992);
    // 0x1f2ba0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f2ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f2ba4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f2ba4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2ba8: 0x0  nop
    ctx->pc = 0x1f2ba8u;
    // NOP
    // 0x1f2bac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f2bacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f2bb0: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x1f2bb0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f2bb4: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x1f2bb4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x1f2bb8: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x1f2bb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f2bbc: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x1f2bbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1f2bc0: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x1f2bc0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x1f2bc4: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x1f2bc4u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x1f2bc8: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x1f2bc8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1f2bcc: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x1f2bccu;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x1f2bd0: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x1f2bd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f2bd4: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x1f2bd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1f2bd8: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1f2bd8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1f2bdc: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x1f2bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x1f2be0: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x1f2be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1f2be4: 0xae03412c  sw          $v1, 0x412C($s0)
    ctx->pc = 0x1f2be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 3));
    // 0x1f2be8: 0x3402d802  ori         $v0, $zero, 0xD802
    ctx->pc = 0x1f2be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x1f2bec: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x1f2becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x1f2bf0: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1f2bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x1f2bf4: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x1f2bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x1f2bf8: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x1f2bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x1f2bfc: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x1f2bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x1f2c00: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1f2c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1f2c04: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x1f2c04u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x1f2c08: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x1f2c08u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x1f2c0c: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x1f2c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x1f2c10: 0xae03412c  sw          $v1, 0x412C($s0)
    ctx->pc = 0x1f2c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 3));
    // 0x1f2c14: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1f2c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1f2c18: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1f2c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x1f2c1c: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x1f2c1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
    // 0x1f2c20: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1f2c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1f2c24: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1f2c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f2c28: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1f2c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f2c2c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1f2c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2c30: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x1f2c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2c34: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x1f2c34u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1f2c38: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1f2c38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f2c3c: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x1f2c3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1f2c40: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x1f2c40u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x1f2c44: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x1f2c44u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x1f2c48: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x1f2c48u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1f2c4c: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x1f2c4cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1f2c50: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x1f2c50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f2c54: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x1f2c54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1f2c58: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1f2c58u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1f2c5c: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x1f2c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x1f2c60: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x1f2c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1f2c64: 0xae03412c  sw          $v1, 0x412C($s0)
    ctx->pc = 0x1f2c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 3));
    // 0x1f2c68: 0x92420028  lbu         $v0, 0x28($s2)
    ctx->pc = 0x1f2c68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1f2c6c: 0x3404d806  ori         $a0, $zero, 0xD806
    ctx->pc = 0x1f2c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55302);
    // 0x1f2c70: 0x42578  dsll        $a0, $a0, 21
    ctx->pc = 0x1f2c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 21);
    // 0x1f2c74: 0x3484ff40  ori         $a0, $a0, 0xFF40
    ctx->pc = 0x1f2c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65344);
    // 0x1f2c78: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x1f2c78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x1f2c7c: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x1f2c7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x1f2c80: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x1f2c80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x1f2c84: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x1f2c84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x1f2c88: 0x70871b89  pcpyld      $v1, $a0, $a3
    ctx->pc = 0x1f2c88u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 7)));
    // 0x1f2c8c: 0x30470007  andi        $a3, $v0, 0x7
    ctx->pc = 0x1f2c8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1f2c90: 0x7cc30040  sq          $v1, 0x40($a2)
    ctx->pc = 0x1f2c90u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 3));
    // 0x1f2c94: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x1f2c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x1f2c98: 0xae02412c  sw          $v0, 0x412C($s0)
    ctx->pc = 0x1f2c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 2));
    // 0x1f2c9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1f2c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1f2ca0: 0x8c623560  lw          $v0, 0x3560($v1)
    ctx->pc = 0x1f2ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B3560u));
    // 0x1f2ca4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2CA4u;
    {
        const bool branch_taken_0x1f2ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CA4u;
        // 0x1f2ca8: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ca4) {
            ctx->pc = 0x1F2CB8u;
            goto label_1f2cb8;
        }
    }
    ctx->pc = 0x1F2CACu;
    // 0x1f2cac: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1F2CACu;
    {
        const bool branch_taken_0x1f2cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2cac) {
            ctx->pc = 0x1F2CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2CACu;
            // 0x1f2cb0: 0x34e70008  ori         $a3, $a3, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2CD8u;
            goto label_1f2cd8;
        }
    }
    ctx->pc = 0x1F2CB4u;
    // 0x1f2cb4: 0x0  nop
    ctx->pc = 0x1f2cb4u;
    // NOP
label_1f2cb8:
    // 0x1f2cb8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1f2cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1f2cbc: 0x8c433564  lw          $v1, 0x3564($v0)
    ctx->pc = 0x1f2cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3564u));
    // 0x1f2cc0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F2CC0u;
    {
        const bool branch_taken_0x1f2cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CC0u;
        // 0x1f2cc4: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2cc0) {
            ctx->pc = 0x1F2D00u;
            goto label_1f2d00;
        }
    }
    ctx->pc = 0x1F2CC8u;
    // 0x1f2cc8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1F2CC8u;
    {
        const bool branch_taken_0x1f2cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2cc8) {
            ctx->pc = 0x1F2CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2CC8u;
            // 0x1f2ccc: 0x3c03005c  lui         $v1, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2D08u;
            goto label_1f2d08;
        }
    }
    ctx->pc = 0x1F2CD0u;
    // 0x1f2cd0: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x1f2cd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x1f2cd4: 0x0  nop
    ctx->pc = 0x1f2cd4u;
    // NOP
label_1f2cd8:
    // 0x1f2cd8: 0x8e04412c  lw          $a0, 0x412C($s0)
    ctx->pc = 0x1f2cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16684)));
    // 0x1f2cdc: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x1f2cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x1f2ce0: 0x24631030  addiu       $v1, $v1, 0x1030
    ctx->pc = 0x1f2ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4144));
    // 0x1f2ce4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1f2ce4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5C1030u));
    // 0x1f2ce8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1f2ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1f2cec: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1f2cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1f2cf0: 0xae04412c  sw          $a0, 0x412C($s0)
    ctx->pc = 0x1f2cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 4));
    // 0x1f2cf4: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x1f2cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x1f2cf8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F2CF8u;
    {
        const bool branch_taken_0x1f2cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CF8u;
        // 0x1f2cfc: 0x24631040  addiu       $v1, $v1, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2cf8) {
            ctx->pc = 0x1F2D28u;
            goto label_1f2d28;
        }
    }
    ctx->pc = 0x1F2D00u;
label_1f2d00:
    // 0x1f2d00: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x1f2d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x1f2d04: 0x0  nop
    ctx->pc = 0x1f2d04u;
    // NOP
label_1f2d08:
    // 0x1f2d08: 0x8e04412c  lw          $a0, 0x412C($s0)
    ctx->pc = 0x1f2d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16684)));
    // 0x1f2d0c: 0x24631010  addiu       $v1, $v1, 0x1010
    ctx->pc = 0x1f2d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4112));
    // 0x1f2d10: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1f2d10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f2d14: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1f2d14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1f2d18: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1f2d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1f2d1c: 0xae04412c  sw          $a0, 0x412C($s0)
    ctx->pc = 0x1f2d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 4));
    // 0x1f2d20: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x1f2d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x1f2d24: 0x24631020  addiu       $v1, $v1, 0x1020
    ctx->pc = 0x1f2d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4128));
label_1f2d28:
    // 0x1f2d28: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x1f2d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1f2d2c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1f2d2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f2d30: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1f2d30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1f2d34: 0xae05412c  sw          $a1, 0x412C($s0)
    ctx->pc = 0x1f2d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 5));
    // 0x1f2d38: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1f2d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1f2d3c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x1f2d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x1f2d40: 0x8c444140  lw          $a0, 0x4140($v0)
    ctx->pc = 0x1f2d40u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4140u));
    // 0x1f2d44: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f2d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f2d48: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2D48u;
    {
        const bool branch_taken_0x1f2d48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F2D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D48u;
        // 0x1f2d4c: 0xaca03558  sw          $zero, 0x3558($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 13656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d48) {
            ctx->pc = 0x1F2D58u;
            goto label_1f2d58;
        }
    }
    ctx->pc = 0x1F2D50u;
    // 0x1f2d50: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1f2d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f2d54: 0xaca23558  sw          $v0, 0x3558($a1)
    ctx->pc = 0x1f2d54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 13656), GPR_U32(ctx, 2));
label_1f2d58:
    // 0x1f2d58: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1f2d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1f2d5c: 0x9ca53558  lwu         $a1, 0x3558($a1)
    ctx->pc = 0x1f2d5cu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 13656)));
    // 0x1f2d60: 0x9c82355c  lwu         $v0, 0x355C($a0)
    ctx->pc = 0x1f2d60u;
    SET_GPR_ZE32(ctx, 2, FAST_READ32(0x6B355Cu));
    // 0x1f2d64: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x1f2d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1f2d68: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1f2d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1f2d6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1f2d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f2d70: 0x452025  or          $a0, $v0, $a1
    ctx->pc = 0x1f2d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1f2d74: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x1f2d74u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x1f2d78: 0x8e04412c  lw          $a0, 0x412C($s0)
    ctx->pc = 0x1f2d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16684)));
    // 0x1f2d7c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1f2d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1f2d80: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1f2d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1f2d84: 0x13c00048  beqz        $fp, . + 4 + (0x48 << 2)
    ctx->pc = 0x1F2D84u;
    {
        const bool branch_taken_0x1f2d84 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D84u;
        // 0x1f2d88: 0xae04412c  sw          $a0, 0x412C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d84) {
            ctx->pc = 0x1F2EA8u;
            goto label_1f2ea8;
        }
    }
    ctx->pc = 0x1F2D8Cu;
    // 0x1f2d8c: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x1f2d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1f2d90: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1F2D90u;
    {
        const bool branch_taken_0x1f2d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D90u;
        // 0x1f2d94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d90) {
            ctx->pc = 0x1F2E28u;
            goto label_1f2e28;
        }
    }
    ctx->pc = 0x1F2D98u;
    // 0x1f2d98: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x1f2d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x1f2d9c: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x1f2d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x1f2da0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1f2da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1f2da4: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x1f2da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x1f2da8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x1f2da8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1f2dac: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1f2dacu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1f2db0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1f2db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1f2db4: 0xae02412c  sw          $v0, 0x412C($s0)
    ctx->pc = 0x1f2db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 2));
    // 0x1f2db8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f2db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f2dbc: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x1f2dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x1f2dc0: 0x34428003  ori         $v0, $v0, 0x8003
    ctx->pc = 0x1f2dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
    // 0x1f2dc4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1f2dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1f2dc8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x1f2dc8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1f2dcc: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x1f2dccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x1f2dd0: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x1f2dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1f2dd4: 0xae02412c  sw          $v0, 0x412C($s0)
    ctx->pc = 0x1f2dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 2));
    // 0x1f2dd8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1f2dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1f2ddc: 0xdc6234d0  ld          $v0, 0x34D0($v1)
    ctx->pc = 0x1f2ddcu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
    // 0x1f2de0: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x1f2de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1f2de4: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x1f2de4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1f2de8: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x1f2de8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x1f2dec: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x1f2decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1f2df0: 0xae02412c  sw          $v0, 0x412C($s0)
    ctx->pc = 0x1f2df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 2));
    // 0x1f2df4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1f2df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1f2df8: 0xdc6234f8  ld          $v0, 0x34F8($v1)
    ctx->pc = 0x1f2df8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34F8u));
    // 0x1f2dfc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1f2dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1f2e00: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x1f2e00u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1f2e04: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x1f2e04u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x1f2e08: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x1f2e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1f2e0c: 0xae02412c  sw          $v0, 0x412C($s0)
    ctx->pc = 0x1f2e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 2));
    // 0x1f2e10: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1f2e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1f2e14: 0xdc6234f0  ld          $v0, 0x34F0($v1)
    ctx->pc = 0x1f2e14u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34F0u));
    // 0x1f2e18: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1f2e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f2e1c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x1f2e1cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1f2e20: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1F2E20u;
    {
        const bool branch_taken_0x1f2e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E20u;
        // 0x1f2e24: 0x7c820040  sq          $v0, 0x40($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2e20) {
            ctx->pc = 0x1F2EE8u;
            goto label_1f2ee8;
        }
    }
    ctx->pc = 0x1F2E28u;
label_1f2e28:
    // 0x1f2e28: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x1f2e28u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f2e2c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1f2e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1f2e30: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1f2e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1f2e34: 0xae02412c  sw          $v0, 0x412C($s0)
    ctx->pc = 0x1f2e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 2));
    // 0x1f2e38: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x1f2e38u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f2e3c: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x1f2e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x1f2e40: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x1f2e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1f2e44: 0xae02412c  sw          $v0, 0x412C($s0)
    ctx->pc = 0x1f2e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 2));
    // 0x1f2e48: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x1f2e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x1f2e4c: 0x31f78  dsll        $v1, $v1, 29
    ctx->pc = 0x1f2e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 29);
    // 0x1f2e50: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1f2e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1f2e54: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x1f2e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x1f2e58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f2e58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e5c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x1f2e5cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1f2e60: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x1f2e60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x1f2e64: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x1f2e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1f2e68: 0xae02412c  sw          $v0, 0x412C($s0)
    ctx->pc = 0x1f2e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 2));
    // 0x1f2e6c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f2e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f2e70: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x1f2e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x1f2e74: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x1f2e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x1f2e78: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1f2e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1f2e7c: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x1f2e7cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1f2e80: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x1f2e80u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x1f2e84: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x1f2e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1f2e88: 0xae02412c  sw          $v0, 0x412C($s0)
    ctx->pc = 0x1f2e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 2));
    // 0x1f2e8c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1f2e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x1f2e90: 0xdc6234d0  ld          $v0, 0x34D0($v1)
    ctx->pc = 0x1f2e90u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6B34D0u));
    // 0x1f2e94: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x1f2e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1f2e98: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x1f2e98u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1f2e9c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F2E9Cu;
    {
        const bool branch_taken_0x1f2e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E9Cu;
        // 0x1f2ea0: 0x7c820040  sq          $v0, 0x40($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2e9c) {
            ctx->pc = 0x1F2EE8u;
            goto label_1f2ee8;
        }
    }
    ctx->pc = 0x1F2EA4u;
    // 0x1f2ea4: 0x0  nop
    ctx->pc = 0x1f2ea4u;
    // NOP
label_1f2ea8:
    // 0x1f2ea8: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x1f2ea8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f2eac: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1f2eacu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1f2eb0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1f2eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1f2eb4: 0xae02412c  sw          $v0, 0x412C($s0)
    ctx->pc = 0x1f2eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 2));
    // 0x1f2eb8: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x1f2eb8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f2ebc: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x1f2ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x1f2ec0: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x1f2ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1f2ec4: 0xae02412c  sw          $v0, 0x412C($s0)
    ctx->pc = 0x1f2ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 2));
    // 0x1f2ec8: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x1f2ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x1f2ecc: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x1f2eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1f2ed0: 0xae02412c  sw          $v0, 0x412C($s0)
    ctx->pc = 0x1f2ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 2));
    // 0x1f2ed4: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x1f2ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
    // 0x1f2ed8: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x1f2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1f2edc: 0xae02412c  sw          $v0, 0x412C($s0)
    ctx->pc = 0x1f2edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 2));
    // 0x1f2ee0: 0x7c830040  sq          $v1, 0x40($a0)
    ctx->pc = 0x1f2ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 3));
    // 0x1f2ee4: 0x0  nop
    ctx->pc = 0x1f2ee4u;
    // NOP
label_1f2ee8:
    // 0x1f2ee8: 0x24820050  addiu       $v0, $a0, 0x50
    ctx->pc = 0x1f2ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1f2eec: 0xae02412c  sw          $v0, 0x412C($s0)
    ctx->pc = 0x1f2eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 2));
    // 0x1f2ef0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1f2ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1f2ef4: 0x9062e970  lbu         $v0, -0x1690($v1)
    ctx->pc = 0x1f2ef4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x33E970u));
    // 0x1f2ef8: 0xa242002b  sb          $v0, 0x2B($s2)
    ctx->pc = 0x1f2ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f2efc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1f2efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f2f00: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x1f2f00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x1f2f04: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x1f2f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1f2f08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f2f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f2f0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f2f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f2f10: 0x8cc33554  lw          $v1, 0x3554($a2)
    ctx->pc = 0x1f2f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 13652)));
    // 0x1f2f14: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f2f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f2f18: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f2f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f2f1c: 0x1065000a  beq         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F2F1Cu;
    {
        const bool branch_taken_0x1f2f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F2F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F1Cu;
        // 0x1f2f20: 0x5203c  dsll32      $a0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f1c) {
            ctx->pc = 0x1F2F48u;
            goto label_1f2f48;
        }
    }
    ctx->pc = 0x1F2F24u;
    // 0x1f2f24: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1f2f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1f2f28: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1f2f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1f2f2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f2f2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f30: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x1f2f30u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1f2f34: 0x8e03412c  lw          $v1, 0x412C($s0)
    ctx->pc = 0x1f2f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16684)));
    // 0x1f2f38: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1f2f38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1f2f3c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1f2f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1f2f40: 0xae03412c  sw          $v1, 0x412C($s0)
    ctx->pc = 0x1f2f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 3));
    // 0x1f2f44: 0xacc53554  sw          $a1, 0x3554($a2)
    ctx->pc = 0x1f2f44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 13652), GPR_U32(ctx, 5));
label_1f2f48:
    // 0x1f2f48: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x1f2f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1f2f4c: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x1f2f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x1f2f50: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1f2f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f2f54: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x1f2f54u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x1f2f58: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f2f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f2f5c: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x1f2f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x1f2f60: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1f2f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1f2f64: 0x24a90018  addiu       $t1, $a1, 0x18
    ctx->pc = 0x1f2f64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x1f2f68: 0x9d240008  lwu         $a0, 0x8($t1)
    ctx->pc = 0x1f2f68u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1f2f6c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1f2f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1f2f70: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1f2f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f2f74: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1f2f74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1f2f78: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1f2f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1f2f7c: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x1f2f7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x1f2f80: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x1f2f80u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x1f2f84: 0x8e03412c  lw          $v1, 0x412C($s0)
    ctx->pc = 0x1f2f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16684)));
    // 0x1f2f88: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1f2f88u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1f2f8c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1f2f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1f2f90: 0xae03412c  sw          $v1, 0x412C($s0)
    ctx->pc = 0x1f2f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16684), GPR_U32(ctx, 3));
    // 0x1f2f94: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1f2f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1f2f98:
    // 0x1f2f98: 0x42000039  di
    ctx->pc = 0x1f2f98u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x1f2f9c: 0x40f  sync.p
    ctx->pc = 0x1f2f9cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1f2fa0: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x1f2fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x1f2fa4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1f2fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f2fa8: 0x0  nop
    ctx->pc = 0x1f2fa8u;
    // NOP
    // 0x1f2fac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F2FACu;
    {
        const bool branch_taken_0x1f2fac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2fac) {
            ctx->pc = 0x1F2F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2f98;
        }
    }
    ctx->pc = 0x1F2FB4u;
    // 0x1f2fb4: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x1f2fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1f2fb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f2fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f2fbc: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x1f2fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
    // 0x1f2fc0: 0x42000038  ei
    ctx->pc = 0x1f2fc0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1f2fc4: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x1f2fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1f2fc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f2fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2fcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f2fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f2fd0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2FD0u;
    {
        const bool branch_taken_0x1f2fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F2FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2FD0u;
        // 0x1f2fd4: 0xad220004  sw          $v0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2fd0) {
            ctx->pc = 0x1F2FE0u;
            goto label_1f2fe0;
        }
    }
    ctx->pc = 0x1F2FD8u;
    // 0x1f2fd8: 0xc08b97e  jal         func_22E5F8
    ctx->pc = 0x1F2FD8u;
    SET_GPR_U32(ctx, 31, 0x1F2FE0u);
    ctx->pc = 0x1F2FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2FD8u;
    // 0x1f2fdc: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22E5F8u, 0x1F2FD8u, 0x1F2FE0u)) {
        return;
    }
    ctx->pc = 0x1F2FE0u;
label_1f2fe0:
    // 0x1f2fe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2fe4:
    // 0x1f2fe4: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x1f2fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1f2fe8: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x1f2fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f2fec: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x1f2fecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1f2ff0: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x1f2ff0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1f2ff4: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x1f2ff4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1f2ff8: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x1f2ff8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f2ffc: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x1f2ffcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1f3000: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x1f3000u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f3004: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x1f3004u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1f3008: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1f3008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f300c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F300Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F300Cu;
        // 0x1f3010: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F300Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3014u;
    // 0x1f3014: 0x0  nop
    ctx->pc = 0x1f3014u;
    // NOP
    ctx->pc = 0x1f3018u;
}
