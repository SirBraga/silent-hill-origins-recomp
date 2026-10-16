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

// Function: sub_001AC890
// Address: 0x1ac890 - 0x1aca80
void sub_001AC890_0x1ac890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC890_0x1ac890");
#endif

    switch (ctx->pc) {
        case 0x1ac90cu: goto label_1ac90c;
        case 0x1ac914u: goto label_1ac914;
        case 0x1ac924u: goto label_1ac924;
        case 0x1ac940u: goto label_1ac940;
        case 0x1ac978u: goto label_1ac978;
        case 0x1ac998u: goto label_1ac998;
        case 0x1ac9c8u: goto label_1ac9c8;
        case 0x1ac9f0u: goto label_1ac9f0;
        default: break;
    }

    ctx->pc = 0x1ac890u;

    // 0x1ac890: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1ac890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1ac894: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x1ac894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x1ac898: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x1ac898u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x1ac89c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ac89cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ac8a0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1ac8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1ac8a4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1ac8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1ac8a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ac8a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac8ac: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1ac8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1ac8b0: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x1ac8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1ac8b4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1ac8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac8b8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1ac8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ac8bc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1ac8bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1ac8c0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1ac8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac8c4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1ac8c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1ac8c8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1ac8c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1ac8cc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1ac8ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1ac8d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ac8d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ac8d4: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1ac8d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ac8d8: 0x0  nop
    ctx->pc = 0x1ac8d8u;
    // NOP
    // 0x1ac8dc: 0x45030063  bc1tl       . + 4 + (0x63 << 2)
    ctx->pc = 0x1AC8DCu;
    {
        const bool branch_taken_0x1ac8dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ac8dc) {
            ctx->pc = 0x1AC8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC8DCu;
            // 0x1ac8e0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACA6Cu;
            goto label_1aca6c;
        }
    }
    ctx->pc = 0x1AC8E4u;
    // 0x1ac8e4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ac8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ac8e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ac8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac8ec: 0x6a020027  ldl         $v0, 0x27($s0)
    ctx->pc = 0x1ac8ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ac8f0: 0x6e020020  ldr         $v0, 0x20($s0)
    ctx->pc = 0x1ac8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ac8f4: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1ac8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1ac8f8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1ac8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac8fc: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1ac8fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac900: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1ac900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1ac904: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1AC904u;
    SET_GPR_U32(ctx, 31, 0x1AC90Cu);
    ctx->pc = 0x1AC908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC904u;
    // 0x1ac908: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1AC904u, 0x1AC90Cu)) {
        return;
    }
    ctx->pc = 0x1AC90Cu;
label_1ac90c:
    // 0x1ac90c: 0xc0691d8  jal         func_1A4760
    ctx->pc = 0x1AC90Cu;
    SET_GPR_U32(ctx, 31, 0x1AC914u);
    ctx->pc = 0x1A4760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4760u, 0x1AC90Cu, 0x1AC914u)) {
        return;
    }
    ctx->pc = 0x1AC914u;
label_1ac914:
    // 0x1ac914: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AC914u;
    {
        const bool branch_taken_0x1ac914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC914u;
        // 0x1ac918: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac914) {
            ctx->pc = 0x1AC964u;
            goto label_1ac964;
        }
    }
    ctx->pc = 0x1AC91Cu;
    // 0x1ac91c: 0xc0691ec  jal         func_1A47B0
    ctx->pc = 0x1AC91Cu;
    SET_GPR_U32(ctx, 31, 0x1AC924u);
    ctx->pc = 0x1A47B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A47B0u, 0x1AC91Cu, 0x1AC924u)) {
        return;
    }
    ctx->pc = 0x1AC924u;
label_1ac924:
    // 0x1ac924: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ac924u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac928: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ac928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac92c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1ac92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ac930: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AC930u;
    {
        const bool branch_taken_0x1ac930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC930u;
        // 0x1ac934: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac930) {
            ctx->pc = 0x1AC960u;
            goto label_1ac960;
        }
    }
    ctx->pc = 0x1AC938u;
    // 0x1ac938: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x1ac938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1ac93c: 0x27a30028  addiu       $v1, $sp, 0x28
    ctx->pc = 0x1ac93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_1ac940:
    // 0x1ac940: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ac940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ac944: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ac944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ac948: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1ac948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1ac94c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ac94cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ac950: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1ac950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1ac954: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1ac954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ac958: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1AC958u;
    {
        const bool branch_taken_0x1ac958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC958u;
        // 0x1ac95c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac958) {
            ctx->pc = 0x1AC940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac940;
        }
    }
    ctx->pc = 0x1AC960u;
label_1ac960:
    // 0x1ac960: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ac960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac964:
    // 0x1ac964: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1ac964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1ac968: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1AC968u;
    {
        const bool branch_taken_0x1ac968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC968u;
        // 0x1ac96c: 0x27b10028  addiu       $s1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac968) {
            ctx->pc = 0x1ACA50u;
            goto label_1aca50;
        }
    }
    ctx->pc = 0x1AC970u;
    // 0x1ac970: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ac970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac974: 0x0  nop
    ctx->pc = 0x1ac974u;
    // NOP
