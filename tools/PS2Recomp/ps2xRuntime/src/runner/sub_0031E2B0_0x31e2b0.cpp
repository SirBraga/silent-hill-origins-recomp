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

// Function: sub_0031E2B0
// Address: 0x31e2b0 - 0x31e480
void sub_0031E2B0_0x31e2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E2B0_0x31e2b0");
#endif

    switch (ctx->pc) {
        case 0x31e2ecu: goto label_31e2ec;
        case 0x31e334u: goto label_31e334;
        case 0x31e350u: goto label_31e350;
        case 0x31e360u: goto label_31e360;
        case 0x31e3d8u: goto label_31e3d8;
        case 0x31e450u: goto label_31e450;
        case 0x31e458u: goto label_31e458;
        default: break;
    }

    ctx->pc = 0x31e2b0u;

    // 0x31e2b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31e2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x31e2b4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x31e2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x31e2b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31e2b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e2bc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x31e2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x31e2c0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x31e2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x31e2c4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x31e2c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e2c8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x31e2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x31e2cc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x31e2ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e2d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31e2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31e2d4: 0x2e220011  sltiu       $v0, $s1, 0x11
    ctx->pc = 0x31e2d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x31e2d8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x31e2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x31e2dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31E2DCu;
    {
        const bool branch_taken_0x31e2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2DCu;
        // 0x31e2e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e2dc) {
            ctx->pc = 0x31E2F4u;
            goto label_31e2f4;
        }
    }
    ctx->pc = 0x31E2E4u;
    // 0x31e2e4: 0xc0c7436  jal         func_31D0D8
    ctx->pc = 0x31E2E4u;
    SET_GPR_U32(ctx, 31, 0x31E2ECu);
    ctx->pc = 0x31D0D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31D0D8u, 0x31E2E4u, 0x31E2ECu)) {
        return;
    }
    ctx->pc = 0x31E2ECu;
label_31e2ec:
    // 0x31e2ec: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x31E2ECu;
    {
        const bool branch_taken_0x31e2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2ECu;
        // 0x31e2f0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e2ec) {
            ctx->pc = 0x31E460u;
            goto label_31e460;
        }
    }
    ctx->pc = 0x31E2F4u;
label_31e2f4:
    // 0x31e2f4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x31e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x31e2f8: 0x24a50013  addiu       $a1, $a1, 0x13
    ctx->pc = 0x31e2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19));
    // 0x31e2fc: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x31e2fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x31e300: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x31e300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x31e304: 0x2ca4001f  sltiu       $a0, $a1, 0x1F
    ctx->pc = 0x31e304u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x31e308: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31E308u;
    {
        const bool branch_taken_0x31e308 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E308u;
        // 0x31e30c: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e308) {
            ctx->pc = 0x31E320u;
            goto label_31e320;
        }
    }
    ctx->pc = 0x31E310u;
    // 0x31e310: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31e310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31e314: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x31e314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x31e318: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31E318u;
    {
        const bool branch_taken_0x31e318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E318u;
        // 0x31e31c: 0xa2a024  and         $s4, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e318) {
            ctx->pc = 0x31E324u;
            goto label_31e324;
        }
    }
    ctx->pc = 0x31E320u;
label_31e320:
    // 0x31e320: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x31e320u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_31e324:
    // 0x31e324: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x31e324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x31e328: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31e328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e32c: 0xc0c7436  jal         func_31D0D8
    ctx->pc = 0x31E32Cu;
    SET_GPR_U32(ctx, 31, 0x31E334u);
    ctx->pc = 0x31E330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E32Cu;
    // 0x31e330: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D0D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31D0D8u, 0x31E32Cu, 0x31E334u)) {
        return;
    }
    ctx->pc = 0x31E334u;
label_31e334:
    // 0x31e334: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31e334u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e338: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E338u;
    {
        const bool branch_taken_0x31e338 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E338u;
        // 0x31e33c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e338) {
            ctx->pc = 0x31E348u;
            goto label_31e348;
        }
    }
    ctx->pc = 0x31E340u;
    // 0x31e340: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x31E340u;
    {
        const bool branch_taken_0x31e340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E340u;
        // 0x31e344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e340) {
            ctx->pc = 0x31E45Cu;
            goto label_31e45c;
        }
    }
    ctx->pc = 0x31E348u;
label_31e348:
    // 0x31e348: 0xc0c556c  jal         func_3155B0
    ctx->pc = 0x31E348u;
    SET_GPR_U32(ctx, 31, 0x31E350u);
    ctx->pc = 0x31E34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E348u;
    // 0x31e34c: 0x2672fff8  addiu       $s2, $s3, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3155B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3155B0u, 0x31E348u, 0x31E350u)) {
        return;
    }
    ctx->pc = 0x31E350u;
label_31e350:
    // 0x31e350: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x31e350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x31e354: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31e354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e358: 0xc0ca672  jal         func_3299C8
    ctx->pc = 0x31E358u;
    SET_GPR_U32(ctx, 31, 0x31E360u);
    ctx->pc = 0x31E35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E358u;
    // 0x31e35c: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3299C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3299C8u, 0x31E358u, 0x31E360u)) {
        return;
    }
    ctx->pc = 0x31E360u;
