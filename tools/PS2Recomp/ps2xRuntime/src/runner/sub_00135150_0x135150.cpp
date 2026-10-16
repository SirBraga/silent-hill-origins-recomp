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

// Function: sub_00135150
// Address: 0x135150 - 0x135420
void sub_00135150_0x135150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135150_0x135150");
#endif

    switch (ctx->pc) {
        case 0x1351a8u: goto label_1351a8;
        case 0x1351c4u: goto label_1351c4;
        case 0x1351e0u: goto label_1351e0;
        case 0x1351fcu: goto label_1351fc;
        case 0x135224u: goto label_135224;
        case 0x135260u: goto label_135260;
        case 0x13527cu: goto label_13527c;
        case 0x1352b8u: goto label_1352b8;
        case 0x1352c8u: goto label_1352c8;
        case 0x1352d4u: goto label_1352d4;
        case 0x1352e4u: goto label_1352e4;
        case 0x1352f0u: goto label_1352f0;
        case 0x135324u: goto label_135324;
        case 0x135360u: goto label_135360;
        case 0x13539cu: goto label_13539c;
        case 0x1353acu: goto label_1353ac;
        case 0x1353b8u: goto label_1353b8;
        case 0x1353c8u: goto label_1353c8;
        case 0x1353d4u: goto label_1353d4;
        default: break;
    }

    ctx->pc = 0x135150u;

    // 0x135150: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x135150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x135154: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x135154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x135158: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x135158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x13515c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13515cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135160: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x135160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x135164: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x135164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x135168: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x135168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x13516c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x13516cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135170: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x135170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x135174: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x135174u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135178: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x135178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x13517c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x13517cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135180: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x135180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x135184: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x135184u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135188: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x135188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x13518c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x13518cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x135190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x135194: 0x8e0219d4  lw          $v0, 0x19D4($s0)
    ctx->pc = 0x135194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6612)));
    // 0x135198: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x135198u;
    {
        const bool branch_taken_0x135198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x13519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135198u;
        // 0x13519c: 0x140b82d  daddu       $s7, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135198) {
            ctx->pc = 0x1351ACu;
            goto label_1351ac;
        }
    }
    ctx->pc = 0x1351A0u;
    // 0x1351a0: 0xc040688  jal         func_101A20
    ctx->pc = 0x1351A0u;
    SET_GPR_U32(ctx, 31, 0x1351A8u);
    ctx->pc = 0x1351A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1351A0u;
    // 0x1351a4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A20u, 0x1351A0u, 0x1351A8u)) {
        return;
    }
    ctx->pc = 0x1351A8u;
label_1351a8:
    // 0x1351a8: 0xae0219d4  sw          $v0, 0x19D4($s0)
    ctx->pc = 0x1351a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6612), GPR_U32(ctx, 2));
label_1351ac:
    // 0x1351ac: 0x8e0219cc  lw          $v0, 0x19CC($s0)
    ctx->pc = 0x1351acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6604)));
    // 0x1351b0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1351B0u;
    {
        const bool branch_taken_0x1351b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1351b0) {
            ctx->pc = 0x1351B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1351B0u;
            // 0x1351b4: 0x8e0219d8  lw          $v0, 0x19D8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1351CCu;
            goto label_1351cc;
        }
    }
    ctx->pc = 0x1351B8u;
    // 0x1351b8: 0x8e0519d4  lw          $a1, 0x19D4($s0)
    ctx->pc = 0x1351b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6612)));
    // 0x1351bc: 0xc040698  jal         func_101A60
    ctx->pc = 0x1351BCu;
    SET_GPR_U32(ctx, 31, 0x1351C4u);
    ctx->pc = 0x1351C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1351BCu;
    // 0x1351c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A60u, 0x1351BCu, 0x1351C4u)) {
        return;
    }
    ctx->pc = 0x1351C4u;
label_1351c4:
    // 0x1351c4: 0xae0219cc  sw          $v0, 0x19CC($s0)
    ctx->pc = 0x1351c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6604), GPR_U32(ctx, 2));
    // 0x1351c8: 0x8e0219d8  lw          $v0, 0x19D8($s0)
    ctx->pc = 0x1351c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6616)));
