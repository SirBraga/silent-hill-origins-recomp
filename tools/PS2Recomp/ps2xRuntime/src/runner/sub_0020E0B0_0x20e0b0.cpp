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

// Function: sub_0020E0B0
// Address: 0x20e0b0 - 0x20e2e8
void sub_0020E0B0_0x20e0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E0B0_0x20e0b0");
#endif

    switch (ctx->pc) {
        case 0x20e0b0u: goto label_20e0b0;
        case 0x20e0b4u: goto label_20e0b4;
        case 0x20e0b8u: goto label_20e0b8;
        case 0x20e0bcu: goto label_20e0bc;
        case 0x20e0c0u: goto label_20e0c0;
        case 0x20e0c4u: goto label_20e0c4;
        case 0x20e0c8u: goto label_20e0c8;
        case 0x20e0ccu: goto label_20e0cc;
        case 0x20e0d0u: goto label_20e0d0;
        case 0x20e0d4u: goto label_20e0d4;
        case 0x20e0d8u: goto label_20e0d8;
        case 0x20e0dcu: goto label_20e0dc;
        case 0x20e0e0u: goto label_20e0e0;
        case 0x20e0e4u: goto label_20e0e4;
        case 0x20e0e8u: goto label_20e0e8;
        case 0x20e0ecu: goto label_20e0ec;
        case 0x20e0f0u: goto label_20e0f0;
        case 0x20e0f4u: goto label_20e0f4;
        case 0x20e0f8u: goto label_20e0f8;
        case 0x20e0fcu: goto label_20e0fc;
        case 0x20e100u: goto label_20e100;
        case 0x20e104u: goto label_20e104;
        case 0x20e108u: goto label_20e108;
        case 0x20e10cu: goto label_20e10c;
        case 0x20e110u: goto label_20e110;
        case 0x20e114u: goto label_20e114;
        case 0x20e118u: goto label_20e118;
        case 0x20e11cu: goto label_20e11c;
        case 0x20e120u: goto label_20e120;
        case 0x20e124u: goto label_20e124;
        case 0x20e128u: goto label_20e128;
        case 0x20e12cu: goto label_20e12c;
        case 0x20e130u: goto label_20e130;
        case 0x20e134u: goto label_20e134;
        case 0x20e138u: goto label_20e138;
        case 0x20e13cu: goto label_20e13c;
        case 0x20e140u: goto label_20e140;
        case 0x20e144u: goto label_20e144;
        case 0x20e148u: goto label_20e148;
        case 0x20e14cu: goto label_20e14c;
        case 0x20e150u: goto label_20e150;
        case 0x20e154u: goto label_20e154;
        case 0x20e158u: goto label_20e158;
        case 0x20e15cu: goto label_20e15c;
        case 0x20e160u: goto label_20e160;
        case 0x20e164u: goto label_20e164;
        case 0x20e168u: goto label_20e168;
        case 0x20e16cu: goto label_20e16c;
        case 0x20e170u: goto label_20e170;
        case 0x20e174u: goto label_20e174;
        case 0x20e178u: goto label_20e178;
        case 0x20e17cu: goto label_20e17c;
        case 0x20e180u: goto label_20e180;
        case 0x20e184u: goto label_20e184;
        case 0x20e188u: goto label_20e188;
        case 0x20e18cu: goto label_20e18c;
        case 0x20e190u: goto label_20e190;
        case 0x20e194u: goto label_20e194;
        case 0x20e198u: goto label_20e198;
        case 0x20e19cu: goto label_20e19c;
        case 0x20e1a0u: goto label_20e1a0;
        case 0x20e1a4u: goto label_20e1a4;
        case 0x20e1a8u: goto label_20e1a8;
        case 0x20e1acu: goto label_20e1ac;
        case 0x20e1b0u: goto label_20e1b0;
        case 0x20e1b4u: goto label_20e1b4;
        case 0x20e1b8u: goto label_20e1b8;
        case 0x20e1bcu: goto label_20e1bc;
        case 0x20e1c0u: goto label_20e1c0;
        case 0x20e1c4u: goto label_20e1c4;
        case 0x20e1c8u: goto label_20e1c8;
        case 0x20e1ccu: goto label_20e1cc;
        case 0x20e1d0u: goto label_20e1d0;
        case 0x20e1d4u: goto label_20e1d4;
        case 0x20e1d8u: goto label_20e1d8;
        case 0x20e1dcu: goto label_20e1dc;
        case 0x20e1e0u: goto label_20e1e0;
        case 0x20e1e4u: goto label_20e1e4;
        case 0x20e1e8u: goto label_20e1e8;
        case 0x20e1ecu: goto label_20e1ec;
        case 0x20e1f0u: goto label_20e1f0;
        case 0x20e1f4u: goto label_20e1f4;
        case 0x20e1f8u: goto label_20e1f8;
        case 0x20e1fcu: goto label_20e1fc;
        case 0x20e200u: goto label_20e200;
        case 0x20e204u: goto label_20e204;
        case 0x20e208u: goto label_20e208;
        case 0x20e20cu: goto label_20e20c;
        case 0x20e210u: goto label_20e210;
        case 0x20e214u: goto label_20e214;
        case 0x20e218u: goto label_20e218;
        case 0x20e21cu: goto label_20e21c;
        case 0x20e220u: goto label_20e220;
        case 0x20e224u: goto label_20e224;
        case 0x20e228u: goto label_20e228;
        case 0x20e22cu: goto label_20e22c;
        case 0x20e230u: goto label_20e230;
        case 0x20e234u: goto label_20e234;
        case 0x20e238u: goto label_20e238;
        case 0x20e23cu: goto label_20e23c;
        case 0x20e240u: goto label_20e240;
        case 0x20e244u: goto label_20e244;
        case 0x20e248u: goto label_20e248;
        case 0x20e24cu: goto label_20e24c;
        case 0x20e250u: goto label_20e250;
        case 0x20e254u: goto label_20e254;
        case 0x20e258u: goto label_20e258;
        case 0x20e25cu: goto label_20e25c;
        case 0x20e260u: goto label_20e260;
        case 0x20e264u: goto label_20e264;
        case 0x20e268u: goto label_20e268;
        case 0x20e26cu: goto label_20e26c;
        case 0x20e270u: goto label_20e270;
        case 0x20e274u: goto label_20e274;
        case 0x20e278u: goto label_20e278;
        case 0x20e27cu: goto label_20e27c;
        case 0x20e280u: goto label_20e280;
        case 0x20e284u: goto label_20e284;
        case 0x20e288u: goto label_20e288;
        case 0x20e28cu: goto label_20e28c;
        case 0x20e290u: goto label_20e290;
        case 0x20e294u: goto label_20e294;
        case 0x20e298u: goto label_20e298;
        case 0x20e29cu: goto label_20e29c;
        case 0x20e2a0u: goto label_20e2a0;
        case 0x20e2a4u: goto label_20e2a4;
        case 0x20e2a8u: goto label_20e2a8;
        case 0x20e2acu: goto label_20e2ac;
        case 0x20e2b0u: goto label_20e2b0;
        case 0x20e2b4u: goto label_20e2b4;
        case 0x20e2b8u: goto label_20e2b8;
        case 0x20e2bcu: goto label_20e2bc;
        case 0x20e2c0u: goto label_20e2c0;
        case 0x20e2c4u: goto label_20e2c4;
        case 0x20e2c8u: goto label_20e2c8;
        case 0x20e2ccu: goto label_20e2cc;
        case 0x20e2d0u: goto label_20e2d0;
        case 0x20e2d4u: goto label_20e2d4;
        case 0x20e2d8u: goto label_20e2d8;
        case 0x20e2dcu: goto label_20e2dc;
        case 0x20e2e0u: goto label_20e2e0;
        case 0x20e2e4u: goto label_20e2e4;
        default: break;
    }

    ctx->pc = 0x20e0b0u;

