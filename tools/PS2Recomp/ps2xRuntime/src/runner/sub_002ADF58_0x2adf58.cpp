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

// Function: sub_002ADF58
// Address: 0x2adf58 - 0x2ae030
void sub_002ADF58_0x2adf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ADF58_0x2adf58");
#endif

    ctx->pc = 0x2adf58u;

    // 0x2adf58: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2adf58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf5c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2adf5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2adf60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2adf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2adf64: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x2adf64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2adf68: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2adf68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2adf6c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2adf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2adf70: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x2adf70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x2adf74: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x2adf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2adf78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2adf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2adf7c: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x2adf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2adf80: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x2adf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2adf84: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2adf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2adf88: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x2adf88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2adf8c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2adf8cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2adf90: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x2adf90u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2adf94: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2adf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2adf98: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2adf98u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2adf9c: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x2adf9cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2adfa0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2adfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2adfa4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2adfa4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2adfa8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2adfa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2adfac: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x2adfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2adfb0: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2adfb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2adfb4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2adfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2adfb8: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x2adfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2adfbc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2adfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2adfc0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2adfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2adfc4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2adfc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2adfc8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2adfc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2adfcc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2adfccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2adfd0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2adfd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2adfd4: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x2adfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2adfd8: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2adfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2adfdc: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x2adfdcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x2adfe0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2adfe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2adfe4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2adfe4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2adfe8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x2adfe8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2adfec: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2adfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2adff0: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x2adff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2adff4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2adff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2adff8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2adff8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2adffc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2adffcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2ae000: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2ae000u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2ae004: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2ae004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae008: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ae008u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ae00c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2ae00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2ae010: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2ae010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ae014: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2ae014u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2ae018: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2ae018u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ae01c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2ae01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ae020: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ae020u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ae024: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2ae024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2ae028: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE028u;
        // 0x2ae02c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE030u;
}
