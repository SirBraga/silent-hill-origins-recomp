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

// Function: sub_002A4DB8
// Address: 0x2a4db8 - 0x2a53c0
void sub_002A4DB8_0x2a4db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4DB8_0x2a4db8");
#endif

    switch (ctx->pc) {
        case 0x2a4eb0u: goto label_2a4eb0;
        case 0x2a4f10u: goto label_2a4f10;
        case 0x2a4fe8u: goto label_2a4fe8;
        case 0x2a5174u: goto label_2a5174;
        default: break;
    }

    ctx->pc = 0x2a4db8u;

    // 0x2a4db8: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x2a4db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x2a4dbc: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x2a4dbcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x2a4dc0: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x2a4dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x2a4dc4: 0x27b90010  addiu       $t9, $sp, 0x10
    ctx->pc = 0x2a4dc4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a4dc8: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x2a4dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x2a4dcc: 0x27ae0030  addiu       $t6, $sp, 0x30
    ctx->pc = 0x2a4dccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a4dd0: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x2a4dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
    // 0x2a4dd4: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x2a4dd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a4dd8: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x2a4dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
    // 0x2a4ddc: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x2a4ddcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a4de0: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x2a4de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
    // 0x2a4de4: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x2a4de4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a4de8: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x2a4de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
    // 0x2a4dec: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x2a4decu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4df0: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x2a4df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
    // 0x2a4df4: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x2a4df4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4df8: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x2a4df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a4dfc: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x2a4dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a4e00: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2a4e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a4e04: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2a4e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4e08: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2a4e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4e0c: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x2a4e0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a4e10: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2a4e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2a4e14: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x2a4e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2a4e18: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x2a4e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a4e1c: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x2a4e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a4e20: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2a4e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2a4e24: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2a4e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4e28: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2a4e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4e2c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x2a4e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x2a4e30: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x2a4e30u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4e34: 0x68cd0007  ldl         $t5, 0x7($a2)
    ctx->pc = 0x2a4e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x2a4e38: 0x6ccd0000  ldr         $t5, 0x0($a2)
    ctx->pc = 0x2a4e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x2a4e3c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2a4e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2a4e40: 0xb3ad0027  sdl         $t5, 0x27($sp)
    ctx->pc = 0x2a4e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4e44: 0xb7ad0020  sdr         $t5, 0x20($sp)
    ctx->pc = 0x2a4e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4e48: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2a4e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x2a4e4c: 0x68e50007  ldl         $a1, 0x7($a3)
    ctx->pc = 0x2a4e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2a4e50: 0x6ce50000  ldr         $a1, 0x0($a3)
    ctx->pc = 0x2a4e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2a4e54: 0x68e6000f  ldl         $a2, 0xF($a3)
    ctx->pc = 0x2a4e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2a4e58: 0x6ce60008  ldr         $a2, 0x8($a3)
    ctx->pc = 0x2a4e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2a4e5c: 0x8cec0010  lw          $t4, 0x10($a3)
    ctx->pc = 0x2a4e5cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2a4e60: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x2a4e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4e64: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x2a4e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4e68: 0xb3a6003f  sdl         $a2, 0x3F($sp)
    ctx->pc = 0x2a4e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4e6c: 0xb7a60038  sdr         $a2, 0x38($sp)
    ctx->pc = 0x2a4e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4e70: 0xafac0040  sw          $t4, 0x40($sp)
    ctx->pc = 0x2a4e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 12));
    // 0x2a4e74: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x2a4e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a4e78: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x2a4e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a4e7c: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x2a4e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2a4e80: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x2a4e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4e84: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x2a4e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4e88: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x2a4e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x2a4e8c: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x2a4e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2a4e90: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x2a4e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2a4e94: 0x8d2c0008  lw          $t4, 0x8($t1)
    ctx->pc = 0x2a4e94u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2a4e98: 0xb3a60067  sdl         $a2, 0x67($sp)
    ctx->pc = 0x2a4e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4e9c: 0xb7a60060  sdr         $a2, 0x60($sp)
    ctx->pc = 0x2a4e9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a4ea0: 0xafac0068  sw          $t4, 0x68($sp)
    ctx->pc = 0x2a4ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 12));
    // 0x2a4ea4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2a4ea4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4ea8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2a4ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a4eac: 0x0  nop
    ctx->pc = 0x2a4eacu;
    // NOP
