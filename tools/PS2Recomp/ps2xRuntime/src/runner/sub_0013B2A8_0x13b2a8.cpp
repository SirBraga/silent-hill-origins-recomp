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

// Function: sub_0013B2A8
// Address: 0x13b2a8 - 0x13b3b0
void sub_0013B2A8_0x13b2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B2A8_0x13b2a8");
#endif

    switch (ctx->pc) {
        case 0x13b2a8u: goto label_13b2a8;
        case 0x13b2acu: goto label_13b2ac;
        case 0x13b2b0u: goto label_13b2b0;
        case 0x13b2b4u: goto label_13b2b4;
        case 0x13b2b8u: goto label_13b2b8;
        case 0x13b2bcu: goto label_13b2bc;
        case 0x13b2c0u: goto label_13b2c0;
        case 0x13b2c4u: goto label_13b2c4;
        case 0x13b2c8u: goto label_13b2c8;
        case 0x13b2ccu: goto label_13b2cc;
        case 0x13b2d0u: goto label_13b2d0;
        case 0x13b2d4u: goto label_13b2d4;
        case 0x13b2d8u: goto label_13b2d8;
        case 0x13b2dcu: goto label_13b2dc;
        case 0x13b2e0u: goto label_13b2e0;
        case 0x13b2e4u: goto label_13b2e4;
        case 0x13b2e8u: goto label_13b2e8;
        case 0x13b2ecu: goto label_13b2ec;
        case 0x13b2f0u: goto label_13b2f0;
        case 0x13b2f4u: goto label_13b2f4;
        case 0x13b2f8u: goto label_13b2f8;
        case 0x13b2fcu: goto label_13b2fc;
        case 0x13b300u: goto label_13b300;
        case 0x13b304u: goto label_13b304;
        case 0x13b308u: goto label_13b308;
        case 0x13b30cu: goto label_13b30c;
        case 0x13b310u: goto label_13b310;
        case 0x13b314u: goto label_13b314;
        case 0x13b318u: goto label_13b318;
        case 0x13b31cu: goto label_13b31c;
        case 0x13b320u: goto label_13b320;
        case 0x13b324u: goto label_13b324;
        case 0x13b328u: goto label_13b328;
        case 0x13b32cu: goto label_13b32c;
        case 0x13b330u: goto label_13b330;
        case 0x13b334u: goto label_13b334;
        case 0x13b338u: goto label_13b338;
        case 0x13b33cu: goto label_13b33c;
        case 0x13b340u: goto label_13b340;
        case 0x13b344u: goto label_13b344;
        case 0x13b348u: goto label_13b348;
        case 0x13b34cu: goto label_13b34c;
        case 0x13b350u: goto label_13b350;
        case 0x13b354u: goto label_13b354;
        case 0x13b358u: goto label_13b358;
        case 0x13b35cu: goto label_13b35c;
        case 0x13b360u: goto label_13b360;
        case 0x13b364u: goto label_13b364;
        case 0x13b368u: goto label_13b368;
        case 0x13b36cu: goto label_13b36c;
        case 0x13b370u: goto label_13b370;
        case 0x13b374u: goto label_13b374;
        case 0x13b378u: goto label_13b378;
        case 0x13b37cu: goto label_13b37c;
        case 0x13b380u: goto label_13b380;
        case 0x13b384u: goto label_13b384;
        case 0x13b388u: goto label_13b388;
        case 0x13b38cu: goto label_13b38c;
        case 0x13b390u: goto label_13b390;
        case 0x13b394u: goto label_13b394;
        case 0x13b398u: goto label_13b398;
        case 0x13b39cu: goto label_13b39c;
        case 0x13b3a0u: goto label_13b3a0;
        case 0x13b3a4u: goto label_13b3a4;
        case 0x13b3a8u: goto label_13b3a8;
        case 0x13b3acu: goto label_13b3ac;
        default: break;
    }

    ctx->pc = 0x13b2a8u;