label_20e0b0:
    // 0x20e0b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x20e0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_20e0b4:
    // 0x20e0b4: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x20e0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_20e0b8:
    // 0x20e0b8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x20e0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_20e0bc:
    // 0x20e0bc: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x20e0bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20e0c0:
    // 0x20e0c0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x20e0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_20e0c4:
    // 0x20e0c4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x20e0c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20e0c8:
    // 0x20e0c8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x20e0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_20e0cc:
    // 0x20e0cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20e0ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20e0d0:
    // 0x20e0d0: 0x1e283c  dsll32      $a1, $fp, 0
    ctx->pc = 0x20e0d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) << (32 + 0));
label_20e0d4:
    // 0x20e0d4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x20e0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_20e0d8:
    // 0x20e0d8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x20e0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_20e0dc:
    // 0x20e0dc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x20e0dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20e0e0:
    // 0x20e0e0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x20e0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_20e0e4:
    // 0x20e0e4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x20e0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_20e0e8:
    // 0x20e0e8: 0x3c043b9a  lui         $a0, 0x3B9A
    ctx->pc = 0x20e0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15258 << 16));
label_20e0ec:
    // 0x20e0ec: 0x3484c9f0  ori         $a0, $a0, 0xC9F0
    ctx->pc = 0x20e0ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51696);