label_2a4eb0:
    // 0x2a4eb0: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x2a4eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a4eb4: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x2a4eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2a4eb8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2a4eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a4ebc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a4ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4ec0: 0x108f0133  beq         $a0, $t7, . + 4 + (0x133 << 2)
    ctx->pc = 0x2A4EC0u;
    {
        const bool branch_taken_0x2a4ec0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x2A4EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4EC0u;
        // 0x2a4ec4: 0x246b0001  addiu       $t3, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4ec0) {
            ctx->pc = 0x2A5390u;
            goto label_2a5390;
        }
    }
    ctx->pc = 0x2A4EC8u;
    // 0x2a4ec8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a4ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a4ecc: 0x44880  sll         $t1, $a0, 2
    ctx->pc = 0x2a4eccu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a4ed0: 0x8dc30010  lw          $v1, 0x10($t6)
    ctx->pc = 0x2a4ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x2a4ed4: 0x3c187000  lui         $t8, 0x7000
    ctx->pc = 0x2a4ed4u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)28672 << 16));
    // 0x2a4ed8: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x2a4ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x2a4edc: 0x154080  sll         $t0, $s5, 2
    ctx->pc = 0x2a4edcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2a4ee0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2a4ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a4ee4: 0x2467ffff  addiu       $a3, $v1, -0x1
    ctx->pc = 0x2a4ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2a4ee8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2a4ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4eec: 0x10ef000e  beq         $a3, $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x2A4EECu;
    {
        const bool branch_taken_0x2a4eec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 15));
        ctx->pc = 0x2A4EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4EECu;
        // 0x2a4ef0: 0x27ad00c0  addiu       $t5, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4eec) {
            ctx->pc = 0x2A4F28u;
            goto label_2a4f28;
        }
    }
    ctx->pc = 0x2A4EF4u;
    // 0x2a4ef4: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2a4ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2a4ef8: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x2a4ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x2a4efc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2a4efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a4f00: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2a4f00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a4f04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A4F04u;
    {
        const bool branch_taken_0x2a4f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4F04u;
        // 0x2a4f08: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4f04) {
            ctx->pc = 0x2A4F28u;
            goto label_2a4f28;
        }
    }
    ctx->pc = 0x2A4F0Cu;
    // 0x2a4f0c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2a4f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_2a4f10:
    // 0x2a4f10: 0x10e40005  beq         $a3, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4F10u;
    {
        const bool branch_taken_0x2a4f10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x2A4F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4F10u;
        // 0x2a4f14: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4f10) {
            ctx->pc = 0x2A4F28u;
            goto label_2a4f28;
        }
    }
    ctx->pc = 0x2A4F18u;
    // 0x2a4f18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2a4f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a4f1c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2a4f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a4f20: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A4F20u;
    {
        const bool branch_taken_0x2a4f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4f20) {
            ctx->pc = 0x2A4F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4F20u;
            // 0x2a4f24: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4f10;
        }
    }
    ctx->pc = 0x2A4F28u;
label_2a4f28:
    // 0x2a4f28: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2a4f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2a4f2c: 0x72300  sll         $a0, $a3, 12
    ctx->pc = 0x2a4f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 12));
    // 0x2a4f30: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x2a4f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x2a4f34: 0x3042021  addu        $a0, $t8, $a0
    ctx->pc = 0x2a4f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x2a4f38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2a4f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a4f3c: 0x8dc50010  lw          $a1, 0x10($t6)
    ctx->pc = 0x2a4f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x2a4f40: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x2a4f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2a4f44: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x2a4f44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a4f48: 0x24a7ffff  addiu       $a3, $a1, -0x1
    ctx->pc = 0x2a4f48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2a4f4c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2a4f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a4f50: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x2a4f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2a4f54: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2a4f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2a4f58: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2a4f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4f5c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2a4f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2a4f60: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2a4f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f64: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2a4f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f68: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x2a4f68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x2a4f6c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2a4f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4f70: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x2a4f70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2a4f74: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2a4f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4f78: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2a4f78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2a4f7c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2a4f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2a4f80: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2a4f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4f84: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x2a4f84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x2a4f88: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x2a4f88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2a4f8c: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x2a4f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4f90: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2a4f90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2a4f94: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2a4f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2a4f98: 0xc4c10040  lwc1        $f1, 0x40($a2)
    ctx->pc = 0x2a4f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4f9c: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x2a4f9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x2a4fa0: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x2a4fa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2a4fa4: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x2a4fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4fa8: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2a4fa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2a4fac: 0x10ef0015  beq         $a3, $t7, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A4FACu;
    {
        const bool branch_taken_0x2a4fac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 15));
        ctx->pc = 0x2A4FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4FACu;
        // 0x2a4fb0: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4fac) {
            ctx->pc = 0x2A5004u;
            goto label_2a5004;
        }
    }
    ctx->pc = 0x2A4FB4u;
    // 0x2a4fb4: 0x8f240000  lw          $a0, 0x0($t9)
    ctx->pc = 0x2a4fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x2a4fb8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2a4fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2a4fbc: 0x1c22821  addu        $a1, $t6, $v0
    ctx->pc = 0x2a4fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x2a4fc0: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x2a4fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2a4fc4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a4fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a4fc8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a4fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a4fcc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2a4fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a4fd0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A4FD0u;
    {
        const bool branch_taken_0x2a4fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4FD0u;
        // 0x2a4fd4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4fd0) {
            ctx->pc = 0x2A5004u;
            goto label_2a5004;
        }
    }
    ctx->pc = 0x2A4FD8u;
    // 0x2a4fd8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a4fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4fdc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a4fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a4fe0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2a4fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2a4fe4: 0x0  nop
    ctx->pc = 0x2a4fe4u;
    // NOP
