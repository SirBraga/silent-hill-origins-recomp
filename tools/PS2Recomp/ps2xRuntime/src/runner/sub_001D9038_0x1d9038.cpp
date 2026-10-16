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

// Function: sub_001D9038
// Address: 0x1d9038 - 0x1d91a0
void sub_001D9038_0x1d9038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9038_0x1d9038");
#endif

    switch (ctx->pc) {
        case 0x1d9068u: goto label_1d9068;
        case 0x1d9084u: goto label_1d9084;
        case 0x1d90acu: goto label_1d90ac;
        case 0x1d90c0u: goto label_1d90c0;
        case 0x1d90d8u: goto label_1d90d8;
        case 0x1d9100u: goto label_1d9100;
        case 0x1d9128u: goto label_1d9128;
        case 0x1d917cu: goto label_1d917c;
        default: break;
    }

    ctx->pc = 0x1d9038u;

    // 0x1d9038: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d9038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d903c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1d903cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1d9040: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1d9040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1d9044: 0x3c130070  lui         $s3, 0x70
    ctx->pc = 0x1d9044u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)112 << 16));
    // 0x1d9048: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1d9048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1d904c: 0x26708c68  addiu       $s0, $s3, -0x7398
    ctx->pc = 0x1d904cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294937704));
    // 0x1d9050: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d9050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d9054: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d9054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9058: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d9058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d905c: 0x3c120070  lui         $s2, 0x70
    ctx->pc = 0x1d905cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
    // 0x1d9060: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x1d9060u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1d9064: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1d9064u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1d9068:
    // 0x1d9068: 0x8e448a64  lw          $a0, -0x759C($s2)
    ctx->pc = 0x1d9068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937188)));
    // 0x1d906c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d906cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9070: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9074: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d9074u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9078: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9078u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d907c: 0xc0bb30e  jal         func_2ECC38
    ctx->pc = 0x1D907Cu;
    SET_GPR_U32(ctx, 31, 0x1D9084u);
    ctx->pc = 0x1D9080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D907Cu;
    // 0x1d9080: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ECC38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ECC38u, 0x1D907Cu, 0x1D9084u)) {
        return;
    }
    ctx->pc = 0x1D9084u;
label_1d9084:
    // 0x1d9084: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d9084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d9088: 0x2e22000f  sltiu       $v0, $s1, 0xF
    ctx->pc = 0x1d9088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x1d908c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D908Cu;
    {
        const bool branch_taken_0x1d908c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D908Cu;
        // 0x1d9090: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d908c) {
            ctx->pc = 0x1D9068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9068;
        }
    }
    ctx->pc = 0x1D9094u;
    // 0x1d9094: 0x8e448a64  lw          $a0, -0x759C($s2)
    ctx->pc = 0x1d9094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937188)));
    // 0x1d9098: 0x26658c68  addiu       $a1, $s3, -0x7398
    ctx->pc = 0x1d9098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294937704));
    // 0x1d909c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d909cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d90a0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1d90a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1d90a4: 0xc0b7ec6  jal         func_2DFB18
    ctx->pc = 0x1D90A4u;
    SET_GPR_U32(ctx, 31, 0x1D90ACu);
    ctx->pc = 0x1D90A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D90A4u;
    // 0x1d90a8: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFB18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DFB18u, 0x1D90A4u, 0x1D90ACu)) {
        return;
    }
    ctx->pc = 0x1D90ACu;
label_1d90ac:
    // 0x1d90ac: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1d90acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d90b0: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d90b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d90b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d90b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d90b8: 0x24508a68  addiu       $s0, $v0, -0x7598
    ctx->pc = 0x1d90b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937192));
    // 0x1d90bc: 0x0  nop
    ctx->pc = 0x1d90bcu;
    // NOP
label_1d90c0:
    // 0x1d90c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d90c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d90c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d90c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d90c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d90c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d90cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d90ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d90d0: 0xc0b874c  jal         func_2E1D30
    ctx->pc = 0x1D90D0u;
    SET_GPR_U32(ctx, 31, 0x1D90D8u);
    ctx->pc = 0x1D90D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D90D0u;
    // 0x1d90d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1D30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1D30u, 0x1D90D0u, 0x1D90D8u)) {
        return;
    }
    ctx->pc = 0x1D90D8u;
