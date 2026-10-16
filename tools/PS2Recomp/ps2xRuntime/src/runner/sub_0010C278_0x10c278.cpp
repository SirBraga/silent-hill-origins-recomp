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

// Function: sub_0010C278
// Address: 0x10c278 - 0x10c3a0
void sub_0010C278_0x10c278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C278_0x10c278");
#endif

    switch (ctx->pc) {
        case 0x10c2c8u: goto label_10c2c8;
        case 0x10c2fcu: goto label_10c2fc;
        case 0x10c320u: goto label_10c320;
        case 0x10c328u: goto label_10c328;
        case 0x10c35cu: goto label_10c35c;
        case 0x10c374u: goto label_10c374;
        default: break;
    }

    ctx->pc = 0x10c278u;

    // 0x10c278: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10c278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10c27c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x10c27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x10c280: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x10c280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x10c284: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10c284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c288: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x10c288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x10c28c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x10c28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x10c290: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x10c290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x10c294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10c294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10c298: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x10c298u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x10c29c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x10c29cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x10c2a0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x10c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x10c2a4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x10C2A4u;
    {
        const bool branch_taken_0x10c2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C2A4u;
        // 0x10c2a8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c2a4) {
            ctx->pc = 0x10C378u;
            goto label_10c378;
        }
    }
    ctx->pc = 0x10C2ACu;
    // 0x10c2ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10c2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10c2b0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x10c2b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x10c2b4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x10c2b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10c2b8: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x10c2b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x10c2bc: 0x26510b20  addiu       $s1, $s2, 0xB20
    ctx->pc = 0x10c2bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2848));
    // 0x10c2c0: 0x3c140034  lui         $s4, 0x34
    ctx->pc = 0x10c2c0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)52 << 16));
    // 0x10c2c4: 0x0  nop
    ctx->pc = 0x10c2c4u;
    // NOP
label_10c2c8:
    // 0x10c2c8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x10c2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x10c2cc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x10c2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x10c2d0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x10c2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x10c2d4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x10c2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x10c2d8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x10c2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x10c2dc: 0xe6350014  swc1        $f21, 0x14($s1)
    ctx->pc = 0x10c2dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x10c2e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x10c2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10c2e4: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x10C2E4u;
    {
        const bool branch_taken_0x10c2e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C2E4u;
        // 0x10c2e8: 0x8e8282f4  lw          $v0, -0x7D0C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294935284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c2e4) {
            ctx->pc = 0x10C354u;
            goto label_10c354;
        }
    }
    ctx->pc = 0x10C2ECu;
    // 0x10c2ec: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x10C2ECu;
    {
        const bool branch_taken_0x10c2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c2ec) {
            ctx->pc = 0x10C354u;
            goto label_10c354;
        }
    }
    ctx->pc = 0x10C2F4u;
    // 0x10c2f4: 0xc0b879c  jal         func_2E1E70
    ctx->pc = 0x10C2F4u;
    SET_GPR_U32(ctx, 31, 0x10C2FCu);
    ctx->pc = 0x10C2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C2F4u;
    // 0x10c2f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1E70u, 0x10C2F4u, 0x10C2FCu)) {
        return;
    }
    ctx->pc = 0x10C2FCu;
label_10c2fc:
    // 0x10c2fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10c300: 0xe4540058  swc1        $f20, 0x58($v0)
    ctx->pc = 0x10c300u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x10c304: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10c304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10c308: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x10c308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x10c30c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C30Cu;
    {
        const bool branch_taken_0x10c30c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C30Cu;
        // 0x10c310: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c30c) {
            ctx->pc = 0x10C320u;
            goto label_10c320;
        }
    }
    ctx->pc = 0x10C314u;
    // 0x10c314: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10c314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c318: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10C318u;
    SET_GPR_U32(ctx, 31, 0x10C320u);
    ctx->pc = 0x10C31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C318u;
    // 0x10c31c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10C318u, 0x10C320u)) {
        return;
    }
    ctx->pc = 0x10C320u;
label_10c320:
    // 0x10c320: 0xc0765ea  jal         func_1D97A8
    ctx->pc = 0x10C320u;
    SET_GPR_U32(ctx, 31, 0x10C328u);
    ctx->pc = 0x10C324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C320u;
    // 0x10c324: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D97A8u, 0x10C320u, 0x10C328u)) {
        return;
    }
    ctx->pc = 0x10C328u;
label_10c328:
    // 0x10c328: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10c328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x10c32c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x10c32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x10c330: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x10c330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x10c334: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x10c334u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x10c338: 0xe6140010  swc1        $f20, 0x10($s0)
    ctx->pc = 0x10c338u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x10c33c: 0xe6150014  swc1        $f21, 0x14($s0)
    ctx->pc = 0x10c33cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x10c340: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x10c340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x10c344: 0xe615001c  swc1        $f21, 0x1C($s0)
    ctx->pc = 0x10c344u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x10c348: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x10c348u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x10c34c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x10c34cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x10c350: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x10c350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_10c354:
    // 0x10c354: 0xc0b7182  jal         func_2DC608
    ctx->pc = 0x10C354u;
    SET_GPR_U32(ctx, 31, 0x10C35Cu);
    ctx->pc = 0x10C358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C354u;
    // 0x10c358: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC608u, 0x10C354u, 0x10C35Cu)) {
        return;
    }
    ctx->pc = 0x10C35Cu;
label_10c35c:
    // 0x10c35c: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x10c35cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x10c360: 0x2e620040  sltiu       $v0, $s3, 0x40
    ctx->pc = 0x10c360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x10c364: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x10C364u;
    {
        const bool branch_taken_0x10c364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C364u;
        // 0x10c368: 0x2631001c  addiu       $s1, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c364) {
            ctx->pc = 0x10C2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c2c8;
        }
    }
    ctx->pc = 0x10C36Cu;
    // 0x10c36c: 0xc076650  jal         func_1D9940
    ctx->pc = 0x10C36Cu;
    SET_GPR_U32(ctx, 31, 0x10C374u);
    ctx->pc = 0x1D9940u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9940u, 0x10C36Cu, 0x10C374u)) {
        return;
    }
    ctx->pc = 0x10C374u;
label_10c374:
    // 0x10c374: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x10c374u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_10c378:
    // 0x10c378: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x10c378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10c37c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x10c37cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10c380: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x10c380u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10c384: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x10c384u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c388: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x10c388u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c38c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10c38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c390: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x10c390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x10c394: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x10c394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10c398: 0x3e00008  jr          $ra
    ctx->pc = 0x10C398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C398u;
        // 0x10c39c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C3A0u;
}