label_2a4fe8:
    // 0x2a4fe8: 0x10e50006  beq         $a3, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A4FE8u;
    {
        const bool branch_taken_0x2a4fe8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x2A4FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4FE8u;
        // 0x2a4fec: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4fe8) {
            ctx->pc = 0x2A5004u;
            goto label_2a5004;
        }
    }
    ctx->pc = 0x2A4FF0u;
    // 0x2a4ff0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a4ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a4ff4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2a4ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a4ff8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2a4ff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a4ffc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A4FFCu;
    {
        const bool branch_taken_0x2a4ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4ffc) {
            ctx->pc = 0x2A5000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4FFCu;
            // 0x2a5000: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4fe8;
        }
    }
    ctx->pc = 0x2A5004u;
label_2a5004:
    // 0x2a5004: 0x8f250000  lw          $a1, 0x0($t9)
    ctx->pc = 0x2a5004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x2a5008: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2a5008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2a500c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2a500cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2a5010: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x2a5010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x2a5014: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x2a5014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x2a5018: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2a5018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a501c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2a501cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a5020: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x2a5020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2a5024: 0x8c8c0000  lw          $t4, 0x0($a0)
    ctx->pc = 0x2a5024u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a5028: 0x71b00  sll         $v1, $a3, 12
    ctx->pc = 0x2a5028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 12));
    // 0x2a502c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2a502cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a5030: 0x3031821  addu        $v1, $t8, $v1
    ctx->pc = 0x2a5030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 3)));
    // 0x2a5034: 0x502018  mult        $a0, $v0, $s0
    ctx->pc = 0x2a5034u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a5038: 0xafac00a4  sw          $t4, 0xA4($sp)
    ctx->pc = 0x2a5038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 12));
    // 0x2a503c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a503cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a5040: 0xafac00a8  sw          $t4, 0xA8($sp)
    ctx->pc = 0x2a5040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 12));
    // 0x2a5044: 0x24420f00  addiu       $v0, $v0, 0xF00
    ctx->pc = 0x2a5044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3840));
    // 0x2a5048: 0xafac0074  sw          $t4, 0x74($sp)
    ctx->pc = 0x2a5048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 12));
    // 0x2a504c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2a504cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a5050: 0xc2880  sll         $a1, $t4, 2
    ctx->pc = 0x2a5050u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x2a5054: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a5054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a5058: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2a5058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x2a505c: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x2a505cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x2a5060: 0x6a830007  ldl         $v1, 0x7($s4)
    ctx->pc = 0x2a5060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2a5064: 0x6e830000  ldr         $v1, 0x0($s4)
    ctx->pc = 0x2a5064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2a5068: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x2a5068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2a506c: 0xb3a300b7  sdl         $v1, 0xB7($sp)
    ctx->pc = 0x2a506cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5070: 0xb7a300b0  sdr         $v1, 0xB0($sp)
    ctx->pc = 0x2a5070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a5074: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x2a5074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x2a5078: 0x6ba30087  ldl         $v1, 0x87($sp)
    ctx->pc = 0x2a5078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2a507c: 0x6fa30080  ldr         $v1, 0x80($sp)
    ctx->pc = 0x2a507cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2a5080: 0x6ba4008f  ldl         $a0, 0x8F($sp)
    ctx->pc = 0x2a5080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2a5084: 0x6fa40088  ldr         $a0, 0x88($sp)
    ctx->pc = 0x2a5084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2a5088: 0x6ba60097  ldl         $a2, 0x97($sp)
    ctx->pc = 0x2a5088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2a508c: 0x6fa60090  ldr         $a2, 0x90($sp)
    ctx->pc = 0x2a508cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2a5090: 0x6ba2009f  ldl         $v0, 0x9F($sp)
    ctx->pc = 0x2a5090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a5094: 0x6fa20098  ldr         $v0, 0x98($sp)
    ctx->pc = 0x2a5094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a5098: 0xb3a300c7  sdl         $v1, 0xC7($sp)
    ctx->pc = 0x2a5098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a509c: 0xb7a300c0  sdr         $v1, 0xC0($sp)
    ctx->pc = 0x2a509cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a50a0: 0xb3a400cf  sdl         $a0, 0xCF($sp)
    ctx->pc = 0x2a50a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a50a4: 0xb7a400c8  sdr         $a0, 0xC8($sp)
    ctx->pc = 0x2a50a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a50a8: 0xb3a600d7  sdl         $a2, 0xD7($sp)
    ctx->pc = 0x2a50a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a50ac: 0xb7a600d0  sdr         $a2, 0xD0($sp)
    ctx->pc = 0x2a50acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a50b0: 0xb3a200df  sdl         $v0, 0xDF($sp)
    ctx->pc = 0x2a50b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a50b4: 0xb7a200d8  sdr         $v0, 0xD8($sp)
    ctx->pc = 0x2a50b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a50b8: 0x6ba300a7  ldl         $v1, 0xA7($sp)
    ctx->pc = 0x2a50b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2a50bc: 0x6fa300a0  ldr         $v1, 0xA0($sp)
    ctx->pc = 0x2a50bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2a50c0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x2a50c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a50c4: 0xb3a300e7  sdl         $v1, 0xE7($sp)
    ctx->pc = 0x2a50c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a50c8: 0xb7a300e0  sdr         $v1, 0xE0($sp)
    ctx->pc = 0x2a50c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a50cc: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x2a50ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
    // 0x2a50d0: 0x6ba30077  ldl         $v1, 0x77($sp)
    ctx->pc = 0x2a50d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2a50d4: 0x6fa30070  ldr         $v1, 0x70($sp)
    ctx->pc = 0x2a50d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2a50d8: 0xb3a30127  sdl         $v1, 0x127($sp)
    ctx->pc = 0x2a50d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a50dc: 0xb7a30120  sdr         $v1, 0x120($sp)
    ctx->pc = 0x2a50dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a50e0: 0x8fa700e0  lw          $a3, 0xE0($sp)
    ctx->pc = 0x2a50e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a50e4: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x2a50e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2a50e8: 0xe54821  addu        $t1, $a3, $a1
    ctx->pc = 0x2a50e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2a50ec: 0xd9a20000  lqc2        $vf2, 0x0($t5)
    ctx->pc = 0x2a50ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2a50f0: 0xd9a30010  lqc2        $vf3, 0x10($t5)
    ctx->pc = 0x2a50f0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x2a50f4: 0x10e9001d  beq         $a3, $t1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2A50F4u;
    {
        const bool branch_taken_0x2a50f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x2a50f4) {
            ctx->pc = 0x2A516Cu;
            goto label_2a516c;
        }
    }
    ctx->pc = 0x2A50FCu;
    // 0x2a50fc: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x2a50fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a5100: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2a5100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2a5104: 0x48c80800  ctc2.ni     $t0, $vi1
    ctx->pc = 0x2a5104u;
    ctx->vi[1] = static_cast<uint16_t>(GPR_U32(ctx, 8));
    // 0x2a5108: 0x10e90018  beq         $a3, $t1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A5108u;
    {
        const bool branch_taken_0x2a5108 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x2a5108) {
            ctx->pc = 0x2A516Cu;
            goto label_2a516c;
        }
    }
    ctx->pc = 0x2A5110u;
    // 0x2a5110: 0x4a000038  vcallms     0x0
    ctx->pc = 0x2a5110u;
    {     ctx->vu0_tpc = 0x0;     runtime->executeVU0Microprogram(rdram, ctx, 0x0); }
    // 0x2a5114: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x2a5114u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a5118: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x2a5118u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a511c: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x2a511cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2a5120: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2a5120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2a5124: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x2a5124u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2a5128: 0xd8c70030  lqc2        $vf7, 0x30($a2)
    ctx->pc = 0x2a5128u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2a512c: 0x48c81000  ctc2.ni     $t0, $vi2
    ctx->pc = 0x2a512cu;
    ctx->vi[2] = static_cast<uint16_t>(GPR_U32(ctx, 8));
    // 0x2a5130: 0xd8c80040  lqc2        $vf8, 0x40($a2)
    ctx->pc = 0x2a5130u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x2a5134: 0xd8c90050  lqc2        $vf9, 0x50($a2)
    ctx->pc = 0x2a5134u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x2a5138: 0x10e9000c  beq         $a3, $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x2A5138u;
    {
        const bool branch_taken_0x2a5138 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        ctx->pc = 0x2A513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5138u;
        // 0x2a513c: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5138) {
            ctx->pc = 0x2A516Cu;
            goto label_2a516c;
        }
    }
    ctx->pc = 0x2A5140u;
    // 0x2a5140: 0x4a0000b8  vcallms     0x10
    ctx->pc = 0x2a5140u;
    {     ctx->vu0_tpc = 0x10;     runtime->executeVU0Microprogram(rdram, ctx, 0x10); }
    // 0x2a5144: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x2a5144u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a5148: 0xd8cb0000  lqc2        $vf11, 0x0($a2)
    ctx->pc = 0x2a5148u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a514c: 0xd8cc0010  lqc2        $vf12, 0x10($a2)
    ctx->pc = 0x2a514cu;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2a5150: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2a5150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2a5154: 0xd8cd0020  lqc2        $vf13, 0x20($a2)
    ctx->pc = 0x2a5154u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2a5158: 0xd8ce0030  lqc2        $vf14, 0x30($a2)
    ctx->pc = 0x2a5158u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2a515c: 0x48c81800  ctc2.ni     $t0, $vi3
    ctx->pc = 0x2a515cu;
    ctx->vi[3] = static_cast<uint16_t>(GPR_U32(ctx, 8));
    // 0x2a5160: 0xd8cf0040  lqc2        $vf15, 0x40($a2)
    ctx->pc = 0x2a5160u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x2a5164: 0xd8d00050  lqc2        $vf16, 0x50($a2)
    ctx->pc = 0x2a5164u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x2a5168: 0x24c60060  addiu       $a2, $a2, 0x60
    ctx->pc = 0x2a5168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