label_20e0f0:
    // 0x20e0f0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20e0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_20e0f4:
    // 0x20e0f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20e0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20e0f8:
    // 0x20e0f8: 0xc0ca2b8  jal         func_328AE0
label_20e0fc:
    if (ctx->pc == 0x20E0FCu) {
        ctx->pc = 0x20E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E0F8u;
        // 0x20e0fc: 0x52e7a  dsrl        $a1, $a1, 25 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 25);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E100u;
        goto label_20e100;
    }
    ctx->pc = 0x20E0F8u;
    SET_GPR_U32(ctx, 31, 0x20E100u);
    ctx->pc = 0x20E0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E0F8u;
    // 0x20e0fc: 0x52e7a  dsrl        $a1, $a1, 25 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 25);
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328AE0u, 0x20E0F8u, 0x20E100u)) {
        return;
    }
    ctx->pc = 0x20E100u;
label_20e100:
    // 0x20e100: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20e100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20e104:
    // 0x20e104: 0x1e000008  bgtz        $s0, . + 4 + (0x8 << 2)
label_20e108:
    if (ctx->pc == 0x20E108u) {
        ctx->pc = 0x20E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E104u;
        // 0x20e108: 0x8e320004  lw          $s2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E10Cu;
        goto label_20e10c;
    }
    ctx->pc = 0x20E104u;
    {
        const bool branch_taken_0x20e104 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x20E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E104u;
        // 0x20e108: 0x8e320004  lw          $s2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e104) {
            ctx->pc = 0x20E128u;
            goto label_20e128;
        }
    }
    ctx->pc = 0x20E10Cu;
label_20e10c:
    // 0x20e10c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x20e10cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20e110:
    // 0x20e110: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x20e110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_20e114:
    // 0x20e114: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20e114u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20e118:
    // 0x20e118: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20e118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20e11c:
    // 0x20e11c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20e11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20e120:
    // 0x20e120: 0x60f809  jalr        $v1
label_20e124:
    if (ctx->pc == 0x20E124u) {
        ctx->pc = 0x20E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E120u;
        // 0x20e124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E128u;
        goto label_20e128;
    }
    ctx->pc = 0x20E120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20E128u);
        ctx->pc = 0x20E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E120u;
        // 0x20e124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E120u, 0x20E128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20E128u;
label_20e128:
    // 0x20e128: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x20e128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
label_20e12c:
    // 0x20e12c: 0x10a03c  dsll32      $s4, $s0, 0
    ctx->pc = 0x20e12cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) << (32 + 0));
label_20e130:
    // 0x20e130: 0x14a03f  dsra32      $s4, $s4, 0
    ctx->pc = 0x20e130u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 0));
label_20e134:
    // 0x20e134: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x20e134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_20e138:
    // 0x20e138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20e138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20e13c:
    // 0x20e13c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x20e13cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20e140:
    // 0x20e140: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x20e140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_20e144:
    // 0x20e144: 0x2c2a00a  movz        $s4, $s6, $v0
    ctx->pc = 0x20e144u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 22));
label_20e148:
    // 0x20e148: 0x163080  sll         $a2, $s6, 2
    ctx->pc = 0x20e148u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_20e14c:
    // 0x20e14c: 0xae540060  sw          $s4, 0x60($s2)
    ctx->pc = 0x20e14cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 20));
label_20e150:
    // 0x20e150: 0xc08371a  jal         func_20DC68
label_20e154:
    if (ctx->pc == 0x20E154u) {
        ctx->pc = 0x20E154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E150u;
        // 0x20e154: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E158u;
        goto label_20e158;
    }
    ctx->pc = 0x20E150u;
    SET_GPR_U32(ctx, 31, 0x20E158u);
    ctx->pc = 0x20E154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E150u;
    // 0x20e154: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DC68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20DC68u, 0x20E150u, 0x20E158u)) {
        return;
    }
    ctx->pc = 0x20E158u;
