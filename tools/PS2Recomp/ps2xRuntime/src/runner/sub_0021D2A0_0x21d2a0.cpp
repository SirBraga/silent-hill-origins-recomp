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

// Function: sub_0021D2A0
// Address: 0x21d2a0 - 0x21d450
void sub_0021D2A0_0x21d2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D2A0_0x21d2a0");
#endif

    switch (ctx->pc) {
        case 0x21d2a0u: goto label_21d2a0;
        case 0x21d2a4u: goto label_21d2a4;
        case 0x21d2a8u: goto label_21d2a8;
        case 0x21d2acu: goto label_21d2ac;
        case 0x21d2b0u: goto label_21d2b0;
        case 0x21d2b4u: goto label_21d2b4;
        case 0x21d2b8u: goto label_21d2b8;
        case 0x21d2bcu: goto label_21d2bc;
        case 0x21d2c0u: goto label_21d2c0;
        case 0x21d2c4u: goto label_21d2c4;
        case 0x21d2c8u: goto label_21d2c8;
        case 0x21d2ccu: goto label_21d2cc;
        case 0x21d2d0u: goto label_21d2d0;
        case 0x21d2d4u: goto label_21d2d4;
        case 0x21d2d8u: goto label_21d2d8;
        case 0x21d2dcu: goto label_21d2dc;
        case 0x21d2e0u: goto label_21d2e0;
        case 0x21d2e4u: goto label_21d2e4;
        case 0x21d2e8u: goto label_21d2e8;
        case 0x21d2ecu: goto label_21d2ec;
        case 0x21d2f0u: goto label_21d2f0;
        case 0x21d2f4u: goto label_21d2f4;
        case 0x21d2f8u: goto label_21d2f8;
        case 0x21d2fcu: goto label_21d2fc;
        case 0x21d300u: goto label_21d300;
        case 0x21d304u: goto label_21d304;
        case 0x21d308u: goto label_21d308;
        case 0x21d30cu: goto label_21d30c;
        case 0x21d310u: goto label_21d310;
        case 0x21d314u: goto label_21d314;
        case 0x21d318u: goto label_21d318;
        case 0x21d31cu: goto label_21d31c;
        case 0x21d320u: goto label_21d320;
        case 0x21d324u: goto label_21d324;
        case 0x21d328u: goto label_21d328;
        case 0x21d32cu: goto label_21d32c;
        case 0x21d330u: goto label_21d330;
        case 0x21d334u: goto label_21d334;
        case 0x21d338u: goto label_21d338;
        case 0x21d33cu: goto label_21d33c;
        case 0x21d340u: goto label_21d340;
        case 0x21d344u: goto label_21d344;
        case 0x21d348u: goto label_21d348;
        case 0x21d34cu: goto label_21d34c;
        case 0x21d350u: goto label_21d350;
        case 0x21d354u: goto label_21d354;
        case 0x21d358u: goto label_21d358;
        case 0x21d35cu: goto label_21d35c;
        case 0x21d360u: goto label_21d360;
        case 0x21d364u: goto label_21d364;
        case 0x21d368u: goto label_21d368;
        case 0x21d36cu: goto label_21d36c;
        case 0x21d370u: goto label_21d370;
        case 0x21d374u: goto label_21d374;
        case 0x21d378u: goto label_21d378;
        case 0x21d37cu: goto label_21d37c;
        case 0x21d380u: goto label_21d380;
        case 0x21d384u: goto label_21d384;
        case 0x21d388u: goto label_21d388;
        case 0x21d38cu: goto label_21d38c;
        case 0x21d390u: goto label_21d390;
        case 0x21d394u: goto label_21d394;
        case 0x21d398u: goto label_21d398;
        case 0x21d39cu: goto label_21d39c;
        case 0x21d3a0u: goto label_21d3a0;
        case 0x21d3a4u: goto label_21d3a4;
        case 0x21d3a8u: goto label_21d3a8;
        case 0x21d3acu: goto label_21d3ac;
        case 0x21d3b0u: goto label_21d3b0;
        case 0x21d3b4u: goto label_21d3b4;
        case 0x21d3b8u: goto label_21d3b8;
        case 0x21d3bcu: goto label_21d3bc;
        case 0x21d3c0u: goto label_21d3c0;
        case 0x21d3c4u: goto label_21d3c4;
        case 0x21d3c8u: goto label_21d3c8;
        case 0x21d3ccu: goto label_21d3cc;
        case 0x21d3d0u: goto label_21d3d0;
        case 0x21d3d4u: goto label_21d3d4;
        case 0x21d3d8u: goto label_21d3d8;
        case 0x21d3dcu: goto label_21d3dc;
        case 0x21d3e0u: goto label_21d3e0;
        case 0x21d3e4u: goto label_21d3e4;
        case 0x21d3e8u: goto label_21d3e8;
        case 0x21d3ecu: goto label_21d3ec;
        case 0x21d3f0u: goto label_21d3f0;
        case 0x21d3f4u: goto label_21d3f4;
        case 0x21d3f8u: goto label_21d3f8;
        case 0x21d3fcu: goto label_21d3fc;
        case 0x21d400u: goto label_21d400;
        case 0x21d404u: goto label_21d404;
        case 0x21d408u: goto label_21d408;
        case 0x21d40cu: goto label_21d40c;
        case 0x21d410u: goto label_21d410;
        case 0x21d414u: goto label_21d414;
        case 0x21d418u: goto label_21d418;
        case 0x21d41cu: goto label_21d41c;
        case 0x21d420u: goto label_21d420;
        case 0x21d424u: goto label_21d424;
        case 0x21d428u: goto label_21d428;
        case 0x21d42cu: goto label_21d42c;
        case 0x21d430u: goto label_21d430;
        case 0x21d434u: goto label_21d434;
        case 0x21d438u: goto label_21d438;
        case 0x21d43cu: goto label_21d43c;
        case 0x21d440u: goto label_21d440;
        case 0x21d444u: goto label_21d444;
        case 0x21d448u: goto label_21d448;
        case 0x21d44cu: goto label_21d44c;
        default: break;
    }

    ctx->pc = 0x21d2a0u;