label_2a516c:
    // 0x2a516c: 0x10e90031  beq         $a3, $t1, . + 4 + (0x31 << 2)
    ctx->pc = 0x2A516Cu;
    {
        const bool branch_taken_0x2a516c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x2a516c) {
            ctx->pc = 0x2A5234u;
            goto label_2a5234;
        }
    }
    ctx->pc = 0x2A5174u;
label_2a5174:
    // 0x2a5174: 0x4a000278  vcallms     0x48
    ctx->pc = 0x2a5174u;
    {     ctx->vu0_tpc = 0x48;     runtime->executeVU0Microprogram(rdram, ctx, 0x48); }
    // 0x2a5178: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x2a5178u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a517c: 0xd8d20000  lqc2        $vf18, 0x0($a2)
    ctx->pc = 0x2a517cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a5180: 0xd8d30010  lqc2        $vf19, 0x10($a2)
    ctx->pc = 0x2a5180u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2a5184: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2a5184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2a5188: 0xd8d40020  lqc2        $vf20, 0x20($a2)
    ctx->pc = 0x2a5188u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2a518c: 0xd8d50030  lqc2        $vf21, 0x30($a2)
    ctx->pc = 0x2a518cu;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2a5190: 0x48c82000  ctc2.ni     $t0, $vi4
    ctx->pc = 0x2a5190u;
    ctx->vi[4] = static_cast<uint16_t>(GPR_U32(ctx, 8));
    // 0x2a5194: 0xd8d60040  lqc2        $vf22, 0x40($a2)
    ctx->pc = 0x2a5194u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x2a5198: 0xd8d70050  lqc2        $vf23, 0x50($a2)
    ctx->pc = 0x2a5198u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x2a519c: 0x10e90025  beq         $a3, $t1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2A519Cu;
    {
        const bool branch_taken_0x2a519c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        ctx->pc = 0x2A51A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A519Cu;
        // 0x2a51a0: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a519c) {
            ctx->pc = 0x2A5234u;
            goto label_2a5234;
        }
    }
    ctx->pc = 0x2A51A4u;
    // 0x2a51a4: 0x4a000438  vcallms     0x80
    ctx->pc = 0x2a51a4u;
    {     ctx->vu0_tpc = 0x80;     runtime->executeVU0Microprogram(rdram, ctx, 0x80); }
    // 0x2a51a8: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x2a51a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a51ac: 0xd8d90000  lqc2        $vf25, 0x0($a2)
    ctx->pc = 0x2a51acu;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a51b0: 0xd8da0010  lqc2        $vf26, 0x10($a2)
    ctx->pc = 0x2a51b0u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2a51b4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2a51b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2a51b8: 0xd8db0020  lqc2        $vf27, 0x20($a2)
    ctx->pc = 0x2a51b8u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2a51bc: 0xd8dc0030  lqc2        $vf28, 0x30($a2)
    ctx->pc = 0x2a51bcu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2a51c0: 0x48c80800  ctc2.ni     $t0, $vi1
    ctx->pc = 0x2a51c0u;
    ctx->vi[1] = static_cast<uint16_t>(GPR_U32(ctx, 8));
    // 0x2a51c4: 0xd8dd0040  lqc2        $vf29, 0x40($a2)
    ctx->pc = 0x2a51c4u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x2a51c8: 0xd8de0050  lqc2        $vf30, 0x50($a2)
    ctx->pc = 0x2a51c8u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x2a51cc: 0x10e90019  beq         $a3, $t1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2A51CCu;
    {
        const bool branch_taken_0x2a51cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        ctx->pc = 0x2A51D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A51CCu;
        // 0x2a51d0: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a51cc) {
            ctx->pc = 0x2A5234u;
            goto label_2a5234;
        }
    }
    ctx->pc = 0x2A51D4u;
    // 0x2a51d4: 0x4a0005f8  vcallms     0xB8
    ctx->pc = 0x2a51d4u;
    {     ctx->vu0_tpc = 0xB8;     runtime->executeVU0Microprogram(rdram, ctx, 0xB8); }
    // 0x2a51d8: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x2a51d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a51dc: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x2a51dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a51e0: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x2a51e0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2a51e4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2a51e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2a51e8: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x2a51e8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2a51ec: 0xd8c70030  lqc2        $vf7, 0x30($a2)
    ctx->pc = 0x2a51ecu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2a51f0: 0x48c81000  ctc2.ni     $t0, $vi2
    ctx->pc = 0x2a51f0u;
    ctx->vi[2] = static_cast<uint16_t>(GPR_U32(ctx, 8));
    // 0x2a51f4: 0xd8c80040  lqc2        $vf8, 0x40($a2)
    ctx->pc = 0x2a51f4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x2a51f8: 0xd8c90050  lqc2        $vf9, 0x50($a2)
    ctx->pc = 0x2a51f8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x2a51fc: 0x10e9000d  beq         $a3, $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A51FCu;
    {
        const bool branch_taken_0x2a51fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        ctx->pc = 0x2A5200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A51FCu;
        // 0x2a5200: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a51fc) {
            ctx->pc = 0x2A5234u;
            goto label_2a5234;
        }
    }
    ctx->pc = 0x2A5204u;
    // 0x2a5204: 0x4a0007b8  vcallms     0xF0
    ctx->pc = 0x2a5204u;
    {     ctx->vu0_tpc = 0xF0;     runtime->executeVU0Microprogram(rdram, ctx, 0xF0); }
    // 0x2a5208: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x2a5208u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2a520c: 0xd8cb0000  lqc2        $vf11, 0x0($a2)
    ctx->pc = 0x2a520cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a5210: 0xd8cc0010  lqc2        $vf12, 0x10($a2)
    ctx->pc = 0x2a5210u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2a5214: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2a5214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2a5218: 0xd8cd0020  lqc2        $vf13, 0x20($a2)
    ctx->pc = 0x2a5218u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2a521c: 0xd8ce0030  lqc2        $vf14, 0x30($a2)
    ctx->pc = 0x2a521cu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2a5220: 0x48c81800  ctc2.ni     $t0, $vi3
    ctx->pc = 0x2a5220u;
    ctx->vi[3] = static_cast<uint16_t>(GPR_U32(ctx, 8));
    // 0x2a5224: 0xd8cf0040  lqc2        $vf15, 0x40($a2)
    ctx->pc = 0x2a5224u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x2a5228: 0xd8d00050  lqc2        $vf16, 0x50($a2)
    ctx->pc = 0x2a5228u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x2a522c: 0x14e9ffd1  bne         $a3, $t1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x2A522Cu;
    {
        const bool branch_taken_0x2a522c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x2A5230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A522Cu;
        // 0x2a5230: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a522c) {
            ctx->pc = 0x2A5174u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5174;
        }
    }
    ctx->pc = 0x2A5234u;