label_20e158:
    // 0x20e158: 0x12c00056  beqz        $s6, . + 4 + (0x56 << 2)
label_20e15c:
    if (ctx->pc == 0x20E15Cu) {
        ctx->pc = 0x20E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E158u;
        // 0x20e15c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E160u;
        goto label_20e160;
    }
    ctx->pc = 0x20E158u;
    {
        const bool branch_taken_0x20e158 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E158u;
        // 0x20e15c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e158) {
            ctx->pc = 0x20E2B4u;
            goto label_20e2b4;
        }
    }
    ctx->pc = 0x20E160u;
label_20e160:
    // 0x20e160: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x20e160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_20e164:
    // 0x20e164: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x20e164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_20e168:
    // 0x20e168: 0x2d32023  subu        $a0, $s6, $s3
    ctx->pc = 0x20e168u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_20e16c:
    // 0x20e16c: 0x0  nop
    ctx->pc = 0x20e16cu;
    // NOP
label_20e170:
    // 0x20e170: 0x3c033b9a  lui         $v1, 0x3B9A
    ctx->pc = 0x20e170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15258 << 16));
label_20e174:
    // 0x20e174: 0x284102b  sltu        $v0, $s4, $a0
    ctx->pc = 0x20e174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_20e178:
    // 0x20e178: 0x3463c9f0  ori         $v1, $v1, 0xC9F0
    ctx->pc = 0x20e178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51696);
label_20e17c:
    // 0x20e17c: 0x82a00a  movz        $s4, $a0, $v0
    ctx->pc = 0x20e17cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4));
label_20e180:
    // 0x20e180: 0x29e1018  mult        $v0, $s4, $fp
    ctx->pc = 0x20e180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20e184:
    // 0x20e184: 0x291c0  sll         $s2, $v0, 7
    ctx->pc = 0x20e184u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_20e188:
    // 0x20e188: 0x72182b  sltu        $v1, $v1, $s2
    ctx->pc = 0x20e188u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_20e18c:
    // 0x20e18c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_20e190:
    if (ctx->pc == 0x20E190u) {
        ctx->pc = 0x20E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E18Cu;
        // 0x20e190: 0x8e350004  lw          $s5, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E194u;
        goto label_20e194;
    }
    ctx->pc = 0x20E18Cu;
    {
        const bool branch_taken_0x20e18c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E18Cu;
        // 0x20e190: 0x8e350004  lw          $s5, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e18c) {
            ctx->pc = 0x20E1BCu;
            goto label_20e1bc;
        }
    }
    ctx->pc = 0x20E194u;
label_20e194:
    // 0x20e194: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20e194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20e198:
    // 0x20e198: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x20e198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_20e19c:
    // 0x20e19c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x20e19cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20e1a0:
    // 0x20e1a0: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x20e1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
label_20e1a4:
    // 0x20e1a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20e1a8:
    // 0x20e1a8: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x20e1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
label_20e1ac:
    // 0x20e1ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20e1b0:
    // 0x20e1b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20e1b4:
    // 0x20e1b4: 0x40f809  jalr        $v0
label_20e1b8:
    if (ctx->pc == 0x20E1B8u) {
        ctx->pc = 0x20E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E1B4u;
        // 0x20e1b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E1BCu;
        goto label_20e1bc;
    }
    ctx->pc = 0x20E1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20E1BCu);
        ctx->pc = 0x20E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E1B4u;
        // 0x20e1b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E1B4u, 0x20E1BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20E1BCu;
label_20e1bc:
    // 0x20e1bc: 0x32430007  andi        $v1, $s2, 0x7
    ctx->pc = 0x20e1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
label_20e1c0:
    // 0x20e1c0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_20e1c4:
    if (ctx->pc == 0x20E1C4u) {
        ctx->pc = 0x20E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E1C0u;
        // 0x20e1c4: 0x26420008  addiu       $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E1C8u;
        goto label_20e1c8;
    }
    ctx->pc = 0x20E1C0u;
    {
        const bool branch_taken_0x20e1c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E1C0u;
        // 0x20e1c4: 0x26420008  addiu       $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e1c0) {
            ctx->pc = 0x20E1CCu;
            goto label_20e1cc;
        }
    }
    ctx->pc = 0x20E1C8u;
