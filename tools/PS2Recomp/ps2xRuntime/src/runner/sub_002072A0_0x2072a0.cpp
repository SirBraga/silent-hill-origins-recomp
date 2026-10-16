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

// Function: sub_002072A0
// Address: 0x2072a0 - 0x2073e8
void sub_002072A0_0x2072a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002072A0_0x2072a0");
#endif

    switch (ctx->pc) {
        case 0x2072a0u: goto label_2072a0;
        case 0x2072a4u: goto label_2072a4;
        case 0x2072a8u: goto label_2072a8;
        case 0x2072acu: goto label_2072ac;
        case 0x2072b0u: goto label_2072b0;
        case 0x2072b4u: goto label_2072b4;
        case 0x2072b8u: goto label_2072b8;
        case 0x2072bcu: goto label_2072bc;
        case 0x2072c0u: goto label_2072c0;
        case 0x2072c4u: goto label_2072c4;
        case 0x2072c8u: goto label_2072c8;
        case 0x2072ccu: goto label_2072cc;
        case 0x2072d0u: goto label_2072d0;
        case 0x2072d4u: goto label_2072d4;
        case 0x2072d8u: goto label_2072d8;
        case 0x2072dcu: goto label_2072dc;
        case 0x2072e0u: goto label_2072e0;
        case 0x2072e4u: goto label_2072e4;
        case 0x2072e8u: goto label_2072e8;
        case 0x2072ecu: goto label_2072ec;
        case 0x2072f0u: goto label_2072f0;
        case 0x2072f4u: goto label_2072f4;
        case 0x2072f8u: goto label_2072f8;
        case 0x2072fcu: goto label_2072fc;
        case 0x207300u: goto label_207300;
        case 0x207304u: goto label_207304;
        case 0x207308u: goto label_207308;
        case 0x20730cu: goto label_20730c;
        case 0x207310u: goto label_207310;
        case 0x207314u: goto label_207314;
        case 0x207318u: goto label_207318;
        case 0x20731cu: goto label_20731c;
        case 0x207320u: goto label_207320;
        case 0x207324u: goto label_207324;
        case 0x207328u: goto label_207328;
        case 0x20732cu: goto label_20732c;
        case 0x207330u: goto label_207330;
        case 0x207334u: goto label_207334;
        case 0x207338u: goto label_207338;
        case 0x20733cu: goto label_20733c;
        case 0x207340u: goto label_207340;
        case 0x207344u: goto label_207344;
        case 0x207348u: goto label_207348;
        case 0x20734cu: goto label_20734c;
        case 0x207350u: goto label_207350;
        case 0x207354u: goto label_207354;
        case 0x207358u: goto label_207358;
        case 0x20735cu: goto label_20735c;
        case 0x207360u: goto label_207360;
        case 0x207364u: goto label_207364;
        case 0x207368u: goto label_207368;
        case 0x20736cu: goto label_20736c;
        case 0x207370u: goto label_207370;
        case 0x207374u: goto label_207374;
        case 0x207378u: goto label_207378;
        case 0x20737cu: goto label_20737c;
        case 0x207380u: goto label_207380;
        case 0x207384u: goto label_207384;
        case 0x207388u: goto label_207388;
        case 0x20738cu: goto label_20738c;
        case 0x207390u: goto label_207390;
        case 0x207394u: goto label_207394;
        case 0x207398u: goto label_207398;
        case 0x20739cu: goto label_20739c;
        case 0x2073a0u: goto label_2073a0;
        case 0x2073a4u: goto label_2073a4;
        case 0x2073a8u: goto label_2073a8;
        case 0x2073acu: goto label_2073ac;
        case 0x2073b0u: goto label_2073b0;
        case 0x2073b4u: goto label_2073b4;
        case 0x2073b8u: goto label_2073b8;
        case 0x2073bcu: goto label_2073bc;
        case 0x2073c0u: goto label_2073c0;
        case 0x2073c4u: goto label_2073c4;
        case 0x2073c8u: goto label_2073c8;
        case 0x2073ccu: goto label_2073cc;
        case 0x2073d0u: goto label_2073d0;
        case 0x2073d4u: goto label_2073d4;
        case 0x2073d8u: goto label_2073d8;
        case 0x2073dcu: goto label_2073dc;
        case 0x2073e0u: goto label_2073e0;
        case 0x2073e4u: goto label_2073e4;
        default: break;
    }

    ctx->pc = 0x2072a0u;

label_2072a0:
    // 0x2072a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2072a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2072a4:
    // 0x2072a4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2072a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2072a8:
    // 0x2072a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2072a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2072ac:
    // 0x2072ac: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2072acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2072b0:
    // 0x2072b0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2072b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2072b4:
    // 0x2072b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2072b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2072b8:
    // 0x2072b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2072b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2072bc:
    // 0x2072bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2072bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2072c0:
    // 0x2072c0: 0x2406003e  addiu       $a2, $zero, 0x3E
    ctx->pc = 0x2072c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_2072c4:
    // 0x2072c4: 0x10e6000c  beq         $a3, $a2, . + 4 + (0xC << 2)