label_1351cc:
    // 0x1351cc: 0x54510006  bnel        $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1351CCu;
    {
        const bool branch_taken_0x1351cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1351cc) {
            ctx->pc = 0x1351D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1351CCu;
            // 0x1351d0: 0x8e0219d0  lw          $v0, 0x19D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1351E8u;
            goto label_1351e8;
        }
    }
    ctx->pc = 0x1351D4u;
    // 0x1351d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1351d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1351d8: 0xc040688  jal         func_101A20
    ctx->pc = 0x1351D8u;
    SET_GPR_U32(ctx, 31, 0x1351E0u);
    ctx->pc = 0x1351DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1351D8u;
    // 0x1351dc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A20u, 0x1351D8u, 0x1351E0u)) {
        return;
    }
    ctx->pc = 0x1351E0u;
label_1351e0:
    // 0x1351e0: 0xae0219d8  sw          $v0, 0x19D8($s0)
    ctx->pc = 0x1351e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6616), GPR_U32(ctx, 2));
    // 0x1351e4: 0x8e0219d0  lw          $v0, 0x19D0($s0)
    ctx->pc = 0x1351e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6608)));
label_1351e8:
    // 0x1351e8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1351E8u;
    {
        const bool branch_taken_0x1351e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1351e8) {
            ctx->pc = 0x1351ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1351E8u;
            // 0x1351ec: 0x8e0202a4  lw          $v0, 0x2A4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135204u;
            goto label_135204;
        }
    }
    ctx->pc = 0x1351F0u;
    // 0x1351f0: 0x8e0519d8  lw          $a1, 0x19D8($s0)
    ctx->pc = 0x1351f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6616)));
    // 0x1351f4: 0xc040698  jal         func_101A60
    ctx->pc = 0x1351F4u;
    SET_GPR_U32(ctx, 31, 0x1351FCu);
    ctx->pc = 0x1351F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1351F4u;
    // 0x1351f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A60u, 0x1351F4u, 0x1351FCu)) {
        return;
    }
    ctx->pc = 0x1351FCu;
label_1351fc:
    // 0x1351fc: 0xae0219d0  sw          $v0, 0x19D0($s0)
    ctx->pc = 0x1351fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6608), GPR_U32(ctx, 2));
    // 0x135200: 0x8e0202a4  lw          $v0, 0x2A4($s0)
    ctx->pc = 0x135200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
label_135204:
    // 0x135204: 0x50400042  beql        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x135204u;
    {
        const bool branch_taken_0x135204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135204) {
            ctx->pc = 0x135208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135204u;
            // 0x135208: 0x8e0219dc  lw          $v0, 0x19DC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135310u;
            goto label_135310;
        }
    }
    ctx->pc = 0x13520Cu;
    // 0x13520c: 0x8e0219ec  lw          $v0, 0x19EC($s0)
    ctx->pc = 0x13520cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6636)));
    // 0x135210: 0x54510006  bnel        $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x135210u;
    {
        const bool branch_taken_0x135210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x135210) {
            ctx->pc = 0x135214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135210u;
            // 0x135214: 0x8e0219f0  lw          $v0, 0x19F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6640)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13522Cu;
            goto label_13522c;
        }
    }
    ctx->pc = 0x135218u;
    // 0x135218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13521c: 0xc040690  jal         func_101A40
    ctx->pc = 0x13521Cu;
    SET_GPR_U32(ctx, 31, 0x135224u);
    ctx->pc = 0x135220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13521Cu;
    // 0x135220: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A40u, 0x13521Cu, 0x135224u)) {
        return;
    }
    ctx->pc = 0x135224u;
label_135224:
    // 0x135224: 0xae0219ec  sw          $v0, 0x19EC($s0)
    ctx->pc = 0x135224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6636), GPR_U32(ctx, 2));
    // 0x135228: 0x8e0219f0  lw          $v0, 0x19F0($s0)
    ctx->pc = 0x135228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6640)));
label_13522c:
    // 0x13522c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x13522Cu;
    {
        const bool branch_taken_0x13522c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13522c) {
            ctx->pc = 0x135230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13522Cu;
            // 0x135230: 0x8e0519ec  lw          $a1, 0x19EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135258u;
            goto label_135258;
        }
    }
    ctx->pc = 0x135234u;
    // 0x135234: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x135234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x135238: 0x8e0219ec  lw          $v0, 0x19EC($s0)
    ctx->pc = 0x135238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6636)));
    // 0x13523c: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x13523cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x135240: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x135240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x135244: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x135244u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x135248: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x135248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x13524c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13524cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135250: 0xae0319f0  sw          $v1, 0x19F0($s0)
    ctx->pc = 0x135250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6640), GPR_U32(ctx, 3));
    // 0x135254: 0x8e0519ec  lw          $a1, 0x19EC($s0)
    ctx->pc = 0x135254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6636)));
