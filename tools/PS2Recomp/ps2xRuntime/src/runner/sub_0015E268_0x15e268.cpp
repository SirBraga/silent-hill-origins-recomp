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

// Function: sub_0015E268
// Address: 0x15e268 - 0x15e3a0
void sub_0015E268_0x15e268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E268_0x15e268");
#endif

    switch (ctx->pc) {
        case 0x15e288u: goto label_15e288;
        case 0x15e2b0u: goto label_15e2b0;
        case 0x15e324u: goto label_15e324;
        case 0x15e33cu: goto label_15e33c;
        case 0x15e350u: goto label_15e350;
        case 0x15e364u: goto label_15e364;
        case 0x15e378u: goto label_15e378;
        default: break;
    }

    ctx->pc = 0x15e268u;

    // 0x15e268: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15e268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15e26c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x15e26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x15e270: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x15e270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x15e274: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x15e274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x15e278: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15e278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15e27c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15e27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15e280: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x15E280u;
    SET_GPR_U32(ctx, 31, 0x15E288u);
    ctx->pc = 0x15E284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E280u;
    // 0x15e284: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x15E280u, 0x15E288u)) {
        return;
    }
    ctx->pc = 0x15E288u;
label_15e288:
    // 0x15e288: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x15e288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x15e28c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x15e28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x15e290: 0x244232c0  addiu       $v0, $v0, 0x32C0
    ctx->pc = 0x15e290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12992));
    // 0x15e294: 0x246332e0  addiu       $v1, $v1, 0x32E0
    ctx->pc = 0x15e294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13024));
    // 0x15e298: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x15e298u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    // 0x15e29c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x15e29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15e2a0: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x15e2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
    // 0x15e2a4: 0x26620060  addiu       $v0, $s3, 0x60
    ctx->pc = 0x15e2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x15e2a8: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x15e2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x15e2ac: 0x0  nop
    ctx->pc = 0x15e2acu;
    // NOP
label_15e2b0:
    // 0x15e2b0: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x15e2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x15e2b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15e2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15e2b8: 0x0  nop
    ctx->pc = 0x15e2b8u;
    // NOP
    // 0x15e2bc: 0x0  nop
    ctx->pc = 0x15e2bcu;
    // NOP
    // 0x15e2c0: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x15E2C0u;
    {
        const bool branch_taken_0x15e2c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x15E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E2C0u;
        // 0x15e2c4: 0x24420060  addiu       $v0, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e2c0) {
            ctx->pc = 0x15E2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e2b0;
        }
    }
    ctx->pc = 0x15E2C8u;
    // 0x15e2c8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x15e2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x15e2cc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x15e2ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15e2d0: 0x26720038  addiu       $s2, $s3, 0x38
    ctx->pc = 0x15e2d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x15e2d4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x15e2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x15e2d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x15e2d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15e2dc: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x15e2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x15e2e0: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x15e2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x15e2e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15e2e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15e2e8: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x15e2e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15e2ec: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x15e2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x15e2f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x15e2f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15e2f4: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x15e2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x15e2f8: 0xe66107e4  swc1        $f1, 0x7E4($s3)
    ctx->pc = 0x15e2f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2020), bits); }
    // 0x15e2fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15e2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e300: 0xe66007e8  swc1        $f0, 0x7E8($s3)
    ctx->pc = 0x15e300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2024), bits); }
    // 0x15e304: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15e304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e308: 0xe66307ec  swc1        $f3, 0x7EC($s3)
    ctx->pc = 0x15e308u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2028), bits); }
    // 0x15e30c: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x15e30cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x15e310: 0xe66207f0  swc1        $f2, 0x7F0($s3)
    ctx->pc = 0x15e310u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2032), bits); }
    // 0x15e314: 0x2610f0c0  addiu       $s0, $s0, -0xF40
    ctx->pc = 0x15e314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963392));
    // 0x15e318: 0xe66307e0  swc1        $f3, 0x7E0($s3)
    ctx->pc = 0x15e318u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2016), bits); }
    // 0x15e31c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x15E31Cu;
    SET_GPR_U32(ctx, 31, 0x15E324u);
    ctx->pc = 0x15E320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E31Cu;
    // 0x15e320: 0x3c11006c  lui         $s1, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x15E31Cu, 0x15E324u)) {
        return;
    }
    ctx->pc = 0x15E324u;
label_15e324:
    // 0x15e324: 0x2631f0c8  addiu       $s1, $s1, -0xF38
    ctx->pc = 0x15e324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963400));
    // 0x15e328: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x15e328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x15e32c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15e32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e330: 0x24a53260  addiu       $a1, $a1, 0x3260
    ctx->pc = 0x15e330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
    // 0x15e334: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x15E334u;
    SET_GPR_U32(ctx, 31, 0x15E33Cu);
    ctx->pc = 0x15E338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E334u;
    // 0x15e338: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x15E334u, 0x15E33Cu)) {
        return;
    }
    ctx->pc = 0x15E33Cu;
label_15e33c:
    // 0x15e33c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x15e33cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x15e340: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15e340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e344: 0x24a53270  addiu       $a1, $a1, 0x3270
    ctx->pc = 0x15e344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12912));
    // 0x15e348: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x15E348u;
    SET_GPR_U32(ctx, 31, 0x15E350u);
    ctx->pc = 0x15E34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E348u;
    // 0x15e34c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x15E348u, 0x15E350u)) {
        return;
    }
    ctx->pc = 0x15E350u;
label_15e350:
    // 0x15e350: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15e350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e354: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15e354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e358: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15e358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e35c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x15E35Cu;
    SET_GPR_U32(ctx, 31, 0x15E364u);
    ctx->pc = 0x15E360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E35Cu;
    // 0x15e360: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x15E35Cu, 0x15E364u)) {
        return;
    }
    ctx->pc = 0x15E364u;
label_15e364:
    // 0x15e364: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15e364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e368: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15e368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e36c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15e36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e370: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x15E370u;
    SET_GPR_U32(ctx, 31, 0x15E378u);
    ctx->pc = 0x15E374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E370u;
    // 0x15e374: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x15E370u, 0x15E378u)) {
        return;
    }
    ctx->pc = 0x15E378u;
label_15e378:
    // 0x15e378: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x15e378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e37c: 0xae6007f8  sw          $zero, 0x7F8($s3)
    ctx->pc = 0x15e37cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2040), GPR_U32(ctx, 0));
    // 0x15e380: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x15e380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e384: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x15e384u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e388: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15e388u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e38c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x15e38cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15e390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e394: 0x3e00008  jr          $ra
    ctx->pc = 0x15E394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E394u;
        // 0x15e398: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E39Cu;
    // 0x15e39c: 0x0  nop
    ctx->pc = 0x15e39cu;
    // NOP
    ctx->pc = 0x15e3a0u;
}