label_21d2a0:
    // 0x21d2a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x21d2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_21d2a4:
    // 0x21d2a4: 0x24060074  addiu       $a2, $zero, 0x74
    ctx->pc = 0x21d2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_21d2a8:
    // 0x21d2a8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x21d2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_21d2ac:
    // 0x21d2ac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x21d2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_21d2b0:
    // 0x21d2b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21d2b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21d2b4:
    // 0x21d2b4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x21d2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_21d2b8:
    // 0x21d2b8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x21d2b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21d2bc:
    // 0x21d2bc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x21d2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_21d2c0:
    // 0x21d2c0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x21d2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_21d2c4:
    // 0x21d2c4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x21d2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_21d2c8:
    // 0x21d2c8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x21d2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_21d2cc:
    // 0x21d2cc: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x21d2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_21d2d0:
    // 0x21d2d0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x21d2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_21d2d4:
    // 0x21d2d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21d2d8:
    // 0x21d2d8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x21d2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_21d2dc:
    // 0x21d2dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21d2e0:
    // 0x21d2e0: 0x40f809  jalr        $v0
label_21d2e4:
    if (ctx->pc == 0x21D2E4u) {
        ctx->pc = 0x21D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2E0u;
        // 0x21d2e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D2E8u;
        goto label_21d2e8;
    }
    ctx->pc = 0x21D2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21D2E8u);
        ctx->pc = 0x21D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2E0u;
        // 0x21d2e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D2E0u, 0x21D2E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21D2E8u;
label_21d2e8:
    // 0x21d2e8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x21d2e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21d2ec:
    // 0x21d2ec: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x21d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_21d2f0:
    // 0x21d2f0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x21d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_21d2f4:
    // 0x21d2f4: 0xae9501ac  sw          $s5, 0x1AC($s4)
    ctx->pc = 0x21d2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 428), GPR_U32(ctx, 21));
