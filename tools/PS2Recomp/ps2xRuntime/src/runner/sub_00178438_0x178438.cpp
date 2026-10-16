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

// Function: sub_00178438
// Address: 0x178438 - 0x1786a0
void sub_00178438_0x178438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178438_0x178438");
#endif

    switch (ctx->pc) {
        case 0x178460u: goto label_178460;
        case 0x1784b8u: goto label_1784b8;
        case 0x178500u: goto label_178500;
        case 0x178568u: goto label_178568;
        case 0x1785c0u: goto label_1785c0;
        case 0x178608u: goto label_178608;
        default: break;
    }

    ctx->pc = 0x178438u;

    // 0x178438: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x178438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17843c: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17843cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x178440: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x178440u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178444: 0x24466900  addiu       $a2, $v0, 0x6900
    ctx->pc = 0x178444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 26880));
    // 0x178448: 0x24870060  addiu       $a3, $a0, 0x60
    ctx->pc = 0x178448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x17844c: 0x2488006c  addiu       $t0, $a0, 0x6C
    ctx->pc = 0x17844cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
    // 0x178450: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x178450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x178454: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x178454u;
    {
        const bool branch_taken_0x178454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178454u;
        // 0x178458: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178454) {
            ctx->pc = 0x1784B4u;
            goto label_1784b4;
        }
    }
    ctx->pc = 0x17845Cu;
    // 0x17845c: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x17845cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_178460:
    // 0x178460: 0x68ca0007  ldl         $t2, 0x7($a2)
    ctx->pc = 0x178460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x178464: 0x6cca0000  ldr         $t2, 0x0($a2)
    ctx->pc = 0x178464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x178468: 0x68cb000f  ldl         $t3, 0xF($a2)
    ctx->pc = 0x178468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x17846c: 0x6ccb0008  ldr         $t3, 0x8($a2)
    ctx->pc = 0x17846cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x178470: 0x68cc0017  ldl         $t4, 0x17($a2)
    ctx->pc = 0x178470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x178474: 0x6ccc0010  ldr         $t4, 0x10($a2)
    ctx->pc = 0x178474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x178478: 0x68cd001f  ldl         $t5, 0x1F($a2)
    ctx->pc = 0x178478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x17847c: 0x6ccd0018  ldr         $t5, 0x18($a2)
    ctx->pc = 0x17847cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x178480: 0xb06a0007  sdl         $t2, 0x7($v1)
    ctx->pc = 0x178480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x178484: 0xb46a0000  sdr         $t2, 0x0($v1)
    ctx->pc = 0x178484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x178488: 0xb06b000f  sdl         $t3, 0xF($v1)
    ctx->pc = 0x178488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17848c: 0xb46b0008  sdr         $t3, 0x8($v1)
    ctx->pc = 0x17848cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x178490: 0xb06c0017  sdl         $t4, 0x17($v1)
    ctx->pc = 0x178490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x178494: 0xb46c0010  sdr         $t4, 0x10($v1)
    ctx->pc = 0x178494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x178498: 0xb06d001f  sdl         $t5, 0x1F($v1)
    ctx->pc = 0x178498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17849c: 0xb46d0018  sdr         $t5, 0x18($v1)
    ctx->pc = 0x17849cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1784a0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1784a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1784a4: 0x14c2ffee  bne         $a2, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1784A4u;
    {
        const bool branch_taken_0x1784a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1784A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1784A4u;
        // 0x1784a8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1784a4) {
            ctx->pc = 0x178460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178460;
        }
    }
    ctx->pc = 0x1784ACu;
    // 0x1784ac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1784ACu;
    {
        const bool branch_taken_0x1784ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1784ac) {
            ctx->pc = 0x1784E4u;
            goto label_1784e4;
        }
    }
    ctx->pc = 0x1784B4u;
