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

// Function: sub_001482D8
// Address: 0x1482d8 - 0x148398
void sub_001482D8_0x1482d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001482D8_0x1482d8");
#endif

    switch (ctx->pc) {
        case 0x1482d8u: goto label_1482d8;
        case 0x1482dcu: goto label_1482dc;
        case 0x1482e0u: goto label_1482e0;
        case 0x1482e4u: goto label_1482e4;
        case 0x1482e8u: goto label_1482e8;
        case 0x1482ecu: goto label_1482ec;
        case 0x1482f0u: goto label_1482f0;
        case 0x1482f4u: goto label_1482f4;
        case 0x1482f8u: goto label_1482f8;
        case 0x1482fcu: goto label_1482fc;
        case 0x148300u: goto label_148300;
        case 0x148304u: goto label_148304;
        case 0x148308u: goto label_148308;
        case 0x14830cu: goto label_14830c;
        case 0x148310u: goto label_148310;
        case 0x148314u: goto label_148314;
        case 0x148318u: goto label_148318;
        case 0x14831cu: goto label_14831c;
        case 0x148320u: goto label_148320;
        case 0x148324u: goto label_148324;
        case 0x148328u: goto label_148328;
        case 0x14832cu: goto label_14832c;
        case 0x148330u: goto label_148330;
        case 0x148334u: goto label_148334;
        case 0x148338u: goto label_148338;
        case 0x14833cu: goto label_14833c;
        case 0x148340u: goto label_148340;
        case 0x148344u: goto label_148344;
        case 0x148348u: goto label_148348;
        case 0x14834cu: goto label_14834c;
        case 0x148350u: goto label_148350;
        case 0x148354u: goto label_148354;
        case 0x148358u: goto label_148358;
        case 0x14835cu: goto label_14835c;
        case 0x148360u: goto label_148360;
        case 0x148364u: goto label_148364;
        case 0x148368u: goto label_148368;
        case 0x14836cu: goto label_14836c;
        case 0x148370u: goto label_148370;
        case 0x148374u: goto label_148374;
        case 0x148378u: goto label_148378;
        case 0x14837cu: goto label_14837c;
        case 0x148380u: goto label_148380;
        case 0x148384u: goto label_148384;
        case 0x148388u: goto label_148388;
        case 0x14838cu: goto label_14838c;
        case 0x148390u: goto label_148390;
        case 0x148394u: goto label_148394;
        default: break;
    }

    ctx->pc = 0x1482d8u;

label_1482d8:
    // 0x1482d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1482d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1482dc:
    // 0x1482dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1482dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1482e0:
    // 0x1482e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1482e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1482e4:
    // 0x1482e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1482e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1482e8:
    // 0x1482e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1482e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1482ec:
    // 0x1482ec: 0xc051e84  jal         func_147A10
label_1482f0:
    if (ctx->pc == 0x1482F0u) {
        ctx->pc = 0x1482F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1482ECu;
        // 0x1482f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1482F4u;
        goto label_1482f4;
    }
    ctx->pc = 0x1482ECu;
    SET_GPR_U32(ctx, 31, 0x1482F4u);
    ctx->pc = 0x1482F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1482ECu;
    // 0x1482f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147A10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x147A10u, 0x1482ECu, 0x1482F4u)) {
        return;
    }
    ctx->pc = 0x1482F4u;
label_1482f4:
    // 0x1482f4: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x1482f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_1482f8:
    // 0x1482f8: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_1482fc:
    if (ctx->pc == 0x1482FCu) {
        ctx->pc = 0x1482FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1482F8u;
        // 0x1482fc: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148300u;
        goto label_148300;
    }
    ctx->pc = 0x1482F8u;
    {
        const bool branch_taken_0x1482f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1482f8) {
            ctx->pc = 0x1482FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1482F8u;
            // 0x1482fc: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14833Cu;
            goto label_14833c;
        }
    }
    ctx->pc = 0x148300u;
label_148300:
    // 0x148300: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x148300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_148304:
    // 0x148304: 0x8e0200f8  lw          $v0, 0xF8($s0)
    ctx->pc = 0x148304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_148308:
    // 0x148308: 0x5462001e  bnel        $v1, $v0, . + 4 + (0x1E << 2)
label_14830c:
    if (ctx->pc == 0x14830Cu) {
        ctx->pc = 0x14830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148308u;
        // 0x14830c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148310u;
        goto label_148310;
    }
    ctx->pc = 0x148308u;
    {
        const bool branch_taken_0x148308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x148308) {
            ctx->pc = 0x14830Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x148308u;
            // 0x14830c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148384u;
            goto label_148384;
        }
    }
    ctx->pc = 0x148310u;
label_148310:
    // 0x148310: 0x8e020128  lw          $v0, 0x128($s0)
    ctx->pc = 0x148310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_148314:
    // 0x148314: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_148318:
    if (ctx->pc == 0x148318u) {
        ctx->pc = 0x14831Cu;
        goto label_14831c;
    }
    ctx->pc = 0x148314u;
    {
        const bool branch_taken_0x148314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148314) {
            ctx->pc = 0x14832Cu;
            goto label_14832c;
        }
    }
    ctx->pc = 0x14831Cu;
label_14831c:
    // 0x14831c: 0xc0520e6  jal         func_148398