label_21d2f8:
    // 0x21d2f8: 0x2442d450  addiu       $v0, $v0, -0x2BB0
    ctx->pc = 0x21d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956112));
label_21d2fc:
    // 0x21d2fc: 0x2463d4a0  addiu       $v1, $v1, -0x2B60
    ctx->pc = 0x21d2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956192));
label_21d300:
    // 0x21d300: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x21d300u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_21d304:
    // 0x21d304: 0xaea30008  sw          $v1, 0x8($s5)
    ctx->pc = 0x21d304u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 3));
label_21d308:
    // 0x21d308: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
label_21d30c:
    if (ctx->pc == 0x21D30Cu) {
        ctx->pc = 0x21D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D308u;
        // 0x21d30c: 0xaea00070  sw          $zero, 0x70($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D310u;
        goto label_21d310;
    }
    ctx->pc = 0x21D308u;
    {
        const bool branch_taken_0x21d308 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D308u;
        // 0x21d30c: 0xaea00070  sw          $zero, 0x70($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d308) {
            ctx->pc = 0x21D3C0u;
            goto label_21d3c0;
        }
    }
    ctx->pc = 0x21D310u;
label_21d310:
    // 0x21d310: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x21d310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_21d314:
    // 0x21d314: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x21d314u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d318:
    // 0x21d318: 0x8e9300d8  lw          $s3, 0xD8($s4)
    ctx->pc = 0x21d318u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
label_21d31c:
    // 0x21d31c: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
label_21d320:
    if (ctx->pc == 0x21D320u) {
        ctx->pc = 0x21D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D31Cu;
        // 0x21d320: 0x26be0048  addiu       $fp, $s5, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D324u;
        goto label_21d324;
    }
    ctx->pc = 0x21D31Cu;
    {
        const bool branch_taken_0x21d31c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D31Cu;
        // 0x21d320: 0x26be0048  addiu       $fp, $s5, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d31c) {
            ctx->pc = 0x21D3A0u;
            goto label_21d3a0;
        }
    }
    ctx->pc = 0x21D324u;
label_21d324:
    // 0x21d324: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x21d324u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_21d328:
    // 0x21d328: 0x8e8200dc  lw          $v0, 0xDC($s4)
    ctx->pc = 0x21d328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
label_21d32c:
    // 0x21d32c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21d330:
    if (ctx->pc == 0x21D330u) {
        ctx->pc = 0x21D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D32Cu;
        // 0x21d330: 0x8e72000c  lw          $s2, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D334u;
        goto label_21d334;
    }
    ctx->pc = 0x21D32Cu;
    {
        const bool branch_taken_0x21d32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D32Cu;
        // 0x21d330: 0x8e72000c  lw          $s2, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d32c) {
            ctx->pc = 0x21D33Cu;
            goto label_21d33c;
        }
    }
    ctx->pc = 0x21D334u;
label_21d334:
    // 0x21d334: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x21d334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_21d338:
    // 0x21d338: 0x529021  addu        $s2, $v0, $s2
    ctx->pc = 0x21d338u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_21d33c:
    // 0x21d33c: 0x9e64001c  lwu         $a0, 0x1C($s3)
    ctx->pc = 0x21d33cu;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_21d340:
    // 0x21d340: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x21d340u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_21d344:
    // 0x21d344: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x21d344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_21d348:
    // 0x21d348: 0xc084868  jal         func_2121A0
label_21d34c:
    if (ctx->pc == 0x21D34Cu) {
        ctx->pc = 0x21D34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D348u;
        // 0x21d34c: 0x8e910004  lw          $s1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D350u;
        goto label_21d350;
    }
    ctx->pc = 0x21D348u;
    SET_GPR_U32(ctx, 31, 0x21D350u);
    ctx->pc = 0x21D34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D348u;
    // 0x21d34c: 0x8e910004  lw          $s1, 0x4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2121A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2121A0u, 0x21D348u, 0x21D350u)) {
        return;
    }
    ctx->pc = 0x21D350u;