label_1784b4:
    // 0x1784b4: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x1784b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_1784b8:
    // 0x1784b8: 0xdcca0000  ld          $t2, 0x0($a2)
    ctx->pc = 0x1784b8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1784bc: 0xdccb0008  ld          $t3, 0x8($a2)
    ctx->pc = 0x1784bcu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1784c0: 0xdccc0010  ld          $t4, 0x10($a2)
    ctx->pc = 0x1784c0u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1784c4: 0xdccd0018  ld          $t5, 0x18($a2)
    ctx->pc = 0x1784c4u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1784c8: 0xfc6a0000  sd          $t2, 0x0($v1)
    ctx->pc = 0x1784c8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 10));
    // 0x1784cc: 0xfc6b0008  sd          $t3, 0x8($v1)
    ctx->pc = 0x1784ccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 11));
    // 0x1784d0: 0xfc6c0010  sd          $t4, 0x10($v1)
    ctx->pc = 0x1784d0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 12));
    // 0x1784d4: 0xfc6d0018  sd          $t5, 0x18($v1)
    ctx->pc = 0x1784d4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 13));
    // 0x1784d8: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1784d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1784dc: 0x14c2fff6  bne         $a2, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1784DCu;
    {
        const bool branch_taken_0x1784dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1784E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1784DCu;
        // 0x1784e0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1784dc) {
            ctx->pc = 0x1784B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1784b8;
        }
    }
    ctx->pc = 0x1784E4u;
label_1784e4:
    // 0x1784e4: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x1784e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1784e8: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x1784e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1784ec: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x1784ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1784f0: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x1784f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1784f4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1784f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1784f8: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x1784f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1784fc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1784fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_178500:
    // 0x178500: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x178500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x178504: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x178504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x178508: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x178508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17850c: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x17850cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x178510: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x178510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x178514: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x178514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178518: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x178518u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x17851c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x17851cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x178520: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x178520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x178524: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x178524u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x178528: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x178528u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x17852c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17852cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x178530: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x178530u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x178534: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x178534u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x178538: 0x0  nop
    ctx->pc = 0x178538u;
    // NOP
    // 0x17853c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x17853Cu;
    {
        const bool branch_taken_0x17853c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17853c) {
            ctx->pc = 0x178540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17853Cu;
            // 0x178540: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x178544u;
            goto label_178544;
        }
    }
    ctx->pc = 0x178544u;
label_178544:
    // 0x178544: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x178544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x178548: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x178548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x17854c: 0x4c1ffec  bgez        $a2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x17854Cu;
    {
        const bool branch_taken_0x17854c = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x178550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17854Cu;
        // 0x178550: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17854c) {
            ctx->pc = 0x178500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178500;
        }
    }
    ctx->pc = 0x178554u;
    // 0x178554: 0x25266900  addiu       $a2, $t1, 0x6900
    ctx->pc = 0x178554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 26880));
    // 0x178558: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x178558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x17855c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17855Cu;
    {
        const bool branch_taken_0x17855c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17855Cu;
        // 0x178560: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17855c) {
            ctx->pc = 0x1785BCu;
            goto label_1785bc;
        }
    }
    ctx->pc = 0x178564u;
    // 0x178564: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x178564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_178568:
    // 0x178568: 0x68cd0007  ldl         $t5, 0x7($a2)
    ctx->pc = 0x178568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x17856c: 0x6ccd0000  ldr         $t5, 0x0($a2)
    ctx->pc = 0x17856cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x178570: 0x68c8000f  ldl         $t0, 0xF($a2)
    ctx->pc = 0x178570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x178574: 0x6cc80008  ldr         $t0, 0x8($a2)
    ctx->pc = 0x178574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x178578: 0x68c90017  ldl         $t1, 0x17($a2)
    ctx->pc = 0x178578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x17857c: 0x6cc90010  ldr         $t1, 0x10($a2)
    ctx->pc = 0x17857cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x178580: 0x68ca001f  ldl         $t2, 0x1F($a2)
    ctx->pc = 0x178580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x178584: 0x6cca0018  ldr         $t2, 0x18($a2)
    ctx->pc = 0x178584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x178588: 0xb06d0007  sdl         $t5, 0x7($v1)
    ctx->pc = 0x178588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17858c: 0xb46d0000  sdr         $t5, 0x0($v1)
    ctx->pc = 0x17858cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x178590: 0xb068000f  sdl         $t0, 0xF($v1)
    ctx->pc = 0x178590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x178594: 0xb4680008  sdr         $t0, 0x8($v1)
    ctx->pc = 0x178594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x178598: 0xb0690017  sdl         $t1, 0x17($v1)
    ctx->pc = 0x178598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17859c: 0xb4690010  sdr         $t1, 0x10($v1)
    ctx->pc = 0x17859cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1785a0: 0xb06a001f  sdl         $t2, 0x1F($v1)
    ctx->pc = 0x1785a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1785a4: 0xb46a0018  sdr         $t2, 0x18($v1)
    ctx->pc = 0x1785a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1785a8: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1785a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1785ac: 0x14c2ffee  bne         $a2, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1785ACu;
    {
        const bool branch_taken_0x1785ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1785B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1785ACu;
        // 0x1785b0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1785ac) {
            ctx->pc = 0x178568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178568;
        }
    }
    ctx->pc = 0x1785B4u;
    // 0x1785b4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1785B4u;
    {
        const bool branch_taken_0x1785b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1785b4) {
            ctx->pc = 0x1785ECu;
            goto label_1785ec;
        }
    }
    ctx->pc = 0x1785BCu;