label_31e360:
    // 0x31e360: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x31E360u;
    {
        const bool branch_taken_0x31e360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E360u;
        // 0x31e364: 0x2718021  addu        $s0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e360) {
            ctx->pc = 0x31E3DCu;
            goto label_31e3dc;
        }
    }
    ctx->pc = 0x31E368u;
    // 0x31e368: 0x111023  negu        $v0, $s1
    ctx->pc = 0x31e368u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x31e36c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x31e36cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x31e370: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x31e370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x31e374: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x31e374u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x31e378: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x31e378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x31e37c: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x31e37cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x31e380: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31e380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31e384: 0x2121823  subu        $v1, $s0, $s2
    ctx->pc = 0x31e384u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x31e388: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x31e388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x31e38c: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x31e38cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31e390: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x31e390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x31e394: 0xa4800a  movz        $s0, $a1, $a0
    ctx->pc = 0x31e394u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5));
    // 0x31e398: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x31e398u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x31e39c: 0x2123823  subu        $a3, $s0, $s2
    ctx->pc = 0x31e39cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x31e3a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31e3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e3a4: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x31e3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x31e3a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31e3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e3ac: 0x34c30001  ori         $v1, $a2, 0x1
    ctx->pc = 0x31e3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x31e3b0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x31e3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x31e3b4: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x31e3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x31e3b8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x31e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x31e3bc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x31e3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x31e3c0: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x31e3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x31e3c4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x31e3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x31e3c8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x31e3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x31e3cc: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x31e3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x31e3d0: 0xc0c7602  jal         func_31D808
    ctx->pc = 0x31E3D0u;
    SET_GPR_U32(ctx, 31, 0x31E3D8u);
    ctx->pc = 0x31E3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E3D0u;
    // 0x31e3d4: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31D808u, 0x31E3D0u, 0x31E3D8u)) {
        return;
    }
    ctx->pc = 0x31E3D8u;
label_31e3d8:
    // 0x31e3d8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x31e3d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31e3dc:
    // 0x31e3dc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x31e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x31e3e0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x31e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x31e3e4: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x31e3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x31e3e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31e3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31e3ec: 0x54202b  sltu        $a0, $v0, $s4
    ctx->pc = 0x31e3ecu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x31e3f0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x31E3F0u;
    {
        const bool branch_taken_0x31e3f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e3f0) {
            ctx->pc = 0x31E3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E3F0u;
            // 0x31e3f4: 0x541023  subu        $v0, $v0, $s4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E40Cu;
            goto label_31e40c;
        }
    }
    ctx->pc = 0x31E3F8u;
    // 0x31e3f8: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x31e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x31e3fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31e3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31e400: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31e400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31e404: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31E404u;
    {
        const bool branch_taken_0x31e404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E404u;
        // 0x31e408: 0x2202f  dsubu       $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e404) {
            ctx->pc = 0x31E414u;
            goto label_31e414;
        }
    }
    ctx->pc = 0x31E40Cu;
label_31e40c:
    // 0x31e40c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31e40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31e410: 0x2203e  dsrl32      $a0, $v0, 0
    ctx->pc = 0x31e410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 0));
label_31e414:
    // 0x31e414: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x31e414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x31e418: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x31E418u;
    {
        const bool branch_taken_0x31e418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E418u;
        // 0x31e41c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e418) {
            ctx->pc = 0x31E450u;
            goto label_31e450;
        }
    }
    ctx->pc = 0x31E420u;
    // 0x31e420: 0x2543021  addu        $a2, $s2, $s4
    ctx->pc = 0x31e420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x31e424: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x31e424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x31e428: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x31e428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x31e42c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31e42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31e430: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x31e430u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x31e434: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31e434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e438: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x31e438u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x31e43c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x31e43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x31e440: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x31e440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x31e444: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x31e444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x31e448: 0xc0c7602  jal         func_31D808
    ctx->pc = 0x31E448u;
    SET_GPR_U32(ctx, 31, 0x31E450u);
    ctx->pc = 0x31E44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E448u;
    // 0x31e44c: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31D808u, 0x31E448u, 0x31E450u)) {
        return;
    }
    ctx->pc = 0x31E450u;
label_31e450:
    // 0x31e450: 0xc0c5584  jal         func_315610
    ctx->pc = 0x31E450u;
    SET_GPR_U32(ctx, 31, 0x31E458u);
    ctx->pc = 0x31E454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E450u;
    // 0x31e454: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315610u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315610u, 0x31E450u, 0x31E458u)) {
        return;
    }
    ctx->pc = 0x31E458u;
label_31e458:
    // 0x31e458: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x31e458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_31e45c:
    // 0x31e45c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x31e45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31e460:
    // 0x31e460: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x31e460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31e464: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x31e464u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31e468: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31e468u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31e46c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x31e46cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31e470: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x31e470u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31e474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e478: 0x3e00008  jr          $ra
    ctx->pc = 0x31E478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E478u;
        // 0x31e47c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E480u;
}