label_21d350:
    // 0x21d350: 0x9e640020  lwu         $a0, 0x20($s3)
    ctx->pc = 0x21d350u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_21d354:
    // 0x21d354: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x21d354u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
label_21d358:
    // 0x21d358: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x21d358u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_21d35c:
    // 0x21d35c: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x21d35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_21d360:
    // 0x21d360: 0xc084868  jal         func_2121A0
label_21d364:
    if (ctx->pc == 0x21D364u) {
        ctx->pc = 0x21D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D360u;
        // 0x21d364: 0x26730054  addiu       $s3, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D368u;
        goto label_21d368;
    }
    ctx->pc = 0x21D360u;
    SET_GPR_U32(ctx, 31, 0x21D368u);
    ctx->pc = 0x21D364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D360u;
    // 0x21d364: 0x26730054  addiu       $s3, $s3, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2121A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2121A0u, 0x21D360u, 0x21D368u)) {
        return;
    }
    ctx->pc = 0x21D368u;
label_21d368:
    // 0x21d368: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x21d368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_21d36c:
    // 0x21d36c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21d36cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21d370:
    // 0x21d370: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x21d370u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
label_21d374:
    // 0x21d374: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x21d374u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
label_21d378:
    // 0x21d378: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x21d378u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21d37c:
    // 0x21d37c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21d37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21d380:
    // 0x21d380: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21d380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21d384:
    // 0x21d384: 0x60f809  jalr        $v1
label_21d388:
    if (ctx->pc == 0x21D388u) {
        ctx->pc = 0x21D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D384u;
        // 0x21d388: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D38Cu;
        goto label_21d38c;
    }
    ctx->pc = 0x21D384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21D38Cu);
        ctx->pc = 0x21D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D384u;
        // 0x21d388: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D384u, 0x21D38Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21D38Cu;
label_21d38c:
    // 0x21d38c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x21d38cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_21d390:
    // 0x21d390: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x21d390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_21d394:
    // 0x21d394: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x21d394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21d398:
    // 0x21d398: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_21d39c:
    if (ctx->pc == 0x21D39Cu) {
        ctx->pc = 0x21D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D398u;
        // 0x21d39c: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D3A0u;
        goto label_21d3a0;
    }
    ctx->pc = 0x21D398u;
    {
        const bool branch_taken_0x21d398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D398u;
        // 0x21d39c: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d398) {
            ctx->pc = 0x21D328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d328;
        }
    }
    ctx->pc = 0x21D3A0u;
label_21d3a0:
    // 0x21d3a0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x21d3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_21d3a4:
    // 0x21d3a4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x21d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_21d3a8:
    // 0x21d3a8: 0x2463c450  addiu       $v1, $v1, -0x3BB0
    ctx->pc = 0x21d3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952016));
label_21d3ac:
    // 0x21d3ac: 0x2442c6c8  addiu       $v0, $v0, -0x3938
    ctx->pc = 0x21d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952648));
label_21d3b0:
    // 0x21d3b0: 0xaebe0010  sw          $fp, 0x10($s5)
    ctx->pc = 0x21d3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 30));
label_21d3b4:
    // 0x21d3b4: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x21d3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
label_21d3b8:
    // 0x21d3b8: 0x10000018  b           . + 4 + (0x18 << 2)
label_21d3bc:
    if (ctx->pc == 0x21D3BCu) {
        ctx->pc = 0x21D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3B8u;
        // 0x21d3bc: 0xaea2000c  sw          $v0, 0xC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D3C0u;
        goto label_21d3c0;
    }
    ctx->pc = 0x21D3B8u;
    {
        const bool branch_taken_0x21d3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3B8u;
        // 0x21d3bc: 0xaea2000c  sw          $v0, 0xC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d3b8) {
            ctx->pc = 0x21D41Cu;
            goto label_21d41c;
        }
    }
    ctx->pc = 0x21D3C0u;