label_2a5234:
    // 0x2a5234: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2a5234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5238: 0x1585000c  bne         $t4, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2A5238u;
    {
        const bool branch_taken_0x2a5238 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 5));
        ctx->pc = 0x2A523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5238u;
        // 0x2a523c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5238) {
            ctx->pc = 0x2A526Cu;
            goto label_2a526c;
        }
    }
    ctx->pc = 0x2A5240u;
    // 0x2a5240: 0x4a000978  vcallms     0x128
    ctx->pc = 0x2a5240u;
    {     ctx->vu0_tpc = 0x128;     runtime->executeVU0Microprogram(rdram, ctx, 0x128); }
    // 0x2a5244: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x2a5244u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a5248: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x2a5248u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2a524c: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x2a524cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2a5250: 0xd8c70030  lqc2        $vf7, 0x30($a2)
    ctx->pc = 0x2a5250u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2a5254: 0xd8c80040  lqc2        $vf8, 0x40($a2)
    ctx->pc = 0x2a5254u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x2a5258: 0xd8c90050  lqc2        $vf9, 0x50($a2)
    ctx->pc = 0x2a5258u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x2a525c: 0x4a0009f8  vcallms     0x138
    ctx->pc = 0x2a525cu;
    {     ctx->vu0_tpc = 0x138;     runtime->executeVU0Microprogram(rdram, ctx, 0x138); }
    // 0x2a5260: 0x4a0002ff  vnop
    ctx->pc = 0x2a5260u;
    // NOP operation, no action needed for VU0
    // 0x2a5264: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2A5264u;
    {
        const bool branch_taken_0x2a5264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5264u;
        // 0x2a5268: 0x160182d  daddu       $v1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5264) {
            ctx->pc = 0x2A5394u;
            goto label_2a5394;
        }
    }
    ctx->pc = 0x2A526Cu;
