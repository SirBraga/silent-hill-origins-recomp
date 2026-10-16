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

// Function: sub_0020F2B0
// Address: 0x20f2b0 - 0x20f380
void sub_0020F2B0_0x20f2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F2B0_0x20f2b0");
#endif

    switch (ctx->pc) {
        case 0x20f2b0u: goto label_20f2b0;
        case 0x20f2b4u: goto label_20f2b4;
        case 0x20f2b8u: goto label_20f2b8;
        case 0x20f2bcu: goto label_20f2bc;
        case 0x20f2c0u: goto label_20f2c0;
        case 0x20f2c4u: goto label_20f2c4;
        case 0x20f2c8u: goto label_20f2c8;
        case 0x20f2ccu: goto label_20f2cc;
        case 0x20f2d0u: goto label_20f2d0;
        case 0x20f2d4u: goto label_20f2d4;
        case 0x20f2d8u: goto label_20f2d8;
        case 0x20f2dcu: goto label_20f2dc;
        case 0x20f2e0u: goto label_20f2e0;
        case 0x20f2e4u: goto label_20f2e4;
        case 0x20f2e8u: goto label_20f2e8;
        case 0x20f2ecu: goto label_20f2ec;
        case 0x20f2f0u: goto label_20f2f0;
        case 0x20f2f4u: goto label_20f2f4;
        case 0x20f2f8u: goto label_20f2f8;
        case 0x20f2fcu: goto label_20f2fc;
        case 0x20f300u: goto label_20f300;
        case 0x20f304u: goto label_20f304;
        case 0x20f308u: goto label_20f308;
        case 0x20f30cu: goto label_20f30c;
        case 0x20f310u: goto label_20f310;
        case 0x20f314u: goto label_20f314;
        case 0x20f318u: goto label_20f318;
        case 0x20f31cu: goto label_20f31c;
        case 0x20f320u: goto label_20f320;
        case 0x20f324u: goto label_20f324;
        case 0x20f328u: goto label_20f328;
        case 0x20f32cu: goto label_20f32c;
        case 0x20f330u: goto label_20f330;
        case 0x20f334u: goto label_20f334;
        case 0x20f338u: goto label_20f338;
        case 0x20f33cu: goto label_20f33c;
        case 0x20f340u: goto label_20f340;
        case 0x20f344u: goto label_20f344;
        case 0x20f348u: goto label_20f348;
        case 0x20f34cu: goto label_20f34c;
        case 0x20f350u: goto label_20f350;
        case 0x20f354u: goto label_20f354;
        case 0x20f358u: goto label_20f358;
        case 0x20f35cu: goto label_20f35c;
        case 0x20f360u: goto label_20f360;
        case 0x20f364u: goto label_20f364;
        case 0x20f368u: goto label_20f368;
        case 0x20f36cu: goto label_20f36c;
        case 0x20f370u: goto label_20f370;
        case 0x20f374u: goto label_20f374;
        case 0x20f378u: goto label_20f378;
        case 0x20f37cu: goto label_20f37c;
        default: break;
    }

    ctx->pc = 0x20f2b0u;

label_20f2b0:
    // 0x20f2b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x20f2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_20f2b4:
    // 0x20f2b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20f2b8:
    // 0x20f2b8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x20f2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_20f2bc:
    // 0x20f2bc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x20f2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_20f2c0:
    // 0x20f2c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20f2c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20f2c4:
    // 0x20f2c4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x20f2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_20f2c8:
    // 0x20f2c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20f2c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20f2cc:
    // 0x20f2cc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x20f2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_20f2d0:
    // 0x20f2d0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x20f2d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_20f2d4:
    // 0x20f2d4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x20f2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_20f2d8:
    // 0x20f2d8: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x20f2d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_20f2dc:
    // 0x20f2dc: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x20f2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_20f2e0:
    // 0x20f2e0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x20f2e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20f2e4:
    // 0x20f2e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20f2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20f2e8:
    // 0x20f2e8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x20f2e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20f2ec:
    // 0x20f2ec: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x20f2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_20f2f0:
    // 0x20f2f0: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
