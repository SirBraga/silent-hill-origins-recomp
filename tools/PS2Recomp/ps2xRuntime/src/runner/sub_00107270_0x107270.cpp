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

// Function: sub_00107270
// Address: 0x107270 - 0x107380
void sub_00107270_0x107270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107270_0x107270");
#endif

    switch (ctx->pc) {
        case 0x10729cu: goto label_10729c;
        case 0x1072b8u: goto label_1072b8;
        case 0x107310u: goto label_107310;
        case 0x107338u: goto label_107338;
        case 0x107354u: goto label_107354;
        default: break;
    }

    ctx->pc = 0x107270u;

    // 0x107270: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x107270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x107274: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x107274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x107278: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x107278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x10727c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10727cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107280: 0x8c464234  lw          $a2, 0x4234($v0)
    ctx->pc = 0x107280u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B4234u));
    // 0x107284: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x107284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x107288: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x107288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x10728c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x10728cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x107290: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x107290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x107294: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x107294u;
    SET_GPR_U32(ctx, 31, 0x10729Cu);
    ctx->pc = 0x107298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107294u;
    // 0x107298: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x107294u, 0x10729Cu)) {
        return;
    }
    ctx->pc = 0x10729Cu;
label_10729c:
    // 0x10729c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x10729cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1072a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1072a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1072a4: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1072A4u;
    {
        const bool branch_taken_0x1072a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1072A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072A4u;
        // 0x1072a8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1072a4) {
            ctx->pc = 0x107364u;
            goto label_107364;
        }
    }
    ctx->pc = 0x1072ACu;
    // 0x1072ac: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1072acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1072b0: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1072b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1072b4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1072b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1072b8:
    // 0x1072b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1072b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1072bc: 0x5053000b  beql        $v0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x1072BCu;
    {
        const bool branch_taken_0x1072bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x1072bc) {
            ctx->pc = 0x1072C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1072BCu;
            // 0x1072c0: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1072ECu;
            goto label_1072ec;
        }
    }
    ctx->pc = 0x1072C4u;
    // 0x1072c4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1072C4u;
    {
        const bool branch_taken_0x1072c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1072c4) {
            ctx->pc = 0x1072C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1072C4u;
            // 0x1072c8: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1072E4u;
            goto label_1072e4;
        }
    }
    ctx->pc = 0x1072CCu;
    // 0x1072cc: 0x50520009  beql        $v0, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1072CCu;
    {
        const bool branch_taken_0x1072cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1072cc) {
            ctx->pc = 0x1072D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1072CCu;
            // 0x1072d0: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1072F4u;
            goto label_1072f4;
        }
    }
    ctx->pc = 0x1072D4u;
    // 0x1072d4: 0x10510010  beq         $v0, $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1072D4u;
    {
        const bool branch_taken_0x1072d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1072D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072D4u;
        // 0x1072d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1072d4) {
            ctx->pc = 0x107318u;
            goto label_107318;
        }
    }
    ctx->pc = 0x1072DCu;
    // 0x1072dc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1072DCu;
    {
        const bool branch_taken_0x1072dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1072E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072DCu;
        // 0x1072e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1072dc) {
            ctx->pc = 0x107344u;
            goto label_107344;
        }
    }
    ctx->pc = 0x1072E4u;
label_1072e4:
    // 0x1072e4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1072E4u;
    {
        const bool branch_taken_0x1072e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1072E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072E4u;
        // 0x1072e8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1072e4) {
            ctx->pc = 0x107338u;
            goto label_107338;
        }
    }
    ctx->pc = 0x1072ECu;
label_1072ec:
    // 0x1072ec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1072ECu;
    {
        const bool branch_taken_0x1072ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1072F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072ECu;
        // 0x1072f0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1072ec) {
            ctx->pc = 0x107338u;
            goto label_107338;
        }
    }
    ctx->pc = 0x1072F4u;
label_1072f4:
    // 0x1072f4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1072F4u;
    {
        const bool branch_taken_0x1072f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1072F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1072F4u;
        // 0x1072f8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1072f4) {
            ctx->pc = 0x107338u;
            goto label_107338;
        }
    }
    ctx->pc = 0x1072FCu;
    // 0x1072fc: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1072fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x107300: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x107300u;
    {
        const bool branch_taken_0x107300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107300u;
        // 0x107304: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107300) {
            ctx->pc = 0x10733Cu;
            goto label_10733c;
        }
    }
    ctx->pc = 0x107308u;
    // 0x107308: 0xc07b556  jal         func_1ED558
    ctx->pc = 0x107308u;
    SET_GPR_U32(ctx, 31, 0x107310u);
    ctx->pc = 0x1ED558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED558u, 0x107308u, 0x107310u)) {
        return;
    }
    ctx->pc = 0x107310u;
label_107310:
    // 0x107310: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x107310u;
    {
        const bool branch_taken_0x107310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107310u;
        // 0x107314: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107310) {
            ctx->pc = 0x10733Cu;
            goto label_10733c;
        }
    }
    ctx->pc = 0x107318u;
label_107318:
    // 0x107318: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x107318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x10731c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10731Cu;
    {
        const bool branch_taken_0x10731c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10731Cu;
        // 0x107320: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10731c) {
            ctx->pc = 0x107338u;
            goto label_107338;
        }
    }
    ctx->pc = 0x107324u;
    // 0x107324: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x107324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x107328: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x107328u;
    {
        const bool branch_taken_0x107328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107328u;
        // 0x10732c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107328) {
            ctx->pc = 0x10733Cu;
            goto label_10733c;
        }
    }
    ctx->pc = 0x107330u;
    // 0x107330: 0xc07b556  jal         func_1ED558
    ctx->pc = 0x107330u;
    SET_GPR_U32(ctx, 31, 0x107338u);
    ctx->pc = 0x1ED558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED558u, 0x107330u, 0x107338u)) {
        return;
    }
    ctx->pc = 0x107338u;
label_107338:
    // 0x107338: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x107338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10733c:
    // 0x10733c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10733cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107340: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x107340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_107344:
    // 0x107344: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x107344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x107348: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x107348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10734c: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x10734Cu;
    SET_GPR_U32(ctx, 31, 0x107354u);
    ctx->pc = 0x107350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10734Cu;
    // 0x107350: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x10734Cu, 0x107354u)) {
        return;
    }
    ctx->pc = 0x107354u;
label_107354:
    // 0x107354: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x107354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107358: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10735c: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x10735Cu;
    {
        const bool branch_taken_0x10735c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10735Cu;
        // 0x107360: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10735c) {
            ctx->pc = 0x1072B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1072b8;
        }
    }
    ctx->pc = 0x107364u;
label_107364:
    // 0x107364: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x107364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x107368: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x107368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10736c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x10736cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107370: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x107370u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x107374: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x107374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107378: 0x3e00008  jr          $ra
    ctx->pc = 0x107378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107378u;
        // 0x10737c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107380u;
}