label_135258:
    // 0x135258: 0xc0406aa  jal         func_101AA8
    ctx->pc = 0x135258u;
    SET_GPR_U32(ctx, 31, 0x135260u);
    ctx->pc = 0x13525Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135258u;
    // 0x13525c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101AA8u, 0x135258u, 0x135260u)) {
        return;
    }
    ctx->pc = 0x135260u;
label_135260:
    // 0x135260: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x135260u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x135264: 0x8e0219e8  lw          $v0, 0x19E8($s0)
    ctx->pc = 0x135264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6632)));
    // 0x135268: 0x54510006  bnel        $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x135268u;
    {
        const bool branch_taken_0x135268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x135268) {
            ctx->pc = 0x13526Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135268u;
            // 0x13526c: 0x8e0219f4  lw          $v0, 0x19F4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6644)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135284u;
            goto label_135284;
        }
    }
    ctx->pc = 0x135270u;
    // 0x135270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135274: 0xc040690  jal         func_101A40
    ctx->pc = 0x135274u;
    SET_GPR_U32(ctx, 31, 0x13527Cu);
    ctx->pc = 0x135278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135274u;
    // 0x135278: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A40u, 0x135274u, 0x13527Cu)) {
        return;
    }
    ctx->pc = 0x13527Cu;
label_13527c:
    // 0x13527c: 0xae0219e8  sw          $v0, 0x19E8($s0)
    ctx->pc = 0x13527cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6632), GPR_U32(ctx, 2));
    // 0x135280: 0x8e0219f4  lw          $v0, 0x19F4($s0)
    ctx->pc = 0x135280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6644)));
label_135284:
    // 0x135284: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x135284u;
    {
        const bool branch_taken_0x135284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135284) {
            ctx->pc = 0x135288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135284u;
            // 0x135288: 0x8e0519e8  lw          $a1, 0x19E8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6632)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1352B0u;
            goto label_1352b0;
        }
    }
    ctx->pc = 0x13528Cu;
    // 0x13528c: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x13528cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x135290: 0x8e0219e8  lw          $v0, 0x19E8($s0)
    ctx->pc = 0x135290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6632)));
    // 0x135294: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x135294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x135298: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x135298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x13529c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x13529cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1352a0: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x1352a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x1352a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1352a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1352a8: 0xae0319f4  sw          $v1, 0x19F4($s0)
    ctx->pc = 0x1352a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6644), GPR_U32(ctx, 3));
    // 0x1352ac: 0x8e0519e8  lw          $a1, 0x19E8($s0)
    ctx->pc = 0x1352acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6632)));
label_1352b0:
    // 0x1352b0: 0xc0406aa  jal         func_101AA8
    ctx->pc = 0x1352B0u;
    SET_GPR_U32(ctx, 31, 0x1352B8u);
    ctx->pc = 0x1352B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1352B0u;
    // 0x1352b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101AA8u, 0x1352B0u, 0x1352B8u)) {
        return;
    }
    ctx->pc = 0x1352B8u;
label_1352b8:
    // 0x1352b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1352b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1352bc: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1352bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1352c0: 0xc040690  jal         func_101A40
    ctx->pc = 0x1352C0u;
    SET_GPR_U32(ctx, 31, 0x1352C8u);
    ctx->pc = 0x1352C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1352C0u;
    // 0x1352c4: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A40u, 0x1352C0u, 0x1352C8u)) {
        return;
    }
    ctx->pc = 0x1352C8u;
label_1352c8:
    // 0x1352c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1352c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1352cc: 0xc0406aa  jal         func_101AA8
    ctx->pc = 0x1352CCu;
    SET_GPR_U32(ctx, 31, 0x1352D4u);
    ctx->pc = 0x1352D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1352CCu;
    // 0x1352d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101AA8u, 0x1352CCu, 0x1352D4u)) {
        return;
    }
    ctx->pc = 0x1352D4u;