label_1ac978:
    // 0x1ac978: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ac978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ac97c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ac97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ac980: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ac980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ac984: 0x24432740  addiu       $v1, $v0, 0x2740
    ctx->pc = 0x1ac984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10048));
    // 0x1ac988: 0x12030027  beq         $s0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1AC988u;
    {
        const bool branch_taken_0x1ac988 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AC98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC988u;
        // 0x1ac98c: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac988) {
            ctx->pc = 0x1ACA28u;
            goto label_1aca28;
        }
    }
    ctx->pc = 0x1AC990u;
    // 0x1ac990: 0xc04f0c2  jal         func_13C308
    ctx->pc = 0x1AC990u;
    SET_GPR_U32(ctx, 31, 0x1AC998u);
    ctx->pc = 0x1AC994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC990u;
    // 0x1ac994: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x1AC990u, 0x1AC998u)) {
        return;
    }
    ctx->pc = 0x1AC998u;
label_1ac998:
    // 0x1ac998: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x1ac998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ac99c: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x1ac99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ac9a0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ac9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ac9a4: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x1ac9a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac9a8: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x1ac9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ac9ac: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x1ac9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x1ac9b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ac9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac9b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ac9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ac9b8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ac9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ac9bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ac9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ac9c0: 0xc04975a  jal         func_125D68
    ctx->pc = 0x1AC9C0u;
    SET_GPR_U32(ctx, 31, 0x1AC9C8u);
    ctx->pc = 0x1AC9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC9C0u;
    // 0x1ac9c4: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x125D68u, 0x1AC9C0u, 0x1AC9C8u)) {
        return;
    }
    ctx->pc = 0x1AC9C8u;
label_1ac9c8:
    // 0x1ac9c8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ac9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac9cc: 0x46000340  add.s       $f13, $f0, $f0
    ctx->pc = 0x1ac9ccu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1ac9d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac9d4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1ac9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ac9d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ac9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ac9dc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1ac9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ac9e0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1ac9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1ac9e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ac9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ac9e8: 0xc06b0e2  jal         func_1AC388
    ctx->pc = 0x1AC9E8u;
    SET_GPR_U32(ctx, 31, 0x1AC9F0u);
    ctx->pc = 0x1AC9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC9E8u;
    // 0x1ac9ec: 0xc44c2a90  lwc1        $f12, 0x2A90($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 10896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AC388u, 0x1AC9E8u, 0x1AC9F0u)) {
        return;
    }
    ctx->pc = 0x1AC9F0u;
label_1ac9f0:
    // 0x1ac9f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AC9F0u;
    {
        const bool branch_taken_0x1ac9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC9F0u;
        // 0x1ac9f4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac9f0) {
            ctx->pc = 0x1ACA28u;
            goto label_1aca28;
        }
    }
    ctx->pc = 0x1AC9F8u;
    // 0x1ac9f8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1ac9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac9fc: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1ac9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1aca00: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1aca00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1aca04: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x1aca04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1aca08: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x1aca08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1aca0c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1aca0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1aca10: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1aca10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1aca14: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x1aca14u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x1aca18: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1aca18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1aca1c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1aca1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1aca20: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1aca20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1aca24: 0x0  nop
    ctx->pc = 0x1aca24u;
    // NOP
label_1aca28:
    // 0x1aca28: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1aca28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aca2c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1aca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1aca30: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1aca30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1aca34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACA34u;
    {
        const bool branch_taken_0x1aca34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA34u;
        // 0x1aca38: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca34) {
            ctx->pc = 0x1ACA44u;
            goto label_1aca44;
        }
    }
    ctx->pc = 0x1ACA3Cu;
    // 0x1aca3c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1aca3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1aca40: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1aca40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1aca44:
    // 0x1aca44: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1aca44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1aca48: 0x1462ffcb  bne         $v1, $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1ACA48u;
    {
        const bool branch_taken_0x1aca48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ACA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA48u;
        // 0x1aca4c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aca48) {
            ctx->pc = 0x1AC978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac978;
        }
    }
    ctx->pc = 0x1ACA50u;
label_1aca50:
    // 0x1aca50: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x1aca50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1aca54: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x1aca54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1aca58: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x1aca58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aca5c: 0xb2070027  sdl         $a3, 0x27($s0)
    ctx->pc = 0x1aca5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aca60: 0xb6070020  sdr         $a3, 0x20($s0)
    ctx->pc = 0x1aca60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1aca64: 0xae080028  sw          $t0, 0x28($s0)
    ctx->pc = 0x1aca64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 8));
    // 0x1aca68: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1aca68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1aca6c:
    // 0x1aca6c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1aca6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1aca70: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1aca70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1aca74: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA74u;
        // 0x1aca78: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACA7Cu;
    // 0x1aca7c: 0x0  nop
    ctx->pc = 0x1aca7cu;
    // NOP
    ctx->pc = 0x1aca80u;
}