label_148320:
    if (ctx->pc == 0x148320u) {
        ctx->pc = 0x148320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14831Cu;
        // 0x148320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148324u;
        goto label_148324;
    }
    ctx->pc = 0x14831Cu;
    SET_GPR_U32(ctx, 31, 0x148324u);
    ctx->pc = 0x148320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14831Cu;
    // 0x148320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148398u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x148398u, 0x14831Cu, 0x148324u)) {
        return;
    }
    ctx->pc = 0x148324u;
label_148324:
    // 0x148324: 0x10000017  b           . + 4 + (0x17 << 2)
label_148328:
    if (ctx->pc == 0x148328u) {
        ctx->pc = 0x148328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148324u;
        // 0x148328: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14832Cu;
        goto label_14832c;
    }
    ctx->pc = 0x148324u;
    {
        const bool branch_taken_0x148324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148324u;
        // 0x148328: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148324) {
            ctx->pc = 0x148384u;
            goto label_148384;
        }
    }
    ctx->pc = 0x14832Cu;
label_14832c:
    // 0x14832c: 0xc05212a  jal         func_1484A8
label_148330:
    if (ctx->pc == 0x148330u) {
        ctx->pc = 0x148330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14832Cu;
        // 0x148330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148334u;
        goto label_148334;
    }
    ctx->pc = 0x14832Cu;
    SET_GPR_U32(ctx, 31, 0x148334u);
    ctx->pc = 0x148330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14832Cu;
    // 0x148330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1484A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1484A8u, 0x14832Cu, 0x148334u)) {
        return;
    }
    ctx->pc = 0x148334u;
label_148334:
    // 0x148334: 0x10000013  b           . + 4 + (0x13 << 2)
label_148338:
    if (ctx->pc == 0x148338u) {
        ctx->pc = 0x148338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148334u;
        // 0x148338: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14833Cu;
        goto label_14833c;
    }
    ctx->pc = 0x148334u;
    {
        const bool branch_taken_0x148334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148334u;
        // 0x148338: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148334) {
            ctx->pc = 0x148384u;
            goto label_148384;
        }
    }
    ctx->pc = 0x14833Cu;
label_14833c:
    // 0x14833c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x14833cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_148340:
    // 0x148340: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_148344:
    if (ctx->pc == 0x148344u) {
        ctx->pc = 0x148344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148340u;
        // 0x148344: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148348u;
        goto label_148348;
    }
    ctx->pc = 0x148340u;
    {
        const bool branch_taken_0x148340 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x148344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148340u;
        // 0x148344: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148340) {
            ctx->pc = 0x148358u;
            goto label_148358;
        }
    }
    ctx->pc = 0x148348u;
label_148348:
    // 0x148348: 0xc05211c  jal         func_148470
label_14834c:
    if (ctx->pc == 0x14834Cu) {
        ctx->pc = 0x14834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148348u;
        // 0x14834c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148350u;
        goto label_148350;
    }
    ctx->pc = 0x148348u;
    SET_GPR_U32(ctx, 31, 0x148350u);
    ctx->pc = 0x14834Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148348u;
    // 0x14834c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x148470u, 0x148348u, 0x148350u)) {
        return;
    }
    ctx->pc = 0x148350u;
label_148350:
    // 0x148350: 0x1000000c  b           . + 4 + (0xC << 2)
label_148354:
    if (ctx->pc == 0x148354u) {
        ctx->pc = 0x148354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148350u;
        // 0x148354: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148358u;
        goto label_148358;
    }
    ctx->pc = 0x148350u;
    {
        const bool branch_taken_0x148350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148350u;
        // 0x148354: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148350) {
            ctx->pc = 0x148384u;
            goto label_148384;
        }
    }
    ctx->pc = 0x148358u;
label_148358:
    // 0x148358: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x148358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
label_14835c:
    // 0x14835c: 0x54830009  bnel        $a0, $v1, . + 4 + (0x9 << 2)
label_148360:
    if (ctx->pc == 0x148360u) {
        ctx->pc = 0x148360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14835Cu;
        // 0x148360: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148364u;
        goto label_148364;
    }
    ctx->pc = 0x14835Cu;
    {
        const bool branch_taken_0x14835c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14835c) {
            ctx->pc = 0x148360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14835Cu;
            // 0x148360: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x148384u;
            goto label_148384;
        }
    }
    ctx->pc = 0x148364u;
label_148364:
    // 0x148364: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x148364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_148368:
    // 0x148368: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x148368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_14836c:
    // 0x14836c: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x14836cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_148370:
    // 0x148370: 0x8c450084  lw          $a1, 0x84($v0)
    ctx->pc = 0x148370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_148374:
    // 0x148374: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x148374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_148378:
    // 0x148378: 0xa0f809  jalr        $a1
label_14837c:
    if (ctx->pc == 0x14837Cu) {
        ctx->pc = 0x14837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148378u;
        // 0x14837c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148380u;
        goto label_148380;
    }
    ctx->pc = 0x148378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x148380u);
        ctx->pc = 0x14837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148378u;
        // 0x14837c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148378u, 0x148380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x148380u;
label_148380:
    // 0x148380: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x148380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_148384:
    // 0x148384: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x148384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_148388:
    // 0x148388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14838c:
    // 0x14838c: 0x3e00008  jr          $ra
label_148390:
    if (ctx->pc == 0x148390u) {
        ctx->pc = 0x148390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14838Cu;
        // 0x148390: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148394u;
        goto label_148394;
    }
    ctx->pc = 0x14838Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14838Cu;
        // 0x148390: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14838Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148394u;
label_148394:
    // 0x148394: 0x0  nop
    ctx->pc = 0x148394u;
    // NOP
    ctx->pc = 0x148398u;
}