label_13b2a8:
    // 0x13b2a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x13b2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_13b2ac:
    // 0x13b2ac: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x13b2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_13b2b0:
    // 0x13b2b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13b2b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13b2b4:
    // 0x13b2b4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x13b2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_13b2b8:
    // 0x13b2b8: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x13b2b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_13b2bc:
    // 0x13b2bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13b2bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13b2c0:
    // 0x13b2c0: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x13b2c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_13b2c4:
    // 0x13b2c4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13b2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_13b2c8:
    // 0x13b2c8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x13b2c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_13b2cc:
    // 0x13b2cc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x13b2ccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_13b2d0:
    // 0x13b2d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13b2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_13b2d4:
    // 0x13b2d4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x13b2d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_13b2d8:
    // 0x13b2d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13b2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13b2dc:
    // 0x13b2dc: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x13b2dcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
label_13b2e0:
    // 0x13b2e0: 0x24a5edb0  addiu       $a1, $a1, -0x1250
    ctx->pc = 0x13b2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962608));
label_13b2e4:
    // 0x13b2e4: 0xc065c58  jal         func_197160
label_13b2e8:
    if (ctx->pc == 0x13B2E8u) {
        ctx->pc = 0x13B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B2E4u;
        // 0x13b2e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B2ECu;
        goto label_13b2ec;
    }
    ctx->pc = 0x13B2E4u;
    SET_GPR_U32(ctx, 31, 0x13B2ECu);
    ctx->pc = 0x13B2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B2E4u;
    // 0x13b2e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x13B2E4u, 0x13B2ECu)) {
        return;
    }
    ctx->pc = 0x13B2ECu;
label_13b2ec:
    // 0x13b2ec: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_13b2f0:
    if (ctx->pc == 0x13B2F0u) {
        ctx->pc = 0x13B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B2ECu;
        // 0x13b2f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B2F4u;
        goto label_13b2f4;
    }
    ctx->pc = 0x13B2ECu;
    {
        const bool branch_taken_0x13b2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B2ECu;
        // 0x13b2f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b2ec) {
            ctx->pc = 0x13B374u;
            goto label_13b374;
        }
    }
    ctx->pc = 0x13B2F4u;
label_13b2f4:
    // 0x13b2f4: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x13b2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_13b2f8:
    // 0x13b2f8: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x13b2f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_13b2fc:
    // 0x13b2fc: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x13b2fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_13b300:
    // 0x13b300: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x13b300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_13b304:
    // 0x13b304: 0x40f809  jalr        $v0
label_13b308:
    if (ctx->pc == 0x13B308u) {
        ctx->pc = 0x13B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B304u;
        // 0x13b308: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B30Cu;
        goto label_13b30c;
    }
    ctx->pc = 0x13B304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13B30Cu);
        ctx->pc = 0x13B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B304u;
        // 0x13b308: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B304u, 0x13B30Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13B30Cu;
label_13b30c:
    // 0x13b30c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x13b30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_13b310:
    // 0x13b310: 0x3c090014  lui         $t1, 0x14
    ctx->pc = 0x13b310u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)20 << 16));
label_13b314:
    // 0x13b314: 0x8e252da8  lw          $a1, 0x2DA8($s1)
    ctx->pc = 0x13b314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11688)));
label_13b318:
    // 0x13b318: 0x2529a910  addiu       $t1, $t1, -0x56F0
    ctx->pc = 0x13b318u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294945040));
label_13b31c:
    // 0x13b31c: 0x8e26004c  lw          $a2, 0x4C($s1)
    ctx->pc = 0x13b31cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_13b320:
    // 0x13b320: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x13b320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
label_13b324:
    // 0x13b324: 0x8c728668  lw          $s2, -0x7998($v1)
    ctx->pc = 0x13b324u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936168)));
label_13b328:
    // 0x13b328: 0x2442b220  addiu       $v0, $v0, -0x4DE0
    ctx->pc = 0x13b328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947360));
label_13b32c:
    // 0x13b32c: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x13b32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
label_13b330:
    // 0x13b330: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x13b330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13b334:
    // 0x13b334: 0xafb0001c  sw          $s0, 0x1C($sp)
    ctx->pc = 0x13b334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 16));
label_13b338:
    // 0x13b338: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13b338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13b33c:
    // 0x13b33c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x13b33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_13b340:
    // 0x13b340: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13b340u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13b344:
    // 0x13b344: 0xc0596ae  jal         func_165AB8
