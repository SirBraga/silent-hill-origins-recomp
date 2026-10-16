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

// Function: sub_002B5C08
// Address: 0x2b5c08 - 0x2b5d68
void sub_002B5C08_0x2b5c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5C08_0x2b5c08");
#endif

    ctx->pc = 0x2b5c08u;

    // 0x2b5c08: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b5c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b5c0c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2b5c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2b5c10: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2b5c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2b5c14: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x2b5c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2b5c18: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2b5c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2b5c1c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b5c1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c20: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2b5c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2b5c24: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2b5c24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c28: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2b5c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2b5c2c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2b5c2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c30: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2b5c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2b5c34: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2b5c34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c38: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2b5c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2b5c3c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2b5c3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c40: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2b5c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2b5c44: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x2b5c44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c48: 0x7fb70000  sq          $s7, 0x0($sp)
    ctx->pc = 0x2b5c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 23));
    // 0x2b5c4c: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x2b5c4cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c50: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x2b5c50u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c54: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x2b5c54u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c58: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b5c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5c5c: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x2b5c5cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b5c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b5c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c68: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2b5c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2b5c6c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b5c6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c70: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b5c70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c74: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b5c74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c78: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x2b5c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5c7c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2b5c7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c80: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2b5c80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c84: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2b5c84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c88: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2b5c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b5c8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b5c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c90: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x2b5c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5c94: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2b5c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b5c98: 0xc4e000c0  lwc1        $f0, 0xC0($a3)
    ctx->pc = 0x2b5c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5c9c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2b5c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2b5ca0: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x2b5ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5ca4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2b5ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2b5ca8: 0xc5210044  lwc1        $f1, 0x44($t1)
    ctx->pc = 0x2b5ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5cac: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x2b5cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2b5cb0: 0xc5400084  lwc1        $f0, 0x84($t2)
    ctx->pc = 0x2b5cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5cb4: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2b5cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2b5cb8: 0xc56100c4  lwc1        $f1, 0xC4($t3)
    ctx->pc = 0x2b5cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5cbc: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x2b5cbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2b5cc0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2b5cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5cc4: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2b5cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2b5cc8: 0xc5810048  lwc1        $f1, 0x48($t4)
    ctx->pc = 0x2b5cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5ccc: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x2b5cccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x2b5cd0: 0xc5a00088  lwc1        $f0, 0x88($t5)
    ctx->pc = 0x2b5cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5cd4: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x2b5cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x2b5cd8: 0xc5c100c8  lwc1        $f1, 0xC8($t6)
    ctx->pc = 0x2b5cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5cdc: 0xe481002c  swc1        $f1, 0x2C($a0)
    ctx->pc = 0x2b5cdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x2b5ce0: 0xc5e00010  lwc1        $f0, 0x10($t7)
    ctx->pc = 0x2b5ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5ce4: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x2b5ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x2b5ce8: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x2b5ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5cec: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2b5cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b5cf0: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x2b5cf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x2b5cf4: 0xc4400090  lwc1        $f0, 0x90($v0)
    ctx->pc = 0x2b5cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5cf8: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x2b5cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x2b5cfc: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x2b5cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5d00: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2b5d00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b5d04: 0xe481003c  swc1        $f1, 0x3C($a0)
    ctx->pc = 0x2b5d04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x2b5d08: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b5d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5d0c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2b5d0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b5d10: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x2b5d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x2b5d14: 0xc6610054  lwc1        $f1, 0x54($s3)
    ctx->pc = 0x2b5d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5d18: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2b5d18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b5d1c: 0xe4810044  swc1        $f1, 0x44($a0)
    ctx->pc = 0x2b5d1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x2b5d20: 0xc6800094  lwc1        $f0, 0x94($s4)
    ctx->pc = 0x2b5d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5d24: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2b5d24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b5d28: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x2b5d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x2b5d2c: 0xc6a100d4  lwc1        $f1, 0xD4($s5)
    ctx->pc = 0x2b5d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5d30: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2b5d30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5d34: 0xe481004c  swc1        $f1, 0x4C($a0)
    ctx->pc = 0x2b5d34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x2b5d38: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x2b5d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5d3c: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x2b5d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x2b5d40: 0xc6c10058  lwc1        $f1, 0x58($s6)
    ctx->pc = 0x2b5d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5d44: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2b5d44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5d48: 0xe4810054  swc1        $f1, 0x54($a0)
    ctx->pc = 0x2b5d48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x2b5d4c: 0xc6e00098  lwc1        $f0, 0x98($s7)
    ctx->pc = 0x2b5d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5d50: 0x7bb70000  lq          $s7, 0x0($sp)
    ctx->pc = 0x2b5d50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5d54: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x2b5d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x2b5d58: 0xc4a100d8  lwc1        $f1, 0xD8($a1)
    ctx->pc = 0x2b5d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5d5c: 0xe481005c  swc1        $f1, 0x5C($a0)
    ctx->pc = 0x2b5d5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x2b5d60: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D60u;
        // 0x2b5d64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5D68u;
}