label_1352d4:
    // 0x1352d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1352d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1352d8: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x1352d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1352dc: 0xc040690  jal         func_101A40
    ctx->pc = 0x1352DCu;
    SET_GPR_U32(ctx, 31, 0x1352E4u);
    ctx->pc = 0x1352E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1352DCu;
    // 0x1352e0: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A40u, 0x1352DCu, 0x1352E4u)) {
        return;
    }
    ctx->pc = 0x1352E4u;
label_1352e4:
    // 0x1352e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1352e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1352e8: 0xc0406aa  jal         func_101AA8
    ctx->pc = 0x1352E8u;
    SET_GPR_U32(ctx, 31, 0x1352F0u);
    ctx->pc = 0x1352ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1352E8u;
    // 0x1352ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101AA8u, 0x1352E8u, 0x1352F0u)) {
        return;
    }
    ctx->pc = 0x1352F0u;
label_1352f0:
    // 0x1352f0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1352F0u;
    {
        const bool branch_taken_0x1352f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1352F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1352F0u;
        // 0x1352f4: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1352f0) {
            ctx->pc = 0x135300u;
            goto label_135300;
        }
    }
    ctx->pc = 0x1352F8u;
    // 0x1352f8: 0x8e0219f0  lw          $v0, 0x19F0($s0)
    ctx->pc = 0x1352f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6640)));
    // 0x1352fc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1352fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_135300:
    // 0x135300: 0x5260003d  beql        $s3, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x135300u;
    {
        const bool branch_taken_0x135300 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x135300) {
            ctx->pc = 0x135304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135300u;
            // 0x135304: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1353F8u;
            goto label_1353f8;
        }
    }
    ctx->pc = 0x135308u;
    // 0x135308: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x135308u;
    {
        const bool branch_taken_0x135308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135308u;
        // 0x13530c: 0x8e0219f4  lw          $v0, 0x19F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135308) {
            ctx->pc = 0x1353F0u;
            goto label_1353f0;
        }
    }
    ctx->pc = 0x135310u;
label_135310:
    // 0x135310: 0x54510006  bnel        $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x135310u;
    {
        const bool branch_taken_0x135310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x135310) {
            ctx->pc = 0x135314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135310u;
            // 0x135314: 0x8e0219e0  lw          $v0, 0x19E0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13532Cu;
            goto label_13532c;
        }
    }
    ctx->pc = 0x135318u;
    // 0x135318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13531c: 0xc040688  jal         func_101A20
    ctx->pc = 0x13531Cu;
    SET_GPR_U32(ctx, 31, 0x135324u);
    ctx->pc = 0x135320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13531Cu;
    // 0x135320: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A20u, 0x13531Cu, 0x135324u)) {
        return;
    }
    ctx->pc = 0x135324u;
label_135324:
    // 0x135324: 0xae0219dc  sw          $v0, 0x19DC($s0)
    ctx->pc = 0x135324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6620), GPR_U32(ctx, 2));
    // 0x135328: 0x8e0219e0  lw          $v0, 0x19E0($s0)
    ctx->pc = 0x135328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6624)));
label_13532c:
    // 0x13532c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x13532Cu;
    {
        const bool branch_taken_0x13532c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13532c) {
            ctx->pc = 0x135330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13532Cu;
            // 0x135330: 0x8e0519dc  lw          $a1, 0x19DC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135358u;
            goto label_135358;
        }
    }
    ctx->pc = 0x135334u;
    // 0x135334: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x135334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x135338: 0x8e0219dc  lw          $v0, 0x19DC($s0)
    ctx->pc = 0x135338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6620)));
    // 0x13533c: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x13533cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x135340: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x135340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x135344: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x135344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x135348: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x135348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x13534c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13534cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135350: 0xae0319e0  sw          $v1, 0x19E0($s0)
    ctx->pc = 0x135350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6624), GPR_U32(ctx, 3));
    // 0x135354: 0x8e0519dc  lw          $a1, 0x19DC($s0)
    ctx->pc = 0x135354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6620)));
label_135358:
    // 0x135358: 0xc040698  jal         func_101A60
    ctx->pc = 0x135358u;
    SET_GPR_U32(ctx, 31, 0x135360u);
    ctx->pc = 0x13535Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135358u;
    // 0x13535c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A60u, 0x135358u, 0x135360u)) {
        return;
    }
    ctx->pc = 0x135360u;