label_2072c8:
    if (ctx->pc == 0x2072C8u) {
        ctx->pc = 0x2072C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2072C4u;
        // 0x2072c8: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2072CCu;
        goto label_2072cc;
    }
    ctx->pc = 0x2072C4u;
    {
        const bool branch_taken_0x2072c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x2072C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2072C4u;
        // 0x2072c8: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2072c4) {
            ctx->pc = 0x2072F8u;
            goto label_2072f8;
        }
    }
    ctx->pc = 0x2072CCu;
label_2072cc:
    // 0x2072cc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2072ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2072d0:
    // 0x2072d0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2072d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2072d4:
    // 0x2072d4: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x2072d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_2072d8:
    // 0x2072d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2072d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2072dc:
    // 0x2072dc: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x2072dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
label_2072e0:
    // 0x2072e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2072e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2072e4:
    // 0x2072e4: 0xac67001c  sw          $a3, 0x1C($v1)
    ctx->pc = 0x2072e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 7));
label_2072e8:
    // 0x2072e8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2072e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2072ec:
    // 0x2072ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2072ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2072f0:
    // 0x2072f0: 0x60f809  jalr        $v1
label_2072f4:
    if (ctx->pc == 0x2072F4u) {
        ctx->pc = 0x2072F8u;
        goto label_2072f8;
    }
    ctx->pc = 0x2072F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2072F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2072F0u, 0x2072F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2072F8u;
label_2072f8:
    // 0x2072f8: 0x240601d0  addiu       $a2, $zero, 0x1D0
    ctx->pc = 0x2072f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
label_2072fc:
    // 0x2072fc: 0x1206000b  beq         $s0, $a2, . + 4 + (0xB << 2)
label_207300:
    if (ctx->pc == 0x207300u) {
        ctx->pc = 0x207300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2072FCu;
        // 0x207300: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207304u;
        goto label_207304;
    }
    ctx->pc = 0x2072FCu;
    {
        const bool branch_taken_0x2072fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 6));
        ctx->pc = 0x207300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2072FCu;
        // 0x207300: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2072fc) {
            ctx->pc = 0x20732Cu;
            goto label_20732c;
        }
    }
    ctx->pc = 0x207304u;
label_207304:
    // 0x207304: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x207304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_207308:
    // 0x207308: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x207308u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20730c:
    // 0x20730c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20730cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_207310:
    // 0x207310: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x207310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
label_207314:
    // 0x207314: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x207314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_207318:
    // 0x207318: 0xac70001c  sw          $s0, 0x1C($v1)
    ctx->pc = 0x207318u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 16));
label_20731c:
    // 0x20731c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x20731cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_207320:
    // 0x207320: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x207320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_207324:
    // 0x207324: 0x60f809  jalr        $v1
label_207328:
    if (ctx->pc == 0x207328u) {
        ctx->pc = 0x207328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207324u;
        // 0x207328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20732Cu;
        goto label_20732c;
    }
    ctx->pc = 0x207324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20732Cu);
        ctx->pc = 0x207328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207324u;
        // 0x207328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207324u, 0x20732Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20732Cu;
label_20732c:
    // 0x20732c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20732cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207330:
    // 0x207330: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x207330u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_207334:
    // 0x207334: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x207334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_207338:
    // 0x207338: 0x8e51000c  lw          $s1, 0xC($s2)
    ctx->pc = 0x207338u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_20733c:
    // 0x20733c: 0xc0c493d  jal         func_3124F4
label_207340:
    if (ctx->pc == 0x207340u) {
        ctx->pc = 0x207340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20733Cu;
        // 0x207340: 0x240601d0  addiu       $a2, $zero, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207344u;
        goto label_207344;
    }
    ctx->pc = 0x20733Cu;
    SET_GPR_U32(ctx, 31, 0x207344u);
    ctx->pc = 0x207340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20733Cu;
    // 0x207340: 0x240601d0  addiu       $a2, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x20733Cu, 0x207344u)) {
        return;
    }
    ctx->pc = 0x207344u;
label_207344:
    // 0x207344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x207344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207348:
    // 0x207348: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x207348u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_20734c:
    // 0x20734c: 0xae51000c  sw          $s1, 0xC($s2)
    ctx->pc = 0x20734cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
label_207350:
    // 0x207350: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x207350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_207354:
    // 0x207354: 0xc083bb4  jal         func_20EED0