label_21d3c0:
    // 0x21d3c0: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x21d3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_21d3c4:
    // 0x21d3c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21d3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21d3c8:
    // 0x21d3c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21d3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21d3cc:
    // 0x21d3cc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x21d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_21d3d0:
    // 0x21d3d0: 0x40f809  jalr        $v0
label_21d3d4:
    if (ctx->pc == 0x21D3D4u) {
        ctx->pc = 0x21D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3D0u;
        // 0x21d3d4: 0x24060500  addiu       $a2, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D3D8u;
        goto label_21d3d8;
    }
    ctx->pc = 0x21D3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21D3D8u);
        ctx->pc = 0x21D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3D0u;
        // 0x21d3d4: 0x24060500  addiu       $a2, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D3D0u, 0x21D3D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21D3D8u;
label_21d3d8:
    // 0x21d3d8: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x21d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
label_21d3dc:
    // 0x21d3dc: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x21d3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_21d3e0:
    // 0x21d3e0: 0x26a30044  addiu       $v1, $s5, 0x44
    ctx->pc = 0x21d3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 68));
label_21d3e4:
    // 0x21d3e4: 0x0  nop
    ctx->pc = 0x21d3e4u;
    // NOP
label_21d3e8:
    // 0x21d3e8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x21d3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_21d3ec:
    // 0x21d3ec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x21d3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_21d3f0:
    // 0x21d3f0: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x21d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_21d3f4:
    // 0x21d3f4: 0x0  nop
    ctx->pc = 0x21d3f4u;
    // NOP
label_21d3f8:
    // 0x21d3f8: 0x481fffb  bgez        $a0, . + 4 + (-0x5 << 2)
label_21d3fc:
    if (ctx->pc == 0x21D3FCu) {
        ctx->pc = 0x21D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3F8u;
        // 0x21d3fc: 0x2442ff80  addiu       $v0, $v0, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D400u;
        goto label_21d400;
    }
    ctx->pc = 0x21D3F8u;
    {
        const bool branch_taken_0x21d3f8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x21D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3F8u;
        // 0x21d3fc: 0x2442ff80  addiu       $v0, $v0, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d3f8) {
            ctx->pc = 0x21D3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d3e8;
        }
    }
    ctx->pc = 0x21D400u;
label_21d400:
    // 0x21d400: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x21d400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_21d404:
    // 0x21d404: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x21d404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_21d408:
    // 0x21d408: 0x2463d510  addiu       $v1, $v1, -0x2AF0
    ctx->pc = 0x21d408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956304));
label_21d40c:
    // 0x21d40c: 0x2442c120  addiu       $v0, $v0, -0x3EE0
    ctx->pc = 0x21d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951200));
label_21d410:
    // 0x21d410: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x21d410u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
label_21d414:
    // 0x21d414: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x21d414u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
label_21d418:
    // 0x21d418: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x21d418u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
label_21d41c:
    // 0x21d41c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x21d41cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_21d420:
    // 0x21d420: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x21d420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21d424:
    // 0x21d424: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x21d424u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21d428:
    // 0x21d428: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x21d428u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21d42c:
    // 0x21d42c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x21d42cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21d430:
    // 0x21d430: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x21d430u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21d434:
    // 0x21d434: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x21d434u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21d438:
    // 0x21d438: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x21d438u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21d43c:
    // 0x21d43c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x21d43cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21d440:
    // 0x21d440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21d444:
    // 0x21d444: 0x3e00008  jr          $ra
label_21d448:
    if (ctx->pc == 0x21D448u) {
        ctx->pc = 0x21D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D444u;
        // 0x21d448: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21D44Cu;
        goto label_21d44c;
    }
    ctx->pc = 0x21D444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D444u;
        // 0x21d448: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D44Cu;
label_21d44c:
    // 0x21d44c: 0x0  nop
    ctx->pc = 0x21d44cu;
    // NOP
    ctx->pc = 0x21d450u;
}