label_13b348:
    if (ctx->pc == 0x13B348u) {
        ctx->pc = 0x13B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B344u;
        // 0x13b348: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B34Cu;
        goto label_13b34c;
    }
    ctx->pc = 0x13B344u;
    SET_GPR_U32(ctx, 31, 0x13B34Cu);
    ctx->pc = 0x13B348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B344u;
    // 0x13b348: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165AB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165AB8u, 0x13B344u, 0x13B34Cu)) {
        return;
    }
    ctx->pc = 0x13B34Cu;
label_13b34c:
    // 0x13b34c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13b34cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13b350:
    // 0x13b350: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x13b350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_13b354:
    // 0x13b354: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_13b358:
    if (ctx->pc == 0x13B358u) {
        ctx->pc = 0x13B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B354u;
        // 0x13b358: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B35Cu;
        goto label_13b35c;
    }
    ctx->pc = 0x13B354u;
    {
        const bool branch_taken_0x13b354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B354u;
        // 0x13b358: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b354) {
            ctx->pc = 0x13B38Cu;
            goto label_13b38c;
        }
    }
    ctx->pc = 0x13B35Cu;
label_13b35c:
    // 0x13b35c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x13b35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13b360:
    // 0x13b360: 0xc0595c6  jal         func_165718
label_13b364:
    if (ctx->pc == 0x13B364u) {
        ctx->pc = 0x13B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B360u;
        // 0x13b364: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B368u;
        goto label_13b368;
    }
    ctx->pc = 0x13B360u;
    SET_GPR_U32(ctx, 31, 0x13B368u);
    ctx->pc = 0x13B364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B360u;
    // 0x13b364: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165718u, 0x13B360u, 0x13B368u)) {
        return;
    }
    ctx->pc = 0x13B368u;
label_13b368:
    // 0x13b368: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13b368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13b36c:
    // 0x13b36c: 0x10000007  b           . + 4 + (0x7 << 2)
label_13b370:
    if (ctx->pc == 0x13B370u) {
        ctx->pc = 0x13B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B36Cu;
        // 0x13b370: 0xae222dac  sw          $v0, 0x2DAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B374u;
        goto label_13b374;
    }
    ctx->pc = 0x13B36Cu;
    {
        const bool branch_taken_0x13b36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B36Cu;
        // 0x13b370: 0xae222dac  sw          $v0, 0x2DAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b36c) {
            ctx->pc = 0x13B38Cu;
            goto label_13b38c;
        }
    }
    ctx->pc = 0x13B374u;
label_13b374:
    // 0x13b374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13b374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13b378:
    // 0x13b378: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13b378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13b37c:
    // 0x13b37c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13b37cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_13b380:
    // 0x13b380: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x13b380u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_13b384:
    // 0x13b384: 0xc04adea  jal         func_12B7A8
label_13b388:
    if (ctx->pc == 0x13B388u) {
        ctx->pc = 0x13B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B384u;
        // 0x13b388: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B38Cu;
        goto label_13b38c;
    }
    ctx->pc = 0x13B384u;
    SET_GPR_U32(ctx, 31, 0x13B38Cu);
    ctx->pc = 0x13B388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B384u;
    // 0x13b388: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B7A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x12B7A8u, 0x13B384u, 0x13B38Cu)) {
        return;
    }
    ctx->pc = 0x13B38Cu;
label_13b38c:
    // 0x13b38c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x13b38cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13b390:
    // 0x13b390: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x13b390u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_13b394:
    // 0x13b394: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13b394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_13b398:
    // 0x13b398: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13b398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13b39c:
    // 0x13b39c: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x13b39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_13b3a0:
    // 0x13b3a0: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x13b3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_13b3a4:
    // 0x13b3a4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x13b3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13b3a8:
    // 0x13b3a8: 0x3e00008  jr          $ra
label_13b3ac:
    if (ctx->pc == 0x13B3ACu) {
        ctx->pc = 0x13B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B3A8u;
        // 0x13b3ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B3B0u;
        goto label_fallthrough_0x13b3a8;
    }
    ctx->pc = 0x13B3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B3A8u;
        // 0x13b3ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13b3a8:
    ctx->pc = 0x13B3B0u;
}