label_135360:
    // 0x135360: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x135360u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x135364: 0x8e0219e4  lw          $v0, 0x19E4($s0)
    ctx->pc = 0x135364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6628)));
    // 0x135368: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x135368u;
    {
        const bool branch_taken_0x135368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135368) {
            ctx->pc = 0x13536Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135368u;
            // 0x13536c: 0x8e0519d4  lw          $a1, 0x19D4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135394u;
            goto label_135394;
        }
    }
    ctx->pc = 0x135370u;
    // 0x135370: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x135370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x135374: 0x8e0219d4  lw          $v0, 0x19D4($s0)
    ctx->pc = 0x135374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6612)));
    // 0x135378: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x135378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x13537c: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x13537cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x135380: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x135380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x135384: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x135384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x135388: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x135388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13538c: 0xae0319e4  sw          $v1, 0x19E4($s0)
    ctx->pc = 0x13538cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6628), GPR_U32(ctx, 3));
    // 0x135390: 0x8e0519d4  lw          $a1, 0x19D4($s0)
    ctx->pc = 0x135390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6612)));
label_135394:
    // 0x135394: 0xc040698  jal         func_101A60
    ctx->pc = 0x135394u;
    SET_GPR_U32(ctx, 31, 0x13539Cu);
    ctx->pc = 0x135398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135394u;
    // 0x135398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A60u, 0x135394u, 0x13539Cu)) {
        return;
    }
    ctx->pc = 0x13539Cu;
label_13539c:
    // 0x13539c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13539cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1353a0: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1353a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1353a4: 0xc040688  jal         func_101A20
    ctx->pc = 0x1353A4u;
    SET_GPR_U32(ctx, 31, 0x1353ACu);
    ctx->pc = 0x1353A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1353A4u;
    // 0x1353a8: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A20u, 0x1353A4u, 0x1353ACu)) {
        return;
    }
    ctx->pc = 0x1353ACu;
label_1353ac:
    // 0x1353ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1353acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1353b0: 0xc040698  jal         func_101A60
    ctx->pc = 0x1353B0u;
    SET_GPR_U32(ctx, 31, 0x1353B8u);
    ctx->pc = 0x1353B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1353B0u;
    // 0x1353b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A60u, 0x1353B0u, 0x1353B8u)) {
        return;
    }
    ctx->pc = 0x1353B8u;
label_1353b8:
    // 0x1353b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1353b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1353bc: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x1353bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1353c0: 0xc040688  jal         func_101A20
    ctx->pc = 0x1353C0u;
    SET_GPR_U32(ctx, 31, 0x1353C8u);
    ctx->pc = 0x1353C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1353C0u;
    // 0x1353c4: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A20u, 0x1353C0u, 0x1353C8u)) {
        return;
    }
    ctx->pc = 0x1353C8u;
label_1353c8:
    // 0x1353c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1353c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1353cc: 0xc040698  jal         func_101A60
    ctx->pc = 0x1353CCu;
    SET_GPR_U32(ctx, 31, 0x1353D4u);
    ctx->pc = 0x1353D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1353CCu;
    // 0x1353d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A60u, 0x1353CCu, 0x1353D4u)) {
        return;
    }
    ctx->pc = 0x1353D4u;
label_1353d4:
    // 0x1353d4: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1353D4u;
    {
        const bool branch_taken_0x1353d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1353D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1353D4u;
        // 0x1353d8: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1353d4) {
            ctx->pc = 0x1353E4u;
            goto label_1353e4;
        }
    }
    ctx->pc = 0x1353DCu;
    // 0x1353dc: 0x8e0219e0  lw          $v0, 0x19E0($s0)
    ctx->pc = 0x1353dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6624)));
    // 0x1353e0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1353e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1353e4:
    // 0x1353e4: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1353E4u;
    {
        const bool branch_taken_0x1353e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1353e4) {
            ctx->pc = 0x1353E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1353E4u;
            // 0x1353e8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1353F8u;
            goto label_1353f8;
        }
    }
    ctx->pc = 0x1353ECu;
    // 0x1353ec: 0x8e0219e4  lw          $v0, 0x19E4($s0)
    ctx->pc = 0x1353ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6628)));
label_1353f0:
    // 0x1353f0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1353f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1353f4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1353f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1353f8:
    // 0x1353f8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1353f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1353fc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1353fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x135400: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x135400u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x135404: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x135404u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x135408: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x135408u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13540c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x13540cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135410: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x135410u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x135414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135418: 0x3e00008  jr          $ra
    ctx->pc = 0x135418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135418u;
        // 0x13541c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135420u;
}