label_20e1c8:
    // 0x20e1c8: 0x439023  subu        $s2, $v0, $v1
    ctx->pc = 0x20e1c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20e1cc:
    // 0x20e1cc: 0x2ee20002  sltiu       $v0, $s7, 0x2
    ctx->pc = 0x20e1ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_20e1d0:
    // 0x20e1d0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_20e1d4:
    if (ctx->pc == 0x20E1D4u) {
        ctx->pc = 0x20E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E1D0u;
        // 0x20e1d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E1D8u;
        goto label_20e1d8;
    }
    ctx->pc = 0x20E1D0u;
    {
        const bool branch_taken_0x20e1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E1D0u;
        // 0x20e1d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e1d0) {
            ctx->pc = 0x20E200u;
            goto label_20e200;
        }
    }
    ctx->pc = 0x20E1D8u;
label_20e1d8:
    // 0x20e1d8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x20e1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20e1dc:
    // 0x20e1dc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x20e1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_20e1e0:
    // 0x20e1e0: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20e1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20e1e4:
    // 0x20e1e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20e1e8:
    // 0x20e1e8: 0xac570018  sw          $s7, 0x18($v0)
    ctx->pc = 0x20e1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 23));
label_20e1ec:
    // 0x20e1ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20e1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20e1f0:
    // 0x20e1f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20e1f4:
    // 0x20e1f4: 0x40f809  jalr        $v0
label_20e1f8:
    if (ctx->pc == 0x20E1F8u) {
        ctx->pc = 0x20E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E1F4u;
        // 0x20e1f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E1FCu;
        goto label_20e1fc;
    }
    ctx->pc = 0x20E1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20E1FCu);
        ctx->pc = 0x20E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E1F4u;
        // 0x20e1f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E1F4u, 0x20E1FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20E1FCu;
label_20e1fc:
    // 0x20e1fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20e1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20e200:
    // 0x20e200: 0xc083d0a  jal         func_20F428
label_20e204:
    if (ctx->pc == 0x20E204u) {
        ctx->pc = 0x20E204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E200u;
        // 0x20e204: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E208u;
        goto label_20e208;
    }
    ctx->pc = 0x20E200u;
    SET_GPR_U32(ctx, 31, 0x20E208u);
    ctx->pc = 0x20E204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E200u;
    // 0x20e204: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20F428u, 0x20E200u, 0x20E208u)) {
        return;
    }
    ctx->pc = 0x20E208u;
label_20e208:
    // 0x20e208: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20e208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20e20c:
    // 0x20e20c: 0x5600000c  bnel        $s0, $zero, . + 4 + (0xC << 2)
label_20e210:
    if (ctx->pc == 0x20E210u) {
        ctx->pc = 0x20E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E20Cu;
        // 0x20e210: 0xdea30058  ld          $v1, 0x58($s5) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E214u;
        goto label_20e214;
    }
    ctx->pc = 0x20E20Cu;
    {
        const bool branch_taken_0x20e20c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e20c) {
            ctx->pc = 0x20E210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E20Cu;
            // 0x20e210: 0xdea30058  ld          $v1, 0x58($s5) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E240u;
            goto label_20e240;
        }
    }
    ctx->pc = 0x20E214u;
label_20e214:
    // 0x20e214: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20e214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20e218:
    // 0x20e218: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x20e218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_20e21c:
    // 0x20e21c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x20e21cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_20e220:
    // 0x20e220: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20e220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20e224:
    // 0x20e224: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20e224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20e228:
    // 0x20e228: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x20e228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_20e22c:
    // 0x20e22c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x20e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20e230:
    // 0x20e230: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20e230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20e234:
    // 0x20e234: 0x40f809  jalr        $v0
label_20e238:
    if (ctx->pc == 0x20E238u) {
        ctx->pc = 0x20E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E234u;
        // 0x20e238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E23Cu;
        goto label_20e23c;
    }
    ctx->pc = 0x20E234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20E23Cu);
        ctx->pc = 0x20E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E234u;
        // 0x20e238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E234u, 0x20E23Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20E23Cu;
label_20e23c:
    // 0x20e23c: 0xdea30058  ld          $v1, 0x58($s5)
    ctx->pc = 0x20e23cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 88)));
label_20e240:
    // 0x20e240: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x20e240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_20e244:
    // 0x20e244: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x20e244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_20e248:
    // 0x20e248: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x20e248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_20e24c:
    // 0x20e24c: 0x64630010  daddiu      $v1, $v1, 0x10
    ctx->pc = 0x20e24cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)16);