label_2a526c:
    // 0x2a526c: 0x1584000c  bne         $t4, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2A526Cu;
    {
        const bool branch_taken_0x2a526c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 4));
        ctx->pc = 0x2A5270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A526Cu;
        // 0x2a5270: 0x29820003  slti        $v0, $t4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a526c) {
            ctx->pc = 0x2A52A0u;
            goto label_2a52a0;
        }
    }
    ctx->pc = 0x2A5274u;
    // 0x2a5274: 0x4a000cf8  vcallms     0x198
    ctx->pc = 0x2a5274u;
    {     ctx->vu0_tpc = 0x198;     runtime->executeVU0Microprogram(rdram, ctx, 0x198); }
    // 0x2a5278: 0xd8cb0000  lqc2        $vf11, 0x0($a2)
    ctx->pc = 0x2a5278u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a527c: 0xd8cc0010  lqc2        $vf12, 0x10($a2)
    ctx->pc = 0x2a527cu;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2a5280: 0xd8cd0020  lqc2        $vf13, 0x20($a2)
    ctx->pc = 0x2a5280u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2a5284: 0xd8ce0030  lqc2        $vf14, 0x30($a2)
    ctx->pc = 0x2a5284u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2a5288: 0xd8cf0040  lqc2        $vf15, 0x40($a2)
    ctx->pc = 0x2a5288u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x2a528c: 0xd8d00050  lqc2        $vf16, 0x50($a2)
    ctx->pc = 0x2a528cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x2a5290: 0x4a000eb8  vcallms     0x1D0
    ctx->pc = 0x2a5290u;
    {     ctx->vu0_tpc = 0x1D0;     runtime->executeVU0Microprogram(rdram, ctx, 0x1D0); }
    // 0x2a5294: 0x4a0002ff  vnop
    ctx->pc = 0x2a5294u;
    // NOP operation, no action needed for VU0
    // 0x2a5298: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2A5298u;
    {
        const bool branch_taken_0x2a5298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5298u;
        // 0x2a529c: 0x160182d  daddu       $v1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5298) {
            ctx->pc = 0x2A5394u;
            goto label_2a5394;
        }
    }
    ctx->pc = 0x2A52A0u;