label_1d90d8:
    // 0x1d90d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d90d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d90dc: 0xe4550058  swc1        $f21, 0x58($v0)
    ctx->pc = 0x1d90dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1d90e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d90e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d90e4: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x1d90e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1d90e8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D90E8u;
    {
        const bool branch_taken_0x1d90e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D90ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D90E8u;
        // 0x1d90ec: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d90e8) {
            ctx->pc = 0x1D9108u;
            goto label_1d9108;
        }
    }
    ctx->pc = 0x1D90F0u;
    // 0x1d90f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d90f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d90f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d90f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d90f8: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x1D90F8u;
    SET_GPR_U32(ctx, 31, 0x1D9100u);
    ctx->pc = 0x1D90FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D90F8u;
    // 0x1d90fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x1D90F8u, 0x1D9100u)) {
        return;
    }
    ctx->pc = 0x1D9100u;
label_1d9100:
    // 0x1d9100: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d9100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d9104: 0x0  nop
    ctx->pc = 0x1d9104u;
    // NOP
label_1d9108:
    // 0x1d9108: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x1d9108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x1d910c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d910cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d9110: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x1d9110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1d9114: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9114u;
    {
        const bool branch_taken_0x1d9114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9114u;
        // 0x1d9118: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9114) {
            ctx->pc = 0x1D9128u;
            goto label_1d9128;
        }
    }
    ctx->pc = 0x1D911Cu;
    // 0x1d911c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d911cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9120: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x1D9120u;
    SET_GPR_U32(ctx, 31, 0x1D9128u);
    ctx->pc = 0x1D9124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9120u;
    // 0x1d9124: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x1D9120u, 0x1D9128u)) {
        return;
    }
    ctx->pc = 0x1D9128u;
label_1d9128:
    // 0x1d9128: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d9128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d912c: 0x2e220040  sltiu       $v0, $s1, 0x40
    ctx->pc = 0x1d912cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x1d9130: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1D9130u;
    {
        const bool branch_taken_0x1d9130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9130u;
        // 0x1d9134: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9130) {
            ctx->pc = 0x1D90C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d90c0;
        }
    }
    ctx->pc = 0x1D9138u;
    // 0x1d9138: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d9138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d913c: 0x8c4382f0  lw          $v1, -0x7D10($v0)
    ctx->pc = 0x1d913cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3382F0u));
    // 0x1d9140: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1D9140u;
    {
        const bool branch_taken_0x1d9140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9140u;
        // 0x1d9144: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9140) {
            ctx->pc = 0x1D917Cu;
            goto label_1d917c;
        }
    }
    ctx->pc = 0x1D9148u;
    // 0x1d9148: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d9148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1d914c: 0x8c464320  lw          $a2, 0x4320($v0)
    ctx->pc = 0x1d914cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17184)));
    // 0x1d9150: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1d9150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1d9154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d9154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9158: 0x8c651a70  lw          $a1, 0x1A70($v1)
    ctx->pc = 0x1d9158u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x701A70u));
    // 0x1d915c: 0x10c50007  beq         $a2, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D915Cu;
    {
        const bool branch_taken_0x1d915c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D9160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D915Cu;
        // 0x1d9160: 0xac8282f4  sw          $v0, -0x7D0C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294935284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d915c) {
            ctx->pc = 0x1D917Cu;
            goto label_1d917c;
        }
    }
    ctx->pc = 0x1D9164u;
    // 0x1d9164: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1d9164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d9168: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9168u;
    {
        const bool branch_taken_0x1d9168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9168u;
        // 0x1d916c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9168) {
            ctx->pc = 0x1D917Cu;
            goto label_1d917c;
        }
    }
    ctx->pc = 0x1D9170u;
    // 0x1d9170: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1d9170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x1d9174: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D9174u;
    SET_GPR_U32(ctx, 31, 0x1D917Cu);
    ctx->pc = 0x1D9178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9174u;
    // 0x1d9178: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D9174u, 0x1D917Cu)) {
        return;
    }
    ctx->pc = 0x1D917Cu;
label_1d917c:
    // 0x1d917c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1d917cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d9180: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1d9180u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d9184: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d9184u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9188: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1d9188u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d918c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d918cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9190: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x1d9190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d9194: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1d9194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d9198: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9198u;
        // 0x1d919c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D91A0u;
}