label_20e250:
    // 0x20e250: 0x26a40048  addiu       $a0, $s5, 0x48
    ctx->pc = 0x20e250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
label_20e254:
    // 0x20e254: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x20e254u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_20e258:
    // 0x20e258: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20e258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20e25c:
    // 0x20e25c: 0xfea30058  sd          $v1, 0x58($s5)
    ctx->pc = 0x20e25cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 88), GPR_U64(ctx, 3));
label_20e260:
    // 0x20e260: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x20e260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_20e264:
    // 0x20e264: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x20e264u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20e268:
    // 0x20e268: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20e268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20e26c:
    // 0x20e26c: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x20e26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_20e270:
    // 0x20e270: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20e270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_20e274:
    // 0x20e274: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x20e274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_20e278:
    // 0x20e278: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_20e27c:
    if (ctx->pc == 0x20E27Cu) {
        ctx->pc = 0x20E27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E278u;
        // 0x20e27c: 0xac900000  sw          $s0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E280u;
        goto label_20e280;
    }
    ctx->pc = 0x20E278u;
    {
        const bool branch_taken_0x20e278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E278u;
        // 0x20e27c: 0xac900000  sw          $s0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e278) {
            ctx->pc = 0x20E2A8u;
            goto label_20e2a8;
        }
    }
    ctx->pc = 0x20E280u;
label_20e280:
    // 0x20e280: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x20e280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20e284:
    // 0x20e284: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x20e284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_20e288:
    // 0x20e288: 0x1e21c0  sll         $a0, $fp, 7
    ctx->pc = 0x20e288u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 7));
label_20e28c:
    // 0x20e28c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x20e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_20e290:
    // 0x20e290: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x20e290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_20e294:
    // 0x20e294: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x20e294u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_20e298:
    // 0x20e298: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x20e298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_20e29c:
    // 0x20e29c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20e29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_20e2a0:
    // 0x20e2a0: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_20e2a4:
    if (ctx->pc == 0x20E2A4u) {
        ctx->pc = 0x20E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E2A0u;
        // 0x20e2a4: 0xa42821  addu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E2A8u;
        goto label_20e2a8;
    }
    ctx->pc = 0x20E2A0u;
    {
        const bool branch_taken_0x20e2a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E2A0u;
        // 0x20e2a4: 0xa42821  addu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e2a0) {
            ctx->pc = 0x20E290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e290;
        }
    }
    ctx->pc = 0x20E2A8u;
label_20e2a8:
    // 0x20e2a8: 0x276102b  sltu        $v0, $s3, $s6
    ctx->pc = 0x20e2a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_20e2ac:
    // 0x20e2ac: 0x5440ffb0  bnel        $v0, $zero, . + 4 + (-0x50 << 2)
label_20e2b0:
    if (ctx->pc == 0x20E2B0u) {
        ctx->pc = 0x20E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E2ACu;
        // 0x20e2b0: 0x2d32023  subu        $a0, $s6, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E2B4u;
        goto label_20e2b4;
    }
    ctx->pc = 0x20E2ACu;
    {
        const bool branch_taken_0x20e2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e2ac) {
            ctx->pc = 0x20E2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E2ACu;
            // 0x20e2b0: 0x2d32023  subu        $a0, $s6, $s3 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20e170;
        }
    }
    ctx->pc = 0x20E2B4u;
label_20e2b4:
    // 0x20e2b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x20e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_20e2b8:
    // 0x20e2b8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x20e2b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_20e2bc:
    // 0x20e2bc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x20e2bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20e2c0:
    // 0x20e2c0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x20e2c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20e2c4:
    // 0x20e2c4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x20e2c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20e2c8:
    // 0x20e2c8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x20e2c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20e2cc:
    // 0x20e2cc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20e2ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20e2d0:
    // 0x20e2d0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x20e2d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20e2d4:
    // 0x20e2d4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x20e2d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20e2d8:
    // 0x20e2d8: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x20e2d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20e2dc:
    // 0x20e2dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20e2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20e2e0:
    // 0x20e2e0: 0x3e00008  jr          $ra
label_20e2e4:
    if (ctx->pc == 0x20E2E4u) {
        ctx->pc = 0x20E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E2E0u;
        // 0x20e2e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E2E8u;
        goto label_fallthrough_0x20e2e0;
    }
    ctx->pc = 0x20E2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E2E0u;
        // 0x20e2e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20e2e0:
    ctx->pc = 0x20E2E8u;
}
