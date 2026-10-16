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

// Function: sub_0014BA28
// Address: 0x14ba28 - 0x14bc58
void sub_0014BA28_0x14ba28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BA28_0x14ba28");
#endif

    switch (ctx->pc) {
        case 0x14ba80u: goto label_14ba80;
        case 0x14baa8u: goto label_14baa8;
        case 0x14bab8u: goto label_14bab8;
        case 0x14bac4u: goto label_14bac4;
        case 0x14bb20u: goto label_14bb20;
        case 0x14bb90u: goto label_14bb90;
        case 0x14bbb0u: goto label_14bbb0;
        case 0x14bc10u: goto label_14bc10;
        case 0x14bc1cu: goto label_14bc1c;
        case 0x14bc30u: goto label_14bc30;
        default: break;
    }

    ctx->pc = 0x14ba28u;

    // 0x14ba28: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x14ba28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x14ba2c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x14ba2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x14ba30: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x14ba30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x14ba34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14ba34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba38: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x14ba38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x14ba3c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x14ba3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x14ba40: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x14ba40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x14ba44: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14ba44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14ba48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14ba48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14ba4c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x14ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x14ba50: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x14BA50u;
    {
        const bool branch_taken_0x14ba50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BA50u;
        // 0x14ba54: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ba50) {
            ctx->pc = 0x14BC10u;
            goto label_14bc10;
        }
    }
    ctx->pc = 0x14BA58u;
    // 0x14ba58: 0xc6400050  lwc1        $f0, 0x50($s2)
    ctx->pc = 0x14ba58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ba5c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x14ba5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x14ba60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14ba60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14ba64: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x14ba64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x14ba68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14ba68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ba6c: 0x0  nop
    ctx->pc = 0x14ba6cu;
    // NOP
    // 0x14ba70: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
    ctx->pc = 0x14BA70u;
    {
        const bool branch_taken_0x14ba70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BA70u;
        // 0x14ba74: 0xe6400050  swc1        $f0, 0x50($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ba70) {
            ctx->pc = 0x14BB28u;
            goto label_14bb28;
        }
    }
    ctx->pc = 0x14BA78u;
    // 0x14ba78: 0xc0534f4  jal         func_14D3D0
    ctx->pc = 0x14BA78u;
    SET_GPR_U32(ctx, 31, 0x14BA80u);
    ctx->pc = 0x14BA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BA78u;
    // 0x14ba7c: 0x26500100  addiu       $s0, $s2, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14D3D0u, 0x14BA78u, 0x14BA80u)) {
        return;
    }
    ctx->pc = 0x14BA80u;
label_14ba80:
    // 0x14ba80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14ba80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba84: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x14ba84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x14ba88: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x14ba88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x14ba8c: 0x24a5cf08  addiu       $a1, $a1, -0x30F8
    ctx->pc = 0x14ba8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954760));
    // 0x14ba90: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x14ba90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x14ba94: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x14ba94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x14ba98: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x14ba98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba9c: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x14ba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x14baa0: 0xc09545a  jal         func_255168
    ctx->pc = 0x14BAA0u;
    SET_GPR_U32(ctx, 31, 0x14BAA8u);
    ctx->pc = 0x14BAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BAA0u;
    // 0x14baa4: 0x26540020  addiu       $s4, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x14BAA0u, 0x14BAA8u)) {
        return;
    }
    ctx->pc = 0x14BAA8u;
label_14baa8:
    // 0x14baa8: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x14baa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x14baac: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x14BAACu;
    {
        const bool branch_taken_0x14baac = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x14BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BAACu;
        // 0x14bab0: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14baac) {
            ctx->pc = 0x14BAE0u;
            goto label_14bae0;
        }
    }
    ctx->pc = 0x14BAB4u;
    // 0x14bab4: 0x265000e0  addiu       $s0, $s2, 0xE0
    ctx->pc = 0x14bab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_14bab8:
    // 0x14bab8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14bab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14babc: 0xc0898d2  jal         func_226348
    ctx->pc = 0x14BABCu;
    SET_GPR_U32(ctx, 31, 0x14BAC4u);
    ctx->pc = 0x14BAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BABCu;
    // 0x14bac0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226348u, 0x14BABCu, 0x14BAC4u)) {
        return;
    }
    ctx->pc = 0x14BAC4u;