label_207358:
    if (ctx->pc == 0x207358u) {
        ctx->pc = 0x207358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207354u;
        // 0x207358: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20735Cu;
        goto label_20735c;
    }
    ctx->pc = 0x207354u;
    SET_GPR_U32(ctx, 31, 0x20735Cu);
    ctx->pc = 0x207358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207354u;
    // 0x207358: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EED0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20EED0u, 0x207354u, 0x20735Cu)) {
        return;
    }
    ctx->pc = 0x20735Cu;
label_20735c:
    // 0x20735c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x20735cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_207360:
    // 0x207360: 0x264500b4  addiu       $a1, $s2, 0xB4
    ctx->pc = 0x207360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 180));
label_207364:
    // 0x207364: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x207364u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_207368:
    // 0x207368: 0x264300c4  addiu       $v1, $s2, 0xC4
    ctx->pc = 0x207368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
label_20736c:
    // 0x20736c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x20736cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_207370:
    // 0x207370: 0x264200b0  addiu       $v0, $s2, 0xB0
    ctx->pc = 0x207370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
label_207374:
    // 0x207374: 0x0  nop
    ctx->pc = 0x207374u;
    // NOP
label_207378:
    // 0x207378: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x207378u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_20737c:
    // 0x20737c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x20737cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_207380:
    // 0x207380: 0x0  nop
    ctx->pc = 0x207380u;
    // NOP
label_207384:
    // 0x207384: 0x0  nop
    ctx->pc = 0x207384u;
    // NOP
label_207388:
    // 0x207388: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
label_20738c:
    if (ctx->pc == 0x20738Cu) {
        ctx->pc = 0x20738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207388u;
        // 0x20738c: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207390u;
        goto label_207390;
    }
    ctx->pc = 0x207388u;
    {
        const bool branch_taken_0x207388 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x20738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207388u;
        // 0x20738c: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207388) {
            ctx->pc = 0x207378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207378;
        }
    }
    ctx->pc = 0x207390u;
label_207390:
    // 0x207390: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x207390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_207394:
    // 0x207394: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x207394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_207398:
    // 0x207398: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x207398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_20739c:
    // 0x20739c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x20739cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2073a0:
    // 0x2073a0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2073a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2073a4:
    // 0x2073a4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2073a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2073a8:
    // 0x2073a8: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
label_2073ac:
    if (ctx->pc == 0x2073ACu) {
        ctx->pc = 0x2073ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073A8u;
        // 0x2073ac: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2073B0u;
        goto label_2073b0;
    }
    ctx->pc = 0x2073A8u;
    {
        const bool branch_taken_0x2073a8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x2073ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073A8u;
        // 0x2073ac: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2073a8) {
            ctx->pc = 0x207398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207398;
        }
    }
    ctx->pc = 0x2073B0u;
label_2073b0:
    // 0x2073b0: 0xae400130  sw          $zero, 0x130($s2)
    ctx->pc = 0x2073b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 304), GPR_U32(ctx, 0));
label_2073b4:
    // 0x2073b4: 0xc0828de  jal         func_20A378
label_2073b8:
    if (ctx->pc == 0x2073B8u) {
        ctx->pc = 0x2073B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073B4u;
        // 0x2073b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2073BCu;
        goto label_2073bc;
    }
    ctx->pc = 0x2073B4u;
    SET_GPR_U32(ctx, 31, 0x2073BCu);
    ctx->pc = 0x2073B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2073B4u;
    // 0x2073b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A378u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20A378u, 0x2073B4u, 0x2073BCu)) {
        return;
    }
    ctx->pc = 0x2073BCu;
label_2073bc:
    // 0x2073bc: 0xc08205a  jal         func_208168
label_2073c0:
    if (ctx->pc == 0x2073C0u) {
        ctx->pc = 0x2073C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073BCu;
        // 0x2073c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2073C4u;
        goto label_2073c4;
    }
    ctx->pc = 0x2073BCu;
    SET_GPR_U32(ctx, 31, 0x2073C4u);
    ctx->pc = 0x2073C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2073BCu;
    // 0x2073c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x208168u, 0x2073BCu, 0x2073C4u)) {
        return;
    }
    ctx->pc = 0x2073C4u;
label_2073c4:
    // 0x2073c4: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x2073c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_2073c8:
    // 0x2073c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2073c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2073cc:
    // 0x2073cc: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x2073ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_2073d0:
    // 0x2073d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2073d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2073d4:
    // 0x2073d4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2073d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2073d8:
    // 0x2073d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2073d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2073dc:
    // 0x2073dc: 0x3e00008  jr          $ra
label_2073e0:
    if (ctx->pc == 0x2073E0u) {
        ctx->pc = 0x2073E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073DCu;
        // 0x2073e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2073E4u;
        goto label_2073e4;
    }
    ctx->pc = 0x2073DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2073E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2073DCu;
        // 0x2073e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2073DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2073E4u;
label_2073e4:
    // 0x2073e4: 0x0  nop
    ctx->pc = 0x2073e4u;
    // NOP
    ctx->pc = 0x2073e8u;
}