label_20f2f4:
    if (ctx->pc == 0x20F2F4u) {
        ctx->pc = 0x20F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2F0u;
        // 0x20f2f4: 0x8e130004  lw          $s3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F2F8u;
        goto label_20f2f8;
    }
    ctx->pc = 0x20F2F0u;
    {
        const bool branch_taken_0x20f2f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x20F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F2F0u;
        // 0x20f2f4: 0x8e130004  lw          $s3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f2f0) {
            ctx->pc = 0x20F31Cu;
            goto label_20f31c;
        }
    }
    ctx->pc = 0x20F2F8u;
label_20f2f8:
    // 0x20f2f8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x20f2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f2fc:
    // 0x20f2fc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x20f2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_20f300:
    // 0x20f300: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20f300u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_20f304:
    // 0x20f304: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20f304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f308:
    // 0x20f308: 0xac510018  sw          $s1, 0x18($v0)
    ctx->pc = 0x20f308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 17));
label_20f30c:
    // 0x20f30c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20f30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20f310:
    // 0x20f310: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20f310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20f314:
    // 0x20f314: 0x40f809  jalr        $v0
label_20f318:
    if (ctx->pc == 0x20F318u) {
        ctx->pc = 0x20F31Cu;
        goto label_20f31c;
    }
    ctx->pc = 0x20F314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F31Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F314u, 0x20F31Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F31Cu;
label_20f31c:
    // 0x20f31c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f320:
    // 0x20f320: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20f320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20f324:
    // 0x20f324: 0xc08371a  jal         func_20DC68
label_20f328:
    if (ctx->pc == 0x20F328u) {
        ctx->pc = 0x20F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F324u;
        // 0x20f328: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F32Cu;
        goto label_20f32c;
    }
    ctx->pc = 0x20F324u;
    SET_GPR_U32(ctx, 31, 0x20F32Cu);
    ctx->pc = 0x20F328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F324u;
    // 0x20f328: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DC68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x20DC68u, 0x20F324u, 0x20F32Cu)) {
        return;
    }
    ctx->pc = 0x20F32Cu;
label_20f32c:
    // 0x20f32c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20f32cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20f330:
    // 0x20f330: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x20f330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20f334:
    // 0x20f334: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x20f334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
label_20f338:
    // 0x20f338: 0xac750008  sw          $s5, 0x8($v1)
    ctx->pc = 0x20f338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 21));
label_20f33c:
    // 0x20f33c: 0xac74000c  sw          $s4, 0xC($v1)
    ctx->pc = 0x20f33cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 20));
label_20f340:
    // 0x20f340: 0xac760020  sw          $s6, 0x20($v1)
    ctx->pc = 0x20f340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 22));
label_20f344:
    // 0x20f344: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x20f344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_20f348:
    // 0x20f348: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x20f348u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
label_20f34c:
    // 0x20f34c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x20f34cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20f350:
    // 0x20f350: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x20f350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_20f354:
    // 0x20f354: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x20f354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20f358:
    // 0x20f358: 0xac64002c  sw          $a0, 0x2C($v1)
    ctx->pc = 0x20f358u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 4));
label_20f35c:
    // 0x20f35c: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x20f35cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_20f360:
    // 0x20f360: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20f360u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20f364:
    // 0x20f364: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x20f364u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20f368:
    // 0x20f368: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x20f368u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20f36c:
    // 0x20f36c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x20f36cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20f370:
    // 0x20f370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20f370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20f374:
    // 0x20f374: 0x3e00008  jr          $ra
label_20f378:
    if (ctx->pc == 0x20F378u) {
        ctx->pc = 0x20F378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F374u;
        // 0x20f378: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F37Cu;
        goto label_20f37c;
    }
    ctx->pc = 0x20F374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F374u;
        // 0x20f378: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F37Cu;
label_20f37c:
    // 0x20f37c: 0x0  nop
    ctx->pc = 0x20f37cu;
    // NOP
    ctx->pc = 0x20f380u;
}