label_2a52a0:
    // 0x2a52a0: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2A52A0u;
    {
        const bool branch_taken_0x2a52a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A52A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A52A0u;
        // 0x2a52a4: 0x160182d  daddu       $v1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a52a0) {
            ctx->pc = 0x2A5394u;
            goto label_2a5394;
        }
    }
    ctx->pc = 0x2A52A8u;
    // 0x2a52a8: 0x31820003  andi        $v0, $t4, 0x3
    ctx->pc = 0x2a52a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
    // 0x2a52ac: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A52ACu;
    {
        const bool branch_taken_0x2a52ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A52B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A52ACu;
        // 0x2a52b0: 0x25820003  addiu       $v0, $t4, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a52ac) {
            ctx->pc = 0x2A52E4u;
            goto label_2a52e4;
        }
    }
    ctx->pc = 0x2A52B4u;
    // 0x2a52b4: 0x4a000438  vcallms     0x80
    ctx->pc = 0x2a52b4u;
    {     ctx->vu0_tpc = 0x80;     runtime->executeVU0Microprogram(rdram, ctx, 0x80); }
    // 0x2a52b8: 0xd8d90000  lqc2        $vf25, 0x0($a2)
    ctx->pc = 0x2a52b8u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a52bc: 0xd8da0010  lqc2        $vf26, 0x10($a2)
    ctx->pc = 0x2a52bcu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2a52c0: 0xd8db0020  lqc2        $vf27, 0x20($a2)
    ctx->pc = 0x2a52c0u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2a52c4: 0xd8dc0030  lqc2        $vf28, 0x30($a2)
    ctx->pc = 0x2a52c4u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2a52c8: 0xd8dd0040  lqc2        $vf29, 0x40($a2)
    ctx->pc = 0x2a52c8u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x2a52cc: 0xd8de0050  lqc2        $vf30, 0x50($a2)
    ctx->pc = 0x2a52ccu;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x2a52d0: 0x4a0005f8  vcallms     0xB8
    ctx->pc = 0x2a52d0u;
    {     ctx->vu0_tpc = 0xB8;     runtime->executeVU0Microprogram(rdram, ctx, 0xB8); }
    // 0x2a52d4: 0x4a0007b8  vcallms     0xF0
    ctx->pc = 0x2a52d4u;
    {     ctx->vu0_tpc = 0xF0;     runtime->executeVU0Microprogram(rdram, ctx, 0xF0); }
    // 0x2a52d8: 0x4a0002ff  vnop
    ctx->pc = 0x2a52d8u;
    // NOP operation, no action needed for VU0
    // 0x2a52dc: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2A52DCu;
    {
        const bool branch_taken_0x2a52dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A52E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A52DCu;
        // 0x2a52e0: 0x160182d  daddu       $v1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a52dc) {
            ctx->pc = 0x2A5394u;
            goto label_2a5394;
        }
    }
    ctx->pc = 0x2A52E4u;
label_2a52e4:
    // 0x2a52e4: 0x1ec182a  slt         $v1, $t7, $t4
    ctx->pc = 0x2a52e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x2a52e8: 0x183100b  movn        $v0, $t4, $v1
    ctx->pc = 0x2a52e8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12));
    // 0x2a52ec: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2a52ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2a52f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a52f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a52f4: 0x1821023  subu        $v0, $t4, $v0
    ctx->pc = 0x2a52f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x2a52f8: 0x1445000d  bne         $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A52F8u;
    {
        const bool branch_taken_0x2a52f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2a52f8) {
            ctx->pc = 0x2A5330u;
            goto label_2a5330;
        }
    }
    ctx->pc = 0x2A5300u;
    // 0x2a5300: 0x4a0005f8  vcallms     0xB8
    ctx->pc = 0x2a5300u;
    {     ctx->vu0_tpc = 0xB8;     runtime->executeVU0Microprogram(rdram, ctx, 0xB8); }
    // 0x2a5304: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x2a5304u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a5308: 0xd8c50010  lqc2        $vf5, 0x10($a2)
    ctx->pc = 0x2a5308u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2a530c: 0xd8c60020  lqc2        $vf6, 0x20($a2)
    ctx->pc = 0x2a530cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2a5310: 0xd8c70030  lqc2        $vf7, 0x30($a2)
    ctx->pc = 0x2a5310u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2a5314: 0xd8c80040  lqc2        $vf8, 0x40($a2)
    ctx->pc = 0x2a5314u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x2a5318: 0xd8c90050  lqc2        $vf9, 0x50($a2)
    ctx->pc = 0x2a5318u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x2a531c: 0x4a0007b8  vcallms     0xF0
    ctx->pc = 0x2a531cu;
    {     ctx->vu0_tpc = 0xF0;     runtime->executeVU0Microprogram(rdram, ctx, 0xF0); }
    // 0x2a5320: 0x4a000278  vcallms     0x48
    ctx->pc = 0x2a5320u;
    {     ctx->vu0_tpc = 0x48;     runtime->executeVU0Microprogram(rdram, ctx, 0x48); }
    // 0x2a5324: 0x4a0002ff  vnop
    ctx->pc = 0x2a5324u;
    // NOP operation, no action needed for VU0
    // 0x2a5328: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2A5328u;
    {
        const bool branch_taken_0x2a5328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5328u;
        // 0x2a532c: 0x160182d  daddu       $v1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5328) {
            ctx->pc = 0x2A5394u;
            goto label_2a5394;
        }
    }
    ctx->pc = 0x2A5330u;
