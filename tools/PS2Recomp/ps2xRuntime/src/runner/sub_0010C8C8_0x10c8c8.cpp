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

// Function: sub_0010C8C8
// Address: 0x10c8c8 - 0x10ca90
void sub_0010C8C8_0x10c8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C8C8_0x10c8c8");
#endif

    switch (ctx->pc) {
        case 0x10c924u: goto label_10c924;
        case 0x10c978u: goto label_10c978;
        case 0x10ca48u: goto label_10ca48;
        default: break;
    }

    ctx->pc = 0x10c8c8u;

    // 0x10c8c8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x10c8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x10c8cc: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x10c8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x10c8d0: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x10c8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x10c8d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10c8d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c8d8: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x10c8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x10c8dc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x10c8dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c8e0: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x10c8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x10c8e4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x10c8e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c8e8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x10c8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x10c8ec: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x10c8ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c8f0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x10c8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x10c8f4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x10c8f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c8f8: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x10c8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x10c8fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x10c8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x10c900: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x10c900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x10c904: 0x12200055  beqz        $s1, . + 4 + (0x55 << 2)
    ctx->pc = 0x10C904u;
    {
        const bool branch_taken_0x10c904 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C904u;
        // 0x10c908: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c904) {
            ctx->pc = 0x10CA5Cu;
            goto label_10ca5c;
        }
    }
    ctx->pc = 0x10C90Cu;
    // 0x10c90c: 0x12400054  beqz        $s2, . + 4 + (0x54 << 2)
    ctx->pc = 0x10C90Cu;
    {
        const bool branch_taken_0x10c90c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C90Cu;
        // 0x10c910: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c90c) {
            ctx->pc = 0x10CA60u;
            goto label_10ca60;
        }
    }
    ctx->pc = 0x10C914u;
    // 0x10c914: 0x12600052  beqz        $s3, . + 4 + (0x52 << 2)
    ctx->pc = 0x10C914u;
    {
        const bool branch_taken_0x10c914 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C914u;
        // 0x10c918: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c914) {
            ctx->pc = 0x10CA60u;
            goto label_10ca60;
        }
    }
    ctx->pc = 0x10C91Cu;
    // 0x10c91c: 0xc04389e  jal         func_10E278
    ctx->pc = 0x10C91Cu;
    SET_GPR_U32(ctx, 31, 0x10C924u);
    ctx->pc = 0x10C920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C91Cu;
    // 0x10c920: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E278u, 0x10C91Cu, 0x10C924u)) {
        return;
    }
    ctx->pc = 0x10C924u;
label_10c924:
    // 0x10c924: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x10c924u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c928: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10c928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10c92c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10c92cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c930: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x10c930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10c934: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x10c934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x10c938: 0x3c1e0034  lui         $fp, 0x34
    ctx->pc = 0x10c938u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)52 << 16));
    // 0x10c93c: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x10c93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x10c940: 0x26b00b20  addiu       $s0, $s5, 0xB20
    ctx->pc = 0x10c940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 2848));
    // 0x10c944: 0xafb10024  sw          $s1, 0x24($sp)
    ctx->pc = 0x10c944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
    // 0x10c948: 0xafb20028  sw          $s2, 0x28($sp)
    ctx->pc = 0x10c948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
    // 0x10c94c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x10c94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x10c950: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10c950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10c954: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x10c954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x10c958: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x10c958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x10c95c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x10c95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x10c960: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x10c960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x10c964: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x10c964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x10c968: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x10c968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x10c96c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x10c96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x10c970: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x10c970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x10c974: 0x0  nop
    ctx->pc = 0x10c974u;
    // NOP
label_10c978:
    // 0x10c978: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10c978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10c97c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c980: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10C980u;
    {
        const bool branch_taken_0x10c980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C980u;
        // 0x10c984: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c980) {
            ctx->pc = 0x10C99Cu;
            goto label_10c99c;
        }
    }
    ctx->pc = 0x10C988u;
    // 0x10c988: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x10c988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10c98c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x10c98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c990: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x10c990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10c994: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x10c994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x10c998: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x10c998u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
