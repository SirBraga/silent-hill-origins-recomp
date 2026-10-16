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

// Function: sub_00260018
// Address: 0x260018 - 0x260110
void sub_00260018_0x260018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260018_0x260018");
#endif

    switch (ctx->pc) {
        case 0x260034u: goto label_260034;
        case 0x2600a8u: goto label_2600a8;
        default: break;
    }

    ctx->pc = 0x260018u;

    // 0x260018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x260018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26001c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26001cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x260020: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x260020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x260024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x260028: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x260028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26002c: 0xc09533c  jal         func_254CF0
    ctx->pc = 0x26002Cu;
    SET_GPR_U32(ctx, 31, 0x260034u);
    ctx->pc = 0x260030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26002Cu;
    // 0x260030: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254CF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x254CF0u, 0x26002Cu, 0x260034u)) {
        return;
    }
    ctx->pc = 0x260034u;
label_260034:
    // 0x260034: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x260034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260038: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x260038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x26003c: 0x8c620fc8  lw          $v0, 0xFC8($v1)
    ctx->pc = 0x26003cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x730FC8u));
    // 0x260040: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x260040u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x260044: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x260044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x260048: 0x8c844170  lw          $a0, 0x4170($a0)
    ctx->pc = 0x260048u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4170u));
    // 0x26004c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26004cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260050: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x260050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260054: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x260054u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x260058: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x260058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26005c: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x26005cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x260060: 0x24430060  addiu       $v1, $v0, 0x60
    ctx->pc = 0x260060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x260064: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x260064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260068: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x260068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x26006c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x26006cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x260070: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x260070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x260074: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x260074u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x260078: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x260078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26007c: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x26007cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x260080: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x260080u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x260084: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x260084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260088: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x260088u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x26008c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26008cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x260090: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x260090u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x260094: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x260094u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x260098: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x260098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26009c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26009Cu;
    {
        const bool branch_taken_0x26009c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2600A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26009Cu;
        // 0x2600a0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26009c) {
            ctx->pc = 0x2600F0u;
            goto label_2600f0;
        }
    }
    ctx->pc = 0x2600A4u;
    // 0x2600a4: 0x0  nop
    ctx->pc = 0x2600a4u;
    // NOP
label_2600a8:
    // 0x2600a8: 0x10460015  beq         $v0, $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x2600A8u;
    {
        const bool branch_taken_0x2600a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x2600ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2600A8u;
        // 0x2600ac: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2600a8) {
            ctx->pc = 0x260100u;
            goto label_260100;
        }
    }
    ctx->pc = 0x2600B0u;
    // 0x2600b0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2600b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2600b4: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x2600b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2600b8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2600b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2600bc: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x2600bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2600c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2600c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2600c4: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x2600c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2600c8: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x2600c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x2600cc: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2600ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2600d0: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x2600d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2600d4: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2600d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2600d8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2600d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2600dc: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2600dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2600e0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2600e0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2600e4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2600e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2600e8: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2600e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2600ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2600ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2600f0:
    // 0x2600f0: 0x0  nop
    ctx->pc = 0x2600f0u;
    // NOP
    // 0x2600f4: 0x4502ffec  bc1fl       . + 4 + (-0x14 << 2)
    ctx->pc = 0x2600F4u;
    {
        const bool branch_taken_0x2600f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2600f4) {
            ctx->pc = 0x2600F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2600F4u;
            // 0x2600f8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2600A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2600a8;
        }
    }
    ctx->pc = 0x2600FCu;
    // 0x2600fc: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x2600fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
label_260100:
    // 0x260100: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x260100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x260104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260108: 0x3e00008  jr          $ra
    ctx->pc = 0x260108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260108u;
        // 0x26010c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260110u;
}