label_2a5330:
    // 0x2a5330: 0x1444000d  bne         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A5330u;
    {
        const bool branch_taken_0x2a5330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2a5330) {
            ctx->pc = 0x2A5368u;
            goto label_2a5368;
        }
    }
    ctx->pc = 0x2A5338u;
    // 0x2a5338: 0x4a0007b8  vcallms     0xF0
    ctx->pc = 0x2a5338u;
    {     ctx->vu0_tpc = 0xF0;     runtime->executeVU0Microprogram(rdram, ctx, 0xF0); }
    // 0x2a533c: 0xd8cb0000  lqc2        $vf11, 0x0($a2)
    ctx->pc = 0x2a533cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a5340: 0xd8cc0010  lqc2        $vf12, 0x10($a2)
    ctx->pc = 0x2a5340u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2a5344: 0xd8cd0020  lqc2        $vf13, 0x20($a2)
    ctx->pc = 0x2a5344u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2a5348: 0xd8ce0030  lqc2        $vf14, 0x30($a2)
    ctx->pc = 0x2a5348u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2a534c: 0xd8cf0040  lqc2        $vf15, 0x40($a2)
    ctx->pc = 0x2a534cu;
    ctx->vu0_vf[15] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x2a5350: 0xd8d00050  lqc2        $vf16, 0x50($a2)
    ctx->pc = 0x2a5350u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x2a5354: 0x4a000278  vcallms     0x48
    ctx->pc = 0x2a5354u;
    {     ctx->vu0_tpc = 0x48;     runtime->executeVU0Microprogram(rdram, ctx, 0x48); }
    // 0x2a5358: 0x4a000438  vcallms     0x80
    ctx->pc = 0x2a5358u;
    {     ctx->vu0_tpc = 0x80;     runtime->executeVU0Microprogram(rdram, ctx, 0x80); }
    // 0x2a535c: 0x4a0002ff  vnop
    ctx->pc = 0x2a535cu;
    // NOP operation, no action needed for VU0
    // 0x2a5360: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2A5360u;
    {
        const bool branch_taken_0x2a5360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5360u;
        // 0x2a5364: 0x160182d  daddu       $v1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5360) {
            ctx->pc = 0x2A5394u;
            goto label_2a5394;
        }
    }
    ctx->pc = 0x2A5368u;
label_2a5368:
    // 0x2a5368: 0x4a000278  vcallms     0x48
    ctx->pc = 0x2a5368u;
    {     ctx->vu0_tpc = 0x48;     runtime->executeVU0Microprogram(rdram, ctx, 0x48); }
    // 0x2a536c: 0xd8d20000  lqc2        $vf18, 0x0($a2)
    ctx->pc = 0x2a536cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a5370: 0xd8d30010  lqc2        $vf19, 0x10($a2)
    ctx->pc = 0x2a5370u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2a5374: 0xd8d40020  lqc2        $vf20, 0x20($a2)
    ctx->pc = 0x2a5374u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2a5378: 0xd8d50030  lqc2        $vf21, 0x30($a2)
    ctx->pc = 0x2a5378u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2a537c: 0xd8d60040  lqc2        $vf22, 0x40($a2)
    ctx->pc = 0x2a537cu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x2a5380: 0xd8d70050  lqc2        $vf23, 0x50($a2)
    ctx->pc = 0x2a5380u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x2a5384: 0x4a000438  vcallms     0x80
    ctx->pc = 0x2a5384u;
    {     ctx->vu0_tpc = 0x80;     runtime->executeVU0Microprogram(rdram, ctx, 0x80); }
    // 0x2a5388: 0x4a0005f8  vcallms     0xB8
    ctx->pc = 0x2a5388u;
    {     ctx->vu0_tpc = 0xB8;     runtime->executeVU0Microprogram(rdram, ctx, 0xB8); }
    // 0x2a538c: 0x4a0002ff  vnop
    ctx->pc = 0x2a538cu;
    // NOP operation, no action needed for VU0
label_2a5390:
    // 0x2a5390: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x2a5390u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2a5394:
    // 0x2a5394: 0x5476fec6  bnel        $v1, $s6, . + 4 + (-0x13A << 2)
    ctx->pc = 0x2A5394u;
    {
        const bool branch_taken_0x2a5394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        if (branch_taken_0x2a5394) {
            ctx->pc = 0x2A5398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5394u;
            // 0x2a5398: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4eb0;
        }
    }
    ctx->pc = 0x2A539Cu;
    // 0x2a539c: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x2a539cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2a53a0: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x2a53a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2a53a4: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x2a53a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2a53a8: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x2a53a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2a53ac: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x2a53acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2a53b0: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x2a53b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2a53b4: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x2a53b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2a53b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A53B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A53BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A53B8u;
        // 0x2a53bc: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A53B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A53C0u;
}
