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

// Function: sub_001614C0
// Address: 0x1614c0 - 0x1615b8
void sub_001614C0_0x1614c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001614C0_0x1614c0");
#endif

    switch (ctx->pc) {
        case 0x161514u: goto label_161514;
        case 0x16151cu: goto label_16151c;
        case 0x161528u: goto label_161528;
        case 0x161530u: goto label_161530;
        case 0x161548u: goto label_161548;
        case 0x16157cu: goto label_16157c;
        case 0x161588u: goto label_161588;
        case 0x161594u: goto label_161594;
        default: break;
    }

    ctx->pc = 0x1614c0u;

    // 0x1614c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1614c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1614c4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1614c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1614c8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1614c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1614cc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1614ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1614d0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1614d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1614d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1614d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1614d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1614d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1614dc: 0x244236c8  addiu       $v0, $v0, 0x36C8
    ctx->pc = 0x1614dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14024));
    // 0x1614e0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1614e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1614e4: 0x246336e8  addiu       $v1, $v1, 0x36E8
    ctx->pc = 0x1614e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14056));
    // 0x1614e8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1614e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1614ec: 0x26720038  addiu       $s2, $s3, 0x38
    ctx->pc = 0x1614ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x1614f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1614f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1614f4: 0x26710094  addiu       $s1, $s3, 0x94
    ctx->pc = 0x1614f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 148));
    // 0x1614f8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1614f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1614fc: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x1614fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    // 0x161500: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x161500u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
    // 0x161504: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x161504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161508: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x161508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16150c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16150Cu;
    SET_GPR_U32(ctx, 31, 0x161514u);
    ctx->pc = 0x161510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16150Cu;
    // 0x161510: 0x2670009c  addiu       $s0, $s3, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16150Cu, 0x161514u)) {
        return;
    }
    ctx->pc = 0x161514u;
label_161514:
    // 0x161514: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x161514u;
    SET_GPR_U32(ctx, 31, 0x16151Cu);
    ctx->pc = 0x161518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161514u;
    // 0x161518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x161514u, 0x16151Cu)) {
        return;
    }
    ctx->pc = 0x16151Cu;
label_16151c:
    // 0x16151c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16151cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161520: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x161520u;
    SET_GPR_U32(ctx, 31, 0x161528u);
    ctx->pc = 0x161524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161520u;
    // 0x161524: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x161520u, 0x161528u)) {
        return;
    }
    ctx->pc = 0x161528u;
label_161528:
    // 0x161528: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x161528u;
    SET_GPR_U32(ctx, 31, 0x161530u);
    ctx->pc = 0x16152Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161528u;
    // 0x16152c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x161528u, 0x161530u)) {
        return;
    }
    ctx->pc = 0x161530u;
label_161530:
    // 0x161530: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x161530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x161534: 0x8c448648  lw          $a0, -0x79B8($v0)
    ctx->pc = 0x161534u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338648u));
    // 0x161538: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x161538u;
    {
        const bool branch_taken_0x161538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161538u;
        // 0x16153c: 0xac408648  sw          $zero, -0x79B8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294936136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161538) {
            ctx->pc = 0x161564u;
            goto label_161564;
        }
    }
    ctx->pc = 0x161540u;
    // 0x161540: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x161540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161544: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x161544u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_161548:
    // 0x161548: 0x10730004  beq         $v1, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x161548u;
    {
        const bool branch_taken_0x161548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x16154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161548u;
        // 0x16154c: 0x8c8400b4  lw          $a0, 0xB4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161548) {
            ctx->pc = 0x16155Cu;
            goto label_16155c;
        }
    }
    ctx->pc = 0x161550u;
    // 0x161550: 0x8ca28648  lw          $v0, -0x79B8($a1)
    ctx->pc = 0x161550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294936136)));
    // 0x161554: 0xac6200b4  sw          $v0, 0xB4($v1)
    ctx->pc = 0x161554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 2));
    // 0x161558: 0xaca38648  sw          $v1, -0x79B8($a1)
    ctx->pc = 0x161558u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294936136), GPR_U32(ctx, 3));
label_16155c:
    // 0x16155c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16155Cu;
    {
        const bool branch_taken_0x16155c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x161560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16155Cu;
        // 0x161560: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16155c) {
            ctx->pc = 0x161548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161548;
        }
    }
    ctx->pc = 0x161564u;
label_161564:
    // 0x161564: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x161564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161568: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x161568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x16156c: 0x2664009c  addiu       $a0, $s3, 0x9C
    ctx->pc = 0x16156cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 156));
    // 0x161570: 0xac43864c  sw          $v1, -0x79B4($v0)
    ctx->pc = 0x161570u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x33864Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x33864Cu, _value); } while (0);
    // 0x161574: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x161574u;
    SET_GPR_U32(ctx, 31, 0x16157Cu);
    ctx->pc = 0x161578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161574u;
    // 0x161578: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x161574u, 0x16157Cu)) {
        return;
    }
    ctx->pc = 0x16157Cu;
label_16157c:
    // 0x16157c: 0x26640094  addiu       $a0, $s3, 0x94
    ctx->pc = 0x16157cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 148));
    // 0x161580: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x161580u;
    SET_GPR_U32(ctx, 31, 0x161588u);
    ctx->pc = 0x161584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161580u;
    // 0x161584: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x161580u, 0x161588u)) {
        return;
    }
    ctx->pc = 0x161588u;
label_161588:
    // 0x161588: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x161588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16158c: 0xc04f084  jal         func_13C210
    ctx->pc = 0x16158Cu;
    SET_GPR_U32(ctx, 31, 0x161594u);
    ctx->pc = 0x161590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16158Cu;
    // 0x161590: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x16158Cu, 0x161594u)) {
        return;
    }
    ctx->pc = 0x161594u;
label_161594:
    // 0x161594: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x161594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x161598: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x161598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16159c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x16159cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1615a0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1615a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1615a4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1615a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1615a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1615a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1615ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1615ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1615B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1615ACu;
        // 0x1615b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1615ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1615B4u;
    // 0x1615b4: 0x0  nop
    ctx->pc = 0x1615b4u;
    // NOP
    ctx->pc = 0x1615b8u;
}