label_1785bc:
    // 0x1785bc: 0x24c20040  addiu       $v0, $a2, 0x40
    ctx->pc = 0x1785bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_1785c0:
    // 0x1785c0: 0xdccb0000  ld          $t3, 0x0($a2)
    ctx->pc = 0x1785c0u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1785c4: 0xdccc0008  ld          $t4, 0x8($a2)
    ctx->pc = 0x1785c4u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1785c8: 0xdccd0010  ld          $t5, 0x10($a2)
    ctx->pc = 0x1785c8u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1785cc: 0xdcc80018  ld          $t0, 0x18($a2)
    ctx->pc = 0x1785ccu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1785d0: 0xfc6b0000  sd          $t3, 0x0($v1)
    ctx->pc = 0x1785d0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 11));
    // 0x1785d4: 0xfc6c0008  sd          $t4, 0x8($v1)
    ctx->pc = 0x1785d4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 12));
    // 0x1785d8: 0xfc6d0010  sd          $t5, 0x10($v1)
    ctx->pc = 0x1785d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 13));
    // 0x1785dc: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x1785dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x1785e0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1785e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1785e4: 0x14c2fff6  bne         $a2, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1785E4u;
    {
        const bool branch_taken_0x1785e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1785E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1785E4u;
        // 0x1785e8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1785e4) {
            ctx->pc = 0x1785C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1785c0;
        }
    }
    ctx->pc = 0x1785ECu;
label_1785ec:
    // 0x1785ec: 0x68c90007  ldl         $t1, 0x7($a2)
    ctx->pc = 0x1785ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1785f0: 0x6cc90000  ldr         $t1, 0x0($a2)
    ctx->pc = 0x1785f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1785f4: 0xb0690007  sdl         $t1, 0x7($v1)
    ctx->pc = 0x1785f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1785f8: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x1785f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1785fc: 0xb4690000  sdr         $t1, 0x0($v1)
    ctx->pc = 0x1785fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x178600: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x178600u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178604: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x178604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_178608:
    // 0x178608: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x178608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17860c: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x17860cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x178610: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x178610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178614: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x178614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x178618: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x178618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x17861c: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x17861cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178620: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x178620u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x178624: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x178624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x178628: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x178628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17862c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x17862cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x178630: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x178630u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x178634: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x178634u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x178638: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x178638u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17863c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x17863cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x178640: 0x0  nop
    ctx->pc = 0x178640u;
    // NOP
    // 0x178644: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x178644u;
    {
        const bool branch_taken_0x178644 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x178644) {
            ctx->pc = 0x178648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178644u;
            // 0x178648: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x17864Cu;
            goto label_17864c;
        }
    }
    ctx->pc = 0x17864Cu;
label_17864c:
    // 0x17864c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x17864cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x178650: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x178650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x178654: 0x4c1ffec  bgez        $a2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x178654u;
    {
        const bool branch_taken_0x178654 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x178658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178654u;
        // 0x178658: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178654) {
            ctx->pc = 0x178608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178608;
        }
    }
    ctx->pc = 0x17865Cu;
    // 0x17865c: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x17865cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178660: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x178660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178664: 0xc4e20010  lwc1        $f2, 0x10($a3)
    ctx->pc = 0x178664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x178668: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x178668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17866c: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x17866cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x178670: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x178670u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x178674: 0xc4e40014  lwc1        $f4, 0x14($a3)
    ctx->pc = 0x178674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x178678: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x178678u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x17867c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x17867cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178680: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x178680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x178684: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x178684u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x178688: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x178688u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x17868c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17868cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x178690: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x178690u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x178694: 0xe4a20018  swc1        $f2, 0x18($a1)
    ctx->pc = 0x178694u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x178698: 0x3e00008  jr          $ra
    ctx->pc = 0x178698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178698u;
        // 0x17869c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1786A0u;
}
