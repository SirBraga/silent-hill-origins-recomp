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

// Function: sub_0014D180
// Address: 0x14d180 - 0x14d290
void sub_0014D180_0x14d180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D180_0x14d180");
#endif

    switch (ctx->pc) {
        case 0x14d23cu: goto label_14d23c;
        case 0x14d244u: goto label_14d244;
        case 0x14d278u: goto label_14d278;
        default: break;
    }

    ctx->pc = 0x14d180u;

    // 0x14d180: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14d180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14d184: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14d184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14d188: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14d188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14d18c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14d18cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d190: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14d190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14d194: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x14d194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14d198: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x14D198u;
    {
        const bool branch_taken_0x14d198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D198u;
        // 0x14d19c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d198) {
            ctx->pc = 0x14D278u;
            goto label_14d278;
        }
    }
    ctx->pc = 0x14D1A0u;
    // 0x14d1a0: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x14d1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x14d1a4: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x14D1A4u;
    {
        const bool branch_taken_0x14d1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D1A4u;
        // 0x14d1a8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d1a4) {
            ctx->pc = 0x14D27Cu;
            goto label_14d27c;
        }
    }
    ctx->pc = 0x14D1ACu;
    // 0x14d1ac: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x14d1acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14d1b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14d1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d1b4: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x14d1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x14d1b8: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x14d1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x14d1bc: 0x68c3000f  ldl         $v1, 0xF($a2)
    ctx->pc = 0x14d1bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x14d1c0: 0x6cc30008  ldr         $v1, 0x8($a2)
    ctx->pc = 0x14d1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x14d1c4: 0x68c70017  ldl         $a3, 0x17($a2)
    ctx->pc = 0x14d1c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x14d1c8: 0x6cc70010  ldr         $a3, 0x10($a2)
    ctx->pc = 0x14d1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x14d1cc: 0x68c8001f  ldl         $t0, 0x1F($a2)
    ctx->pc = 0x14d1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x14d1d0: 0x6cc80018  ldr         $t0, 0x18($a2)
    ctx->pc = 0x14d1d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x14d1d4: 0xb2020017  sdl         $v0, 0x17($s0)
    ctx->pc = 0x14d1d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d1d8: 0xb6020010  sdr         $v0, 0x10($s0)
    ctx->pc = 0x14d1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d1dc: 0xb203001f  sdl         $v1, 0x1F($s0)
    ctx->pc = 0x14d1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d1e0: 0xb6030018  sdr         $v1, 0x18($s0)
    ctx->pc = 0x14d1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d1e4: 0xb2070027  sdl         $a3, 0x27($s0)
    ctx->pc = 0x14d1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d1e8: 0xb6070020  sdr         $a3, 0x20($s0)
    ctx->pc = 0x14d1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d1ec: 0xb208002f  sdl         $t0, 0x2F($s0)
    ctx->pc = 0x14d1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d1f0: 0xb6080028  sdr         $t0, 0x28($s0)
    ctx->pc = 0x14d1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d1f4: 0x68c20027  ldl         $v0, 0x27($a2)
    ctx->pc = 0x14d1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x14d1f8: 0x6cc20020  ldr         $v0, 0x20($a2)
    ctx->pc = 0x14d1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x14d1fc: 0x68c3002f  ldl         $v1, 0x2F($a2)
    ctx->pc = 0x14d1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x14d200: 0x6cc30028  ldr         $v1, 0x28($a2)
    ctx->pc = 0x14d200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x14d204: 0x68c70037  ldl         $a3, 0x37($a2)
    ctx->pc = 0x14d204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x14d208: 0x6cc70030  ldr         $a3, 0x30($a2)
    ctx->pc = 0x14d208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x14d20c: 0x68c8003f  ldl         $t0, 0x3F($a2)
    ctx->pc = 0x14d20cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x14d210: 0x6cc80038  ldr         $t0, 0x38($a2)
    ctx->pc = 0x14d210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x14d214: 0xb2020037  sdl         $v0, 0x37($s0)
    ctx->pc = 0x14d214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d218: 0xb6020030  sdr         $v0, 0x30($s0)
    ctx->pc = 0x14d218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d21c: 0xb203003f  sdl         $v1, 0x3F($s0)
    ctx->pc = 0x14d21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d220: 0xb6030038  sdr         $v1, 0x38($s0)
    ctx->pc = 0x14d220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d224: 0xb2070047  sdl         $a3, 0x47($s0)
    ctx->pc = 0x14d224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d228: 0xb6070040  sdr         $a3, 0x40($s0)
    ctx->pc = 0x14d228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d22c: 0xb208004f  sdl         $t0, 0x4F($s0)
    ctx->pc = 0x14d22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d230: 0xb6080048  sdr         $t0, 0x48($s0)
    ctx->pc = 0x14d230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d234: 0xc092d4a  jal         func_24B528
    ctx->pc = 0x14D234u;
    SET_GPR_U32(ctx, 31, 0x14D23Cu);
    ctx->pc = 0x14D238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D234u;
    // 0x14d238: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B528u, 0x14D234u, 0x14D23Cu)) {
        return;
    }
    ctx->pc = 0x14D23Cu;
label_14d23c:
    // 0x14d23c: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x14D23Cu;
    SET_GPR_U32(ctx, 31, 0x14D244u);
    ctx->pc = 0x14D240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D23Cu;
    // 0x14d240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x14D23Cu, 0x14D244u)) {
        return;
    }
    ctx->pc = 0x14D244u;
label_14d244:
    // 0x14d244: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x14d244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x14d248: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x14d248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x14d24c: 0x8c444788  lw          $a0, 0x4788($v0)
    ctx->pc = 0x14d24cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4788u));
    // 0x14d250: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x14d250u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x14d254: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14D254u;
    {
        const bool branch_taken_0x14d254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x14D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D254u;
        // 0x14d258: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d254) {
            ctx->pc = 0x14D278u;
            goto label_14d278;
        }
    }
    ctx->pc = 0x14D25Cu;
    // 0x14d25c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14d260: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14D260u;
    {
        const bool branch_taken_0x14d260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D260u;
        // 0x14d264: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d260) {
            ctx->pc = 0x14D27Cu;
            goto label_14d27c;
        }
    }
    ctx->pc = 0x14D268u;
    // 0x14d268: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x14d268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x14d26c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14d26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d270: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x14D270u;
    SET_GPR_U32(ctx, 31, 0x14D278u);
    ctx->pc = 0x14D274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D270u;
    // 0x14d274: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x14D270u, 0x14D278u)) {
        return;
    }
    ctx->pc = 0x14D278u;
label_14d278:
    // 0x14d278: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14d278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14d27c:
    // 0x14d27c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14d27cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d280: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14d280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d284: 0x3e00008  jr          $ra
    ctx->pc = 0x14D284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D284u;
        // 0x14d288: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D28Cu;
    // 0x14d28c: 0x0  nop
    ctx->pc = 0x14d28cu;
    // NOP
    ctx->pc = 0x14d290u;
}