label_14bac4:
    // 0x14bac4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14bac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14bac8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x14bac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x14bacc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x14baccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x14bad0: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x14bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x14bad4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x14bad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14bad8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14BAD8u;
    {
        const bool branch_taken_0x14bad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BAD8u;
        // 0x14badc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bad8) {
            ctx->pc = 0x14BAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14bab8;
        }
    }
    ctx->pc = 0x14BAE0u;
label_14bae0:
    // 0x14bae0: 0x6a420027  ldl         $v0, 0x27($s2)
    ctx->pc = 0x14bae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x14bae4: 0x6e420020  ldr         $v0, 0x20($s2)
    ctx->pc = 0x14bae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x14bae8: 0x6a43002f  ldl         $v1, 0x2F($s2)
    ctx->pc = 0x14bae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x14baec: 0x6e430028  ldr         $v1, 0x28($s2)
    ctx->pc = 0x14baecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x14baf0: 0x6a440037  ldl         $a0, 0x37($s2)
    ctx->pc = 0x14baf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x14baf4: 0x6e440030  ldr         $a0, 0x30($s2)
    ctx->pc = 0x14baf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x14baf8: 0xb242003f  sdl         $v0, 0x3F($s2)
    ctx->pc = 0x14baf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14bafc: 0xb6420038  sdr         $v0, 0x38($s2)
    ctx->pc = 0x14bafcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14bb00: 0xb2430047  sdl         $v1, 0x47($s2)
    ctx->pc = 0x14bb00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14bb04: 0xb6430040  sdr         $v1, 0x40($s2)
    ctx->pc = 0x14bb04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14bb08: 0xb244004f  sdl         $a0, 0x4F($s2)
    ctx->pc = 0x14bb08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14bb0c: 0xb6440048  sdr         $a0, 0x48($s2)
    ctx->pc = 0x14bb0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14bb10: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x14bb10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x14bb14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14bb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bb18: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x14BB18u;
    SET_GPR_U32(ctx, 31, 0x14BB20u);
    ctx->pc = 0x14BB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BB18u;
    // 0x14bb1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x14BB18u, 0x14BB20u)) {
        return;
    }
    ctx->pc = 0x14BB20u;
label_14bb20:
    // 0x14bb20: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x14BB20u;
    {
        const bool branch_taken_0x14bb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB20u;
        // 0x14bb24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb20) {
            ctx->pc = 0x14BC14u;
            goto label_14bc14;
        }
    }
    ctx->pc = 0x14BB28u;
label_14bb28:
    // 0x14bb28: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x14bb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x14bb2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14bb2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14bb30: 0x26420060  addiu       $v0, $s2, 0x60
    ctx->pc = 0x14bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x14bb34: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x14bb34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x14bb38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14bb38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14bb3c: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x14bb3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x14bb40: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x14BB40u;
    {
        const bool branch_taken_0x14bb40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB40u;
        // 0x14bb44: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb40) {
            ctx->pc = 0x14BB6Cu;
            goto label_14bb6c;
        }
    }
    ctx->pc = 0x14BB48u;
    // 0x14bb48: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14bb48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x14bb4c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x14bb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x14bb50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14bb50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14bb54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14bb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14bb58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14bb58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14bb5c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x14bb5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x14bb60: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x14bb60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14bb64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14BB64u;
    {
        const bool branch_taken_0x14bb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BB64u;
        // 0x14bb68: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bb64) {
            ctx->pc = 0x14BB7Cu;
            goto label_14bb7c;
        }
    }
    ctx->pc = 0x14BB6Cu;
label_14bb6c:
    // 0x14bb6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14bb6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14bb70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14bb70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14bb74: 0x0  nop
    ctx->pc = 0x14bb74u;
    // NOP
    // 0x14bb78: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x14bb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_14bb7c:
    // 0x14bb7c: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x14bb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x14bb80: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x14bb80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x14bb84: 0x24a5b818  addiu       $a1, $a1, -0x47E8
    ctx->pc = 0x14bb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948888));
    // 0x14bb88: 0xc09545a  jal         func_255168
    ctx->pc = 0x14BB88u;
    SET_GPR_U32(ctx, 31, 0x14BB90u);
    ctx->pc = 0x14BB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BB88u;
    // 0x14bb8c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x14BB88u, 0x14BB90u)) {
        return;
    }
    ctx->pc = 0x14BB90u;