label_10c99c:
    // 0x10c99c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10C99Cu;
    {
        const bool branch_taken_0x10c99c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C99Cu;
        // 0x10c9a0: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c99c) {
            ctx->pc = 0x10C9C0u;
            goto label_10c9c0;
        }
    }
    ctx->pc = 0x10C9A4u;
    // 0x10c9a4: 0x6a670007  ldl         $a3, 0x7($s3)
    ctx->pc = 0x10c9a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x10c9a8: 0x6e670000  ldr         $a3, 0x0($s3)
    ctx->pc = 0x10c9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x10c9ac: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x10c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x10c9b0: 0xb207000f  sdl         $a3, 0xF($s0)
    ctx->pc = 0x10c9b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10c9b4: 0xb6070008  sdr         $a3, 0x8($s0)
    ctx->pc = 0x10c9b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10c9b8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x10c9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x10c9bc: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x10c9bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10c9c0:
    // 0x10c9c0: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x10c9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x10c9c4: 0x2861018  mult        $v0, $s4, $a2
    ctx->pc = 0x10c9c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10c9c8: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x10c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x10c9cc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x10c9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x10c9d0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x10c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x10c9d4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10C9D4u;
    {
        const bool branch_taken_0x10c9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C9D4u;
        // 0x10c9d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c9d4) {
            ctx->pc = 0x10C9F0u;
            goto label_10c9f0;
        }
    }
    ctx->pc = 0x10C9DCu;
    // 0x10c9dc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x10c9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10c9e0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x10c9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c9e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x10c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10c9e8: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x10c9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x10c9ec: 0x3280b  movn        $a1, $zero, $v1
    ctx->pc = 0x10c9ecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
label_10c9f0:
    // 0x10c9f0: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x10C9F0u;
    {
        const bool branch_taken_0x10c9f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C9F0u;
        // 0x10c9f4: 0x2861018  mult        $v0, $s4, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c9f0) {
            ctx->pc = 0x10CA4Cu;
            goto label_10ca4c;
        }
    }
    ctx->pc = 0x10C9F8u;
    // 0x10c9f8: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x10c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x10c9fc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x10c9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x10ca00: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10ca00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10ca04: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x10CA04u;
    {
        const bool branch_taken_0x10ca04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA04u;
        // 0x10ca08: 0x8fc282f4  lw          $v0, -0x7D0C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294935284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ca04) {
            ctx->pc = 0x10CA48u;
            goto label_10ca48;
        }
    }
    ctx->pc = 0x10CA0Cu;
    // 0x10ca0c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10CA0Cu;
    {
        const bool branch_taken_0x10ca0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA0Cu;
        // 0x10ca10: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ca0c) {
            ctx->pc = 0x10CA4Cu;
            goto label_10ca4c;
        }
    }
    ctx->pc = 0x10CA14u;
    // 0x10ca14: 0x6a650007  ldl         $a1, 0x7($s3)
    ctx->pc = 0x10ca14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x10ca18: 0x6e650000  ldr         $a1, 0x0($s3)
    ctx->pc = 0x10ca18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x10ca1c: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x10ca1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x10ca20: 0xb0850077  sdl         $a1, 0x77($a0)
    ctx->pc = 0x10ca20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10ca24: 0xb4850070  sdr         $a1, 0x70($a0)
    ctx->pc = 0x10ca24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10ca28: 0xac860078  sw          $a2, 0x78($a0)
    ctx->pc = 0x10ca28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 6));
    // 0x10ca2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10ca30: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x10ca30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x10ca34: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10CA34u;
    {
        const bool branch_taken_0x10ca34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA34u;
        // 0x10ca38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ca34) {
            ctx->pc = 0x10CA4Cu;
            goto label_10ca4c;
        }
    }
    ctx->pc = 0x10CA3Cu;
    // 0x10ca3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10ca3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ca40: 0xc0b66fa  jal         func_2D9BE8
    ctx->pc = 0x10CA40u;
    SET_GPR_U32(ctx, 31, 0x10CA48u);
    ctx->pc = 0x10CA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CA40u;
    // 0x10ca44: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9BE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9BE8u, 0x10CA40u, 0x10CA48u)) {
        return;
    }
    ctx->pc = 0x10CA48u;
label_10ca48:
    // 0x10ca48: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x10ca48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10ca4c:
    // 0x10ca4c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x10ca4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x10ca50: 0x2e820040  sltiu       $v0, $s4, 0x40
    ctx->pc = 0x10ca50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x10ca54: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x10CA54u;
    {
        const bool branch_taken_0x10ca54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA54u;
        // 0x10ca58: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ca54) {
            ctx->pc = 0x10C978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c978;
        }
    }
    ctx->pc = 0x10CA5Cu;
label_10ca5c:
    // 0x10ca5c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x10ca5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_10ca60:
    // 0x10ca60: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x10ca60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x10ca64: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x10ca64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x10ca68: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x10ca68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x10ca6c: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x10ca6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x10ca70: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x10ca70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10ca74: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x10ca74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10ca78: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x10ca78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10ca7c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x10ca7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10ca80: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x10ca80u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10ca84: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10ca84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10ca88: 0x3e00008  jr          $ra
    ctx->pc = 0x10CA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA88u;
        // 0x10ca8c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CA90u;
}
