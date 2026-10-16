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

// Function: sub_002A9A38
// Address: 0x2a9a38 - 0x2a9c08
void sub_002A9A38_0x2a9a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9A38_0x2a9a38");
#endif

    switch (ctx->pc) {
        case 0x2a9a50u: goto label_2a9a50;
        default: break;
    }

    ctx->pc = 0x2a9a38u;

    // 0x2a9a38: 0x94820054  lhu         $v0, 0x54($a0)
    ctx->pc = 0x2a9a38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2a9a3c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a9a3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a9a40: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2A9A40u;
    {
        const bool branch_taken_0x2a9a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9A40u;
        // 0x2a9a44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a40) {
            ctx->pc = 0x2A9B20u;
            goto label_2a9b20;
        }
    }
    ctx->pc = 0x2A9A48u;
    // 0x2a9a48: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x2a9a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2a9a4c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a9a4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9a50:
    // 0x2a9a50: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2a9a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9a54: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x2a9a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a9a58: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2a9a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a9a5c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2a9a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9a60: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2a9a60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2a9a64: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2a9a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a9a68: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2a9a68u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2a9a6c: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x2a9a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2a9a70: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x2a9a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9a74: 0xc4a70014  lwc1        $f7, 0x14($a1)
    ctx->pc = 0x2a9a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2a9a78: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2a9a78u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2a9a7c: 0xc4a50024  lwc1        $f5, 0x24($a1)
    ctx->pc = 0x2a9a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a9a80: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x2a9a80u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x2a9a84: 0xc4a80008  lwc1        $f8, 0x8($a1)
    ctx->pc = 0x2a9a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2a9a88: 0xc4aa0018  lwc1        $f10, 0x18($a1)
    ctx->pc = 0x2a9a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x2a9a8c: 0xc4a90028  lwc1        $f9, 0x28($a1)
    ctx->pc = 0x2a9a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2a9a90: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x2a9a90u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x2a9a94: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x2a9a94u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a9a98: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a9a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9a9c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2a9a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a9aa0: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2a9aa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2a9aa4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2a9aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9aa8: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x2a9aa8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2a9aac: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2a9aacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2a9ab0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a9ab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a9ab4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a9ab4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a9ab8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2a9ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a9abc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2a9abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9ac0: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2a9ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a9ac4: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x2a9ac4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x2a9ac8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2a9ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9acc: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x2a9accu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x2a9ad0: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x2a9ad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x2a9ad4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2a9ad4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2a9ad8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a9ad8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a9adc: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2a9adcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a9ae0: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x2a9ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9ae4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2a9ae4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2a9ae8: 0xe4640000  swc1        $f4, 0x0($v1)
    ctx->pc = 0x2a9ae8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2a9aec: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x2a9aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9af0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2a9af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9af4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2a9af4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a9af8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2a9af8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2a9afc: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2a9afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a9b00: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x2a9b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9b04: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2a9b04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2a9b08: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x2a9b08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2a9b0c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a9b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2a9b10: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x2a9b10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2a9b14: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x2A9B14u;
    {
        const bool branch_taken_0x2a9b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9B14u;
        // 0x2a9b18: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b14) {
            ctx->pc = 0x2A9A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a9a50;
        }
    }
    ctx->pc = 0x2A9B1Cu;
    // 0x2a9b1c: 0x0  nop
    ctx->pc = 0x2a9b1cu;
    // NOP
label_2a9b20:
    // 0x2a9b20: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x2a9b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a9b24: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x2a9b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a9b28: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2a9b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a9b2c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2a9b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a9b30: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2a9b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a9b34: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2a9b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2a9b38: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2a9b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a9b3c: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x2a9b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2a9b40: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2a9b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9b44: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x2a9b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a9b48: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2a9b48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2a9b4c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2a9b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a9b50: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2a9b50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2a9b54: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x2a9b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9b58: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2a9b58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2a9b5c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2a9b5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2a9b60: 0x460009c0  add.s       $f7, $f1, $f0
    ctx->pc = 0x2a9b60u;
    ctx->f[7] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a9b64: 0xe4870000  swc1        $f7, 0x0($a0)
    ctx->pc = 0x2a9b64u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2a9b68: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2a9b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9b6c: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x2a9b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a9b70: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2a9b70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2a9b74: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x2a9b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9b78: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2a9b78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2a9b7c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2a9b7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2a9b80: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2a9b80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2a9b84: 0x46000980  add.s       $f6, $f1, $f0
    ctx->pc = 0x2a9b84u;
    ctx->f[6] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a9b88: 0xe4860004  swc1        $f6, 0x4($a0)
    ctx->pc = 0x2a9b88u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2a9b8c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2a9b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9b90: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x2a9b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a9b94: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2a9b94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2a9b98: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x2a9b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9b9c: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2a9b9cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2a9ba0: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2a9ba0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2a9ba4: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2a9ba4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2a9ba8: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2a9ba8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2a9bac: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x2a9bacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2a9bb0: 0x94820054  lhu         $v0, 0x54($a0)
    ctx->pc = 0x2a9bb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2a9bb4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A9BB4u;
    {
        const bool branch_taken_0x2a9bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9bb4) {
            ctx->pc = 0x2A9BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9BB4u;
            // 0x2a9bb8: 0xc4a00030  lwc1        $f0, 0x30($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9BD8u;
            goto label_2a9bd8;
        }
    }
    ctx->pc = 0x2A9BBCu;
    // 0x2a9bbc: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x2a9bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2a9bc0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a9bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9bc4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2a9bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a9bc8: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x2a9bc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2a9bcc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A9BCCu;
    {
        const bool branch_taken_0x2a9bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9BCCu;
        // 0x2a9bd0: 0xc4410008  lwc1        $f1, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9bcc) {
            ctx->pc = 0x2A9BE4u;
            goto label_2a9be4;
        }
    }
    ctx->pc = 0x2A9BD4u;
    // 0x2a9bd4: 0x0  nop
    ctx->pc = 0x2a9bd4u;
    // NOP
label_2a9bd8:
    // 0x2a9bd8: 0xc4a20034  lwc1        $f2, 0x34($a1)
    ctx->pc = 0x2a9bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a9bdc: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x2a9bdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2a9be0: 0xc4a10038  lwc1        $f1, 0x38($a1)
    ctx->pc = 0x2a9be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a9be4:
    // 0x2a9be4: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x2a9be4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x2a9be8: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2a9be8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2a9bec: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a9becu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a9bf0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a9bf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a9bf4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2a9bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2a9bf8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a9bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9BFCu;
        // 0x2a9c00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9C04u;
    // 0x2a9c04: 0x0  nop
    ctx->pc = 0x2a9c04u;
    // NOP
    ctx->pc = 0x2a9c08u;
}