label_14bb90:
    // 0x14bb90: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x14bb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x14bb94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14bb94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14bb98: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x14bb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bb9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14bb9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14bba0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14bba0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x14bba4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x14bba4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x14bba8: 0xc077602  jal         func_1DD808
    ctx->pc = 0x14BBA8u;
    SET_GPR_U32(ctx, 31, 0x14BBB0u);
    ctx->pc = 0x14BBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BBA8u;
    // 0x14bbac: 0x8e440020  lw          $a0, 0x20($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DD808u, 0x14BBA8u, 0x14BBB0u)) {
        return;
    }
    ctx->pc = 0x14BBB0u;
label_14bbb0:
    // 0x14bbb0: 0x6a42012b  ldl         $v0, 0x12B($s2)
    ctx->pc = 0x14bbb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 299); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x14bbb4: 0x6e420124  ldr         $v0, 0x124($s2)
    ctx->pc = 0x14bbb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x14bbb8: 0x6a430133  ldl         $v1, 0x133($s2)
    ctx->pc = 0x14bbb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x14bbbc: 0x6e43012c  ldr         $v1, 0x12C($s2)
    ctx->pc = 0x14bbbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x14bbc0: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x14bbc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14bbc4: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x14bbc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14bbc8: 0xb3a3002f  sdl         $v1, 0x2F($sp)
    ctx->pc = 0x14bbc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14bbcc: 0xb7a30028  sdr         $v1, 0x28($sp)
    ctx->pc = 0x14bbccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14bbd0: 0x8e440120  lw          $a0, 0x120($s2)
    ctx->pc = 0x14bbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x14bbd4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x14bbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14bbd8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x14bbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bbdc: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x14bbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14bbe0: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x14bbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14bbe4: 0xc7a40028  lwc1        $f4, 0x28($sp)
    ctx->pc = 0x14bbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14bbe8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x14bbe8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14bbec: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x14bbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14bbf0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x14bbf0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x14bbf4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x14bbf4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x14bbf8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x14bbf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14bbfc: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x14bbfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x14bc00: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x14bc00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x14bc04: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x14bc04u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x14bc08: 0xc095c4a  jal         func_257128
    ctx->pc = 0x14BC08u;
    SET_GPR_U32(ctx, 31, 0x14BC10u);
    ctx->pc = 0x14BC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BC08u;
    // 0x14bc0c: 0xe7a1002c  swc1        $f1, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x257128u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257128u, 0x14BC08u, 0x14BC10u)) {
        return;
    }
    ctx->pc = 0x14BC10u;
label_14bc10:
    // 0x14bc10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14bc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14bc14:
    // 0x14bc14: 0xc052f16  jal         func_14BC58
    ctx->pc = 0x14BC14u;
    SET_GPR_U32(ctx, 31, 0x14BC1Cu);
    ctx->pc = 0x14BC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BC14u;
    // 0x14bc18: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BC58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14BC58u, 0x14BC14u, 0x14BC1Cu)) {
        return;
    }
    ctx->pc = 0x14BC1Cu;
label_14bc1c:
    // 0x14bc1c: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x14bc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x14bc20: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14BC20u;
    {
        const bool branch_taken_0x14bc20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC20u;
        // 0x14bc24: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc20) {
            ctx->pc = 0x14BC34u;
            goto label_14bc34;
        }
    }
    ctx->pc = 0x14BC28u;
    // 0x14bc28: 0xc0411ce  jal         func_104738
    ctx->pc = 0x14BC28u;
    SET_GPR_U32(ctx, 31, 0x14BC30u);
    ctx->pc = 0x104738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x104738u, 0x14BC28u, 0x14BC30u)) {
        return;
    }
    ctx->pc = 0x14BC30u;
label_14bc30:
    // 0x14bc30: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x14bc30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_14bc34:
    // 0x14bc34: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x14bc34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14bc38: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x14bc38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14bc3c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x14bc3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14bc40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14bc40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14bc44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14bc44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14bc48: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x14bc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14bc4c: 0x3e00008  jr          $ra
    ctx->pc = 0x14BC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC4Cu;
        // 0x14bc50: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BC54u;
    // 0x14bc54: 0x0  nop
    ctx->pc = 0x14bc54u;
    // NOP
    ctx->pc = 0x14bc58u;
}
