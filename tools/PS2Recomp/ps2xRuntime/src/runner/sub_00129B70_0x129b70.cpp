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

// Function: sub_00129B70
// Address: 0x129b70 - 0x12a490
void sub_00129B70_0x129b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129B70_0x129b70");
#endif

    switch (ctx->pc) {
        case 0x129ba0u: goto label_129ba0;
        case 0x129bc4u: goto label_129bc4;
        case 0x129bccu: goto label_129bcc;
        case 0x129d14u: goto label_129d14;
        case 0x129e14u: goto label_129e14;
        case 0x129e20u: goto label_129e20;
        case 0x129f90u: goto label_129f90;
        case 0x12a150u: goto label_12a150;
        case 0x12a1d0u: goto label_12a1d0;
        case 0x12a250u: goto label_12a250;
        case 0x12a25cu: goto label_12a25c;
        case 0x12a314u: goto label_12a314;
        case 0x12a320u: goto label_12a320;
        case 0x12a430u: goto label_12a430;
        case 0x12a470u: goto label_12a470;
        default: break;
    }

    ctx->pc = 0x129b70u;

    // 0x129b70: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x129b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x129b74: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x129b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x129b78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x129b78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129b7c: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x129b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x129b80: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x129b80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x129b84: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x129b84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x129b88: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x129b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x129b8c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x129b8cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x129b90: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x129b90u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x129b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129b98: 0xc04f0f0  jal         func_13C3C0
    ctx->pc = 0x129B98u;
    SET_GPR_U32(ctx, 31, 0x129BA0u);
    ctx->pc = 0x129B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129B98u;
    // 0x129b9c: 0xe7b500d8  swc1        $f21, 0xD8($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x129B98u, 0x129BA0u)) {
        return;
    }
    ctx->pc = 0x129BA0u;
label_129ba0:
    // 0x129ba0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x129ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x129ba4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x129ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x129ba8: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x129ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x129bac: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x129bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129bb0: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x129bb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129bb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x129bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129bb8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x129bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x129bbc: 0xc04a67a  jal         func_1299E8
    ctx->pc = 0x129BBCu;
    SET_GPR_U32(ctx, 31, 0x129BC4u);
    ctx->pc = 0x129BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129BBCu;
    // 0x129bc0: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1299E8u, 0x129BBCu, 0x129BC4u)) {
        return;
    }
    ctx->pc = 0x129BC4u;
label_129bc4:
    // 0x129bc4: 0xc04f0d4  jal         func_13C350
    ctx->pc = 0x129BC4u;
    SET_GPR_U32(ctx, 31, 0x129BCCu);
    ctx->pc = 0x129BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129BC4u;
    // 0x129bc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C350u, 0x129BC4u, 0x129BCCu)) {
        return;
    }
    ctx->pc = 0x129BCCu;
label_129bcc:
    // 0x129bcc: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x129bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x129bd0: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x129bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x129bd4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x129bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x129bd8: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x129bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129bdc: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x129bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129be0: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x129be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x129be4: 0x26241510  addiu       $a0, $s1, 0x1510
    ctx->pc = 0x129be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5392));
    // 0x129be8: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x129be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x129bec: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x129becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x129bf0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x129bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x129bf4: 0xb2282c07  sdl         $t0, 0x2C07($s1)
    ctx->pc = 0x129bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129bf8: 0xb6282c00  sdr         $t0, 0x2C00($s1)
    ctx->pc = 0x129bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129bfc: 0xae222c08  sw          $v0, 0x2C08($s1)
    ctx->pc = 0x129bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11272), GPR_U32(ctx, 2));
    // 0x129c00: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x129c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x129c04: 0x8c821394  lw          $v0, 0x1394($a0)
    ctx->pc = 0x129c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5012)));
    // 0x129c08: 0x5443009e  bnel        $v0, $v1, . + 4 + (0x9E << 2)
    ctx->pc = 0x129C08u;
    {
        const bool branch_taken_0x129c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x129c08) {
            ctx->pc = 0x129C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129C08u;
            // 0x129c0c: 0x8e232bf8  lw          $v1, 0x2BF8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129E84u;
            goto label_129e84;
        }
    }
    ctx->pc = 0x129C10u;
    // 0x129c10: 0x8c821330  lw          $v0, 0x1330($a0)
    ctx->pc = 0x129c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4912)));
    // 0x129c14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x129C14u;
    {
        const bool branch_taken_0x129c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C14u;
        // 0x129c18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c14) {
            ctx->pc = 0x129C38u;
            goto label_129c38;
        }
    }
    ctx->pc = 0x129C1Cu;
    // 0x129c1c: 0xdc821390  ld          $v0, 0x1390($a0)
    ctx->pc = 0x129c1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 5008)));
    // 0x129c20: 0x3403c000  ori         $v1, $zero, 0xC000
    ctx->pc = 0x129c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x129c24: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x129c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
    // 0x129c28: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x129c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x129c2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x129c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129c30: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x129c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x129c34: 0x2280b  movn        $a1, $zero, $v0
    ctx->pc = 0x129c34u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
label_129c38:
    // 0x129c38: 0x14a001eb  bnez        $a1, . + 4 + (0x1EB << 2)
    ctx->pc = 0x129C38u;
    {
        const bool branch_taken_0x129c38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x129C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C38u;
        // 0x129c3c: 0x26300360  addiu       $s0, $s1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c38) {
            ctx->pc = 0x12A3E8u;
            goto label_12a3e8;
        }
    }
    ctx->pc = 0x129C40u;
    // 0x129c40: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x129c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x129c44: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x129c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x129c48: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x129c48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x129c4c: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x129c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129c50: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x129c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129c54: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x129c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x129c58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x129c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129c5c: 0xae222bf8  sw          $v0, 0x2BF8($s1)
    ctx->pc = 0x129c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11256), GPR_U32(ctx, 2));
    // 0x129c60: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x129c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x129c64: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x129c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x129c68: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x129c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x129c6c: 0x27a20064  addiu       $v0, $sp, 0x64
    ctx->pc = 0x129c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x129c70: 0x6a242897  ldl         $a0, 0x2897($s1)
    ctx->pc = 0x129c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 10391); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x129c74: 0x6e242890  ldr         $a0, 0x2890($s1)
    ctx->pc = 0x129c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 10384); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x129c78: 0x8e252898  lw          $a1, 0x2898($s1)
    ctx->pc = 0x129c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10392)));
    // 0x129c7c: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x129c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129c80: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x129c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129c84: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x129c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x129c88: 0x6ba80027  ldl         $t0, 0x27($sp)
    ctx->pc = 0x129c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x129c8c: 0x6fa80020  ldr         $t0, 0x20($sp)
    ctx->pc = 0x129c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x129c90: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x129c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x129c94: 0xb3a80057  sdl         $t0, 0x57($sp)
    ctx->pc = 0x129c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129c98: 0xb7a80050  sdr         $t0, 0x50($sp)
    ctx->pc = 0x129c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129c9c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x129c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x129ca0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x129ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x129ca4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x129ca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x129ca8: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x129ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129cac: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x129cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129cb0: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x129cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x129cb4: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x129cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x129cb8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x129cb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x129cbc: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x129cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129cc0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x129cc0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x129cc4: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x129cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129cc8: 0xe7a60068  swc1        $f6, 0x68($sp)
    ctx->pc = 0x129cc8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x129ccc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x129cccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x129cd0: 0xe7a50060  swc1        $f5, 0x60($sp)
    ctx->pc = 0x129cd0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x129cd4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x129cd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x129cd8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x129cd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x129cdc: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x129cdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129ce0: 0x0  nop
    ctx->pc = 0x129ce0u;
    // NOP
    // 0x129ce4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x129CE4u;
    {
        const bool branch_taken_0x129ce4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x129CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129CE4u;
        // 0x129ce8: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ce4) {
            ctx->pc = 0x129CF0u;
            goto label_129cf0;
        }
    }
    ctx->pc = 0x129CECu;
    // 0x129cec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x129cecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129cf0:
    // 0x129cf0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x129cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129cf4: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x129cf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129cf8: 0x0  nop
    ctx->pc = 0x129cf8u;
    // NOP
    // 0x129cfc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x129CFCu;
    {
        const bool branch_taken_0x129cfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x129D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129CFCu;
        // 0x129d00: 0x27a20068  addiu       $v0, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129cfc) {
            ctx->pc = 0x129D08u;
            goto label_129d08;
        }
    }
    ctx->pc = 0x129D04u;
    // 0x129d04: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x129d04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_129d08:
    // 0x129d08: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x129d08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x129d0c: 0xc09b320  jal         func_26CC80
    ctx->pc = 0x129D0Cu;
    SET_GPR_U32(ctx, 31, 0x129D14u);
    ctx->pc = 0x129D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129D0Cu;
    // 0x129d10: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CC80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CC80u, 0x129D0Cu, 0x129D14u)) {
        return;
    }
    ctx->pc = 0x129D14u;
label_129d14:
    // 0x129d14: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x129d14u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x129d18: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x129d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129d1c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x129d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129d20: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x129d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x129d24: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x129d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x129d28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x129d28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x129d2c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x129d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129d30: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x129d30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x129d34: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x129d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129d38: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x129d38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x129d3c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x129d3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x129d40: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x129d40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x129d44: 0x46160834  c.lt.s      $f1, $f22
    ctx->pc = 0x129d44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129d48: 0x0  nop
    ctx->pc = 0x129d48u;
    // NOP
    // 0x129d4c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x129D4Cu;
    {
        const bool branch_taken_0x129d4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x129d4c) {
            ctx->pc = 0x129D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129D4Cu;
            // 0x129d50: 0x46002947  neg.s       $f5, $f5 (Delay Slot)
            ctx->f[5] = FPU_NEG_S(ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x129D54u;
            goto label_129d54;
        }
    }
    ctx->pc = 0x129D54u;
label_129d54:
    // 0x129d54: 0x46002845  abs.s       $f1, $f5
    ctx->pc = 0x129d54u;
    ctx->f[1] = FPU_ABS_S(ctx->f[5]);
    // 0x129d58: 0x3c013db2  lui         $at, 0x3DB2
    ctx->pc = 0x129d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15794 << 16));
    // 0x129d5c: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x129d5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x129d60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x129d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129d64: 0xe6252bfc  swc1        $f5, 0x2BFC($s1)
    ctx->pc = 0x129d64u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11260), bits); }
    // 0x129d68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x129d68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129d6c: 0x0  nop
    ctx->pc = 0x129d6cu;
    // NOP
    // 0x129d70: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x129D70u;
    {
        const bool branch_taken_0x129d70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x129D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D70u;
        // 0x129d74: 0xe7a10070  swc1        $f1, 0x70($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d70) {
            ctx->pc = 0x129DB0u;
            goto label_129db0;
        }
    }
    ctx->pc = 0x129D78u;
    // 0x129d78: 0x6a272897  ldl         $a3, 0x2897($s1)
    ctx->pc = 0x129d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 10391); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x129d7c: 0x6e272890  ldr         $a3, 0x2890($s1)
    ctx->pc = 0x129d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 10384); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x129d80: 0x8e282898  lw          $t0, 0x2898($s1)
    ctx->pc = 0x129d80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10392)));
    // 0x129d84: 0xb3a70037  sdl         $a3, 0x37($sp)
    ctx->pc = 0x129d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129d88: 0xb7a70030  sdr         $a3, 0x30($sp)
    ctx->pc = 0x129d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129d8c: 0xafa80038  sw          $t0, 0x38($sp)
    ctx->pc = 0x129d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 8));
    // 0x129d90: 0x6ba40037  ldl         $a0, 0x37($sp)
    ctx->pc = 0x129d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x129d94: 0x6fa40030  ldr         $a0, 0x30($sp)
    ctx->pc = 0x129d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x129d98: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x129d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x129d9c: 0xb2242c07  sdl         $a0, 0x2C07($s1)
    ctx->pc = 0x129d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129da0: 0xb6242c00  sdr         $a0, 0x2C00($s1)
    ctx->pc = 0x129da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129da4: 0xae252c08  sw          $a1, 0x2C08($s1)
    ctx->pc = 0x129da4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11272), GPR_U32(ctx, 5));
    // 0x129da8: 0x1000018f  b           . + 4 + (0x18F << 2)
    ctx->pc = 0x129DA8u;
    {
        const bool branch_taken_0x129da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129DA8u;
        // 0x129dac: 0xe6362bfc  swc1        $f22, 0x2BFC($s1) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129da8) {
            ctx->pc = 0x12A3E8u;
            goto label_12a3e8;
        }
    }
    ctx->pc = 0x129DB0u;
label_129db0:
    // 0x129db0: 0xc620278c  lwc1        $f0, 0x278C($s1)
    ctx->pc = 0x129db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 10124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129db4: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x129db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x129db8: 0x27a2006c  addiu       $v0, $sp, 0x6C
    ctx->pc = 0x129db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x129dbc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x129dbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x129dc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x129dc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129dc4: 0x0  nop
    ctx->pc = 0x129dc4u;
    // NOP
    // 0x129dc8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x129DC8u;
    {
        const bool branch_taken_0x129dc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x129DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129DC8u;
        // 0x129dcc: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129dc8) {
            ctx->pc = 0x129DD4u;
            goto label_129dd4;
        }
    }
    ctx->pc = 0x129DD0u;
    // 0x129dd0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x129dd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_129dd4:
    // 0x129dd4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x129dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129dd8: 0x46162834  c.lt.s      $f5, $f22
    ctx->pc = 0x129dd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129ddc: 0x0  nop
    ctx->pc = 0x129ddcu;
    // NOP
    // 0x129de0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x129DE0u;
    {
        const bool branch_taken_0x129de0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x129DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129DE0u;
        // 0x129de4: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129de0) {
            ctx->pc = 0x129DF0u;
            goto label_129df0;
        }
    }
    ctx->pc = 0x129DE8u;
    // 0x129de8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x129de8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x129dec: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x129decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_129df0:
    // 0x129df0: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x129df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x129df4: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x129df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x129df8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x129df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x129dfc: 0xb3a80047  sdl         $t0, 0x47($sp)
    ctx->pc = 0x129dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129e00: 0xb7a80040  sdr         $t0, 0x40($sp)
    ctx->pc = 0x129e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129e04: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x129e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x129e08: 0xc7b4006c  lwc1        $f20, 0x6C($sp)
    ctx->pc = 0x129e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x129e0c: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x129E0Cu;
    SET_GPR_U32(ctx, 31, 0x129E14u);
    ctx->pc = 0x129E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129E0Cu;
    // 0x129e10: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x129E0Cu, 0x129E14u)) {
        return;
    }
    ctx->pc = 0x129E14u;
label_129e14:
    // 0x129e14: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x129e14u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x129e18: 0xc09b164  jal         func_26C590
    ctx->pc = 0x129E18u;
    SET_GPR_U32(ctx, 31, 0x129E20u);
    ctx->pc = 0x129E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129E18u;
    // 0x129e1c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x129E18u, 0x129E20u)) {
        return;
    }
    ctx->pc = 0x129E20u;
label_129e20:
    // 0x129e20: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x129e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x129e24: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x129e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129e28: 0x46001902  mul.s       $f4, $f3, $f0
    ctx->pc = 0x129e28u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x129e2c: 0xe7b60054  swc1        $f22, 0x54($sp)
    ctx->pc = 0x129e2cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x129e30: 0x46151042  mul.s       $f1, $f2, $f21
    ctx->pc = 0x129e30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x129e34: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x129e34u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x129e38: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x129e38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x129e3c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x129e3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x129e40: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x129e40u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x129e44: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x129e44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x129e48: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x129e48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x129e4c: 0x6ba50057  ldl         $a1, 0x57($sp)
    ctx->pc = 0x129e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x129e50: 0x6fa50050  ldr         $a1, 0x50($sp)
    ctx->pc = 0x129e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x129e54: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x129e54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x129e58: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x129e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129e5c: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x129e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129e60: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x129e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x129e64: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x129e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x129e68: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x129e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x129e6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x129e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x129e70: 0xb2222c07  sdl         $v0, 0x2C07($s1)
    ctx->pc = 0x129e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129e74: 0xb6222c00  sdr         $v0, 0x2C00($s1)
    ctx->pc = 0x129e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129e78: 0xae232c08  sw          $v1, 0x2C08($s1)
    ctx->pc = 0x129e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11272), GPR_U32(ctx, 3));
    // 0x129e7c: 0x1000015b  b           . + 4 + (0x15B << 2)
    ctx->pc = 0x129E7Cu;
    {
        const bool branch_taken_0x129e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E7Cu;
        // 0x129e80: 0x8e232bf0  lw          $v1, 0x2BF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e7c) {
            ctx->pc = 0x12A3ECu;
            goto label_12a3ec;
        }
    }
    ctx->pc = 0x129E84u;
label_129e84:
    // 0x129e84: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x129e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x129e88: 0x10400157  beqz        $v0, . + 4 + (0x157 << 2)
    ctx->pc = 0x129E88u;
    {
        const bool branch_taken_0x129e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E88u;
        // 0x129e8c: 0x26300360  addiu       $s0, $s1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e88) {
            ctx->pc = 0x12A3E8u;
            goto label_12a3e8;
        }
    }
    ctx->pc = 0x129E90u;
    // 0x129e90: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x129e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x129e94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x129e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x129e98: 0x2442c9e0  addiu       $v0, $v0, -0x3620
    ctx->pc = 0x129e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953440));
    // 0x129e9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x129e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x129ea0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x129ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x129ea4: 0x800008  jr          $a0
    ctx->pc = 0x129EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129EACu: goto label_129eac;
            case 0x12A078u: goto label_12a078;
            case 0x12A2CCu: goto label_12a2cc;
            case 0x12A3B4u: goto label_12a3b4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129EA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x129EACu;
label_129eac:
    // 0x129eac: 0x8e222aa8  lw          $v0, 0x2AA8($s1)
    ctx->pc = 0x129eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10920)));
    // 0x129eb0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x129eb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x129eb4: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x129eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129eb8: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x129eb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129ebc: 0x0  nop
    ctx->pc = 0x129ebcu;
    // NOP
    // 0x129ec0: 0x45000149  bc1f        . + 4 + (0x149 << 2)
    ctx->pc = 0x129EC0u;
    {
        const bool branch_taken_0x129ec0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x129EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129EC0u;
        // 0x129ec4: 0x26300360  addiu       $s0, $s1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ec0) {
            ctx->pc = 0x12A3E8u;
            goto label_12a3e8;
        }
    }
    ctx->pc = 0x129EC8u;
    // 0x129ec8: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x129ec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x129ecc: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x129eccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x129ed0: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x129ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x129ed4: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x129ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129ed8: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x129ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129edc: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x129edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x129ee0: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x129ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x129ee4: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x129ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x129ee8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x129ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x129eec: 0xb3a30047  sdl         $v1, 0x47($sp)
    ctx->pc = 0x129eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129ef0: 0xb7a30040  sdr         $v1, 0x40($sp)
    ctx->pc = 0x129ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129ef4: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x129ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x129ef8: 0x27a20078  addiu       $v0, $sp, 0x78
    ctx->pc = 0x129ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x129efc: 0x6ba70027  ldl         $a3, 0x27($sp)
    ctx->pc = 0x129efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x129f00: 0x6fa70020  ldr         $a3, 0x20($sp)
    ctx->pc = 0x129f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x129f04: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x129f04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x129f08: 0xb3a70057  sdl         $a3, 0x57($sp)
    ctx->pc = 0x129f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129f0c: 0xb7a70050  sdr         $a3, 0x50($sp)
    ctx->pc = 0x129f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129f10: 0xafa80058  sw          $t0, 0x58($sp)
    ctx->pc = 0x129f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 8));
    // 0x129f14: 0x27a30074  addiu       $v1, $sp, 0x74
    ctx->pc = 0x129f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x129f18: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x129f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x129f1c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x129f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x129f20: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x129f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129f24: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x129f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x129f28: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x129f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129f2c: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x129f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x129f30: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x129f30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x129f34: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x129f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129f38: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x129f38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x129f3c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x129f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129f40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x129f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x129f44: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x129f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x129f48: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x129f48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x129f4c: 0xe7a50074  swc1        $f5, 0x74($sp)
    ctx->pc = 0x129f4cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x129f50: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x129f50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x129f54: 0xe7a4007c  swc1        $f4, 0x7C($sp)
    ctx->pc = 0x129f54u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x129f58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x129f58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x129f5c: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x129f5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129f60: 0x0  nop
    ctx->pc = 0x129f60u;
    // NOP
    // 0x129f64: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x129F64u;
    {
        const bool branch_taken_0x129f64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x129F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F64u;
        // 0x129f68: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f64) {
            ctx->pc = 0x129F70u;
            goto label_129f70;
        }
    }
    ctx->pc = 0x129F6Cu;
    // 0x129f6c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x129f6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129f70:
    // 0x129f70: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x129f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129f74: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x129f74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129f78: 0x0  nop
    ctx->pc = 0x129f78u;
    // NOP
    // 0x129f7c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x129F7Cu;
    {
        const bool branch_taken_0x129f7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x129F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F7Cu;
        // 0x129f80: 0x27a2007c  addiu       $v0, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f7c) {
            ctx->pc = 0x129F88u;
            goto label_129f88;
        }
    }
    ctx->pc = 0x129F84u;
    // 0x129f84: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x129f84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_129f88:
    // 0x129f88: 0xc09b320  jal         func_26CC80
    ctx->pc = 0x129F88u;
    SET_GPR_U32(ctx, 31, 0x129F90u);
    ctx->pc = 0x129F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129F88u;
    // 0x129f8c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CC80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CC80u, 0x129F88u, 0x129F90u)) {
        return;
    }
    ctx->pc = 0x129F90u;
label_129f90:
    // 0x129f90: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x129f90u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x129f94: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x129f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x129f98: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x129f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129f9c: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x129f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x129fa0: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x129fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x129fa4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x129fa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x129fa8: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x129fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x129fac: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x129facu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x129fb0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x129fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x129fb4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x129fb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x129fb8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x129fb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x129fbc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x129fbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x129fc0: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x129fc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129fc4: 0x0  nop
    ctx->pc = 0x129fc4u;
    // NOP
    // 0x129fc8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x129FC8u;
    {
        const bool branch_taken_0x129fc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x129fc8) {
            ctx->pc = 0x129FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129FC8u;
            // 0x129fcc: 0x46002947  neg.s       $f5, $f5 (Delay Slot)
            ctx->f[5] = FPU_NEG_S(ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x129FD0u;
            goto label_129fd0;
        }
    }
    ctx->pc = 0x129FD0u;
label_129fd0:
    // 0x129fd0: 0x46002845  abs.s       $f1, $f5
    ctx->pc = 0x129fd0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[5]);
    // 0x129fd4: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x129fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x129fd8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x129fd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x129fdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x129fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129fe0: 0x0  nop
    ctx->pc = 0x129fe0u;
    // NOP
    // 0x129fe4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x129fe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129fe8: 0x0  nop
    ctx->pc = 0x129fe8u;
    // NOP
    // 0x129fec: 0x450000fe  bc1f        . + 4 + (0xFE << 2)
    ctx->pc = 0x129FECu;
    {
        const bool branch_taken_0x129fec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x129FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129FECu;
        // 0x129ff0: 0xe6252bfc  swc1        $f5, 0x2BFC($s1) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129fec) {
            ctx->pc = 0x12A3E8u;
            goto label_12a3e8;
        }
    }
    ctx->pc = 0x129FF4u;
    // 0x129ff4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x129ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x129ff8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x129ff8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x129ffc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x129ffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a000: 0x0  nop
    ctx->pc = 0x12a000u;
    // NOP
    // 0x12a004: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12a004u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a008: 0x0  nop
    ctx->pc = 0x12a008u;
    // NOP
    // 0x12a00c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x12A00Cu;
    {
        const bool branch_taken_0x12a00c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a00c) {
            ctx->pc = 0x12A02Cu;
            goto label_12a02c;
        }
    }
    ctx->pc = 0x12A014u;
    // 0x12a014: 0x4605a034  c.lt.s      $f20, $f5
    ctx->pc = 0x12a014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a018: 0x0  nop
    ctx->pc = 0x12a018u;
    // NOP
    // 0x12a01c: 0x4500006c  bc1f        . + 4 + (0x6C << 2)
    ctx->pc = 0x12A01Cu;
    {
        const bool branch_taken_0x12a01c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A01Cu;
        // 0x12a020: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a01c) {
            ctx->pc = 0x12A1D0u;
            goto label_12a1d0;
        }
    }
    ctx->pc = 0x12A024u;
    // 0x12a024: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x12A024u;
    {
        const bool branch_taken_0x12a024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A024u;
        // 0x12a028: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a024) {
            ctx->pc = 0x12A1D0u;
            goto label_12a1d0;
        }
    }
    ctx->pc = 0x12A02Cu;
label_12a02c:
    // 0x12a02c: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x12a02cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x12a030: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x12a030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x12a034: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x12a034u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12a038: 0xb2262c17  sdl         $a2, 0x2C17($s1)
    ctx->pc = 0x12a038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12a03c: 0xb6262c10  sdr         $a2, 0x2C10($s1)
    ctx->pc = 0x12a03cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12a040: 0xae272c18  sw          $a3, 0x2C18($s1)
    ctx->pc = 0x12a040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11288), GPR_U32(ctx, 7));
    // 0x12a044: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x12a044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x12a048: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x12a048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x12a04c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12a04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12a050: 0xb2232c27  sdl         $v1, 0x2C27($s1)
    ctx->pc = 0x12a050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12a054: 0xb6232c20  sdr         $v1, 0x2C20($s1)
    ctx->pc = 0x12a054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12a058: 0xae242c28  sw          $a0, 0x2C28($s1)
    ctx->pc = 0x12a058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11304), GPR_U32(ctx, 4));
    // 0x12a05c: 0xc6202bfc  lwc1        $f0, 0x2BFC($s1)
    ctx->pc = 0x12a05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a060: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x12a060u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a064: 0x0  nop
    ctx->pc = 0x12a064u;
    // NOP
    // 0x12a068: 0x45000059  bc1f        . + 4 + (0x59 << 2)
    ctx->pc = 0x12A068u;
    {
        const bool branch_taken_0x12a068 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A068u;
        // 0x12a06c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a068) {
            ctx->pc = 0x12A1D0u;
            goto label_12a1d0;
        }
    }
    ctx->pc = 0x12A070u;
    // 0x12a070: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x12A070u;
    {
        const bool branch_taken_0x12a070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A070u;
        // 0x12a074: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a070) {
            ctx->pc = 0x12A1D0u;
            goto label_12a1d0;
        }
    }
    ctx->pc = 0x12A078u;
label_12a078:
    // 0x12a078: 0x8e222bf0  lw          $v0, 0x2BF0($s1)
    ctx->pc = 0x12a078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11248)));
    // 0x12a07c: 0x104000da  beqz        $v0, . + 4 + (0xDA << 2)
    ctx->pc = 0x12A07Cu;
    {
        const bool branch_taken_0x12a07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A07Cu;
        // 0x12a080: 0x26300360  addiu       $s0, $s1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a07c) {
            ctx->pc = 0x12A3E8u;
            goto label_12a3e8;
        }
    }
    ctx->pc = 0x12A084u;
    // 0x12a084: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x12a084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x12a088: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x12a088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x12a08c: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x12a08cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12a090: 0xb3a70037  sdl         $a3, 0x37($sp)
    ctx->pc = 0x12a090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12a094: 0xb7a70030  sdr         $a3, 0x30($sp)
    ctx->pc = 0x12a094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12a098: 0xafa80038  sw          $t0, 0x38($sp)
    ctx->pc = 0x12a098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 8));
    // 0x12a09c: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x12a09cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x12a0a0: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x12a0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x12a0a4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x12a0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12a0a8: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x12a0a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12a0ac: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x12a0acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12a0b0: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x12a0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x12a0b4: 0x27a20084  addiu       $v0, $sp, 0x84
    ctx->pc = 0x12a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x12a0b8: 0x6ba80027  ldl         $t0, 0x27($sp)
    ctx->pc = 0x12a0b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x12a0bc: 0x6fa80020  ldr         $t0, 0x20($sp)
    ctx->pc = 0x12a0bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x12a0c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12a0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a0c4: 0xb3a80057  sdl         $t0, 0x57($sp)
    ctx->pc = 0x12a0c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12a0c8: 0xb7a80050  sdr         $t0, 0x50($sp)
    ctx->pc = 0x12a0c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12a0cc: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x12a0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x12a0d0: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x12a0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12a0d4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12a0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x12a0d8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x12a0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x12a0dc: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x12a0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12a0e0: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x12a0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12a0e4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x12a0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a0e8: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x12a0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12a0ec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x12a0ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x12a0f0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x12a0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12a0f4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x12a0f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x12a0f8: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x12a0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12a0fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12a0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12a100: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x12a100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x12a104: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x12a104u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x12a108: 0xe7a50080  swc1        $f5, 0x80($sp)
    ctx->pc = 0x12a108u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x12a10c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x12a10cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x12a110: 0xe7a40088  swc1        $f4, 0x88($sp)
    ctx->pc = 0x12a110u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x12a114: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12a114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12a118: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x12a118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a11c: 0x0  nop
    ctx->pc = 0x12a11cu;
    // NOP
    // 0x12a120: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x12A120u;
    {
        const bool branch_taken_0x12a120 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A120u;
        // 0x12a124: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a120) {
            ctx->pc = 0x12A12Cu;
            goto label_12a12c;
        }
    }
    ctx->pc = 0x12A128u;
    // 0x12a128: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12a128u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a12c:
    // 0x12a12c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x12a12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a130: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x12a130u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a134: 0x0  nop
    ctx->pc = 0x12a134u;
    // NOP
    // 0x12a138: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x12A138u;
    {
        const bool branch_taken_0x12a138 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A138u;
        // 0x12a13c: 0x27a20088  addiu       $v0, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a138) {
            ctx->pc = 0x12A144u;
            goto label_12a144;
        }
    }
    ctx->pc = 0x12A140u;
    // 0x12a140: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x12a140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_12a144:
    // 0x12a144: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x12a144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x12a148: 0xc09b320  jal         func_26CC80
    ctx->pc = 0x12A148u;
    SET_GPR_U32(ctx, 31, 0x12A150u);
    ctx->pc = 0x12A14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A148u;
    // 0x12a14c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CC80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CC80u, 0x12A148u, 0x12A150u)) {
        return;
    }
    ctx->pc = 0x12A150u;
label_12a150:
    // 0x12a150: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x12a150u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x12a154: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x12a154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12a158: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x12a158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a15c: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x12a15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12a160: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x12a160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12a164: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x12a164u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12a168: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x12a168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12a16c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x12a16cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x12a170: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x12a170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a174: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x12a174u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x12a178: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x12a178u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x12a17c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x12a17cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x12a180: 0x46160834  c.lt.s      $f1, $f22
    ctx->pc = 0x12a180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a184: 0x0  nop
    ctx->pc = 0x12a184u;
    // NOP
    // 0x12a188: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x12A188u;
    {
        const bool branch_taken_0x12a188 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a188) {
            ctx->pc = 0x12A18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A188u;
            // 0x12a18c: 0x46002947  neg.s       $f5, $f5 (Delay Slot)
            ctx->f[5] = FPU_NEG_S(ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A190u;
            goto label_12a190;
        }
    }
    ctx->pc = 0x12A190u;
label_12a190:
    // 0x12a190: 0x46002845  abs.s       $f1, $f5
    ctx->pc = 0x12a190u;
    ctx->f[1] = FPU_ABS_S(ctx->f[5]);
    // 0x12a194: 0x3c013db2  lui         $at, 0x3DB2
    ctx->pc = 0x12a194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15794 << 16));
    // 0x12a198: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x12a198u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x12a19c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a19cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a1a0: 0xe6252bfc  swc1        $f5, 0x2BFC($s1)
    ctx->pc = 0x12a1a0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11260), bits); }
    // 0x12a1a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12a1a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a1a8: 0x0  nop
    ctx->pc = 0x12a1a8u;
    // NOP
    // 0x12a1ac: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x12A1ACu;
    {
        const bool branch_taken_0x12a1ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A1ACu;
        // 0x12a1b0: 0xe7a10090  swc1        $f1, 0x90($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a1ac) {
            ctx->pc = 0x12A1D8u;
            goto label_12a1d8;
        }
    }
    ctx->pc = 0x12A1B4u;
    // 0x12a1b4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x12a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12a1b8: 0x6ba70017  ldl         $a3, 0x17($sp)
    ctx->pc = 0x12a1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x12a1bc: 0x6fa70010  ldr         $a3, 0x10($sp)
    ctx->pc = 0x12a1bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x12a1c0: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x12a1c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12a1c4: 0xb2272c07  sdl         $a3, 0x2C07($s1)
    ctx->pc = 0x12a1c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12a1c8: 0xb6272c00  sdr         $a3, 0x2C00($s1)
    ctx->pc = 0x12a1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12a1cc: 0xae282c08  sw          $t0, 0x2C08($s1)
    ctx->pc = 0x12a1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11272), GPR_U32(ctx, 8));
label_12a1d0:
    // 0x12a1d0: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x12A1D0u;
    {
        const bool branch_taken_0x12a1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A1D0u;
        // 0x12a1d4: 0xae222bf8  sw          $v0, 0x2BF8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a1d0) {
            ctx->pc = 0x12A3E8u;
            goto label_12a3e8;
        }
    }
    ctx->pc = 0x12A1D8u;
label_12a1d8:
    // 0x12a1d8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x12a1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x12a1dc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12a1dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x12a1e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a1e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a1e4: 0x0  nop
    ctx->pc = 0x12a1e4u;
    // NOP
    // 0x12a1e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12a1e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a1ec: 0x0  nop
    ctx->pc = 0x12a1ecu;
    // NOP
    // 0x12a1f0: 0x4501fff7  bc1t        . + 4 + (-0x9 << 2)
    ctx->pc = 0x12A1F0u;
    {
        const bool branch_taken_0x12a1f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A1F0u;
        // 0x12a1f4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a1f0) {
            ctx->pc = 0x12A1D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a1d0;
        }
    }
    ctx->pc = 0x12A1F8u;
    // 0x12a1f8: 0xc620278c  lwc1        $f0, 0x278C($s1)
    ctx->pc = 0x12a1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 10124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a1fc: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x12a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x12a200: 0x27a2008c  addiu       $v0, $sp, 0x8C
    ctx->pc = 0x12a200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x12a204: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x12a204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x12a208: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12a208u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a20c: 0x0  nop
    ctx->pc = 0x12a20cu;
    // NOP
    // 0x12a210: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x12A210u;
    {
        const bool branch_taken_0x12a210 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A210u;
        // 0x12a214: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a210) {
            ctx->pc = 0x12A21Cu;
            goto label_12a21c;
        }
    }
    ctx->pc = 0x12A218u;
    // 0x12a218: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x12a218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_12a21c:
    // 0x12a21c: 0x46162834  c.lt.s      $f5, $f22
    ctx->pc = 0x12a21cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a220: 0x0  nop
    ctx->pc = 0x12a220u;
    // NOP
    // 0x12a224: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x12A224u;
    {
        const bool branch_taken_0x12a224 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A224u;
        // 0x12a228: 0xc4550000  lwc1        $f21, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a224) {
            ctx->pc = 0x12A230u;
            goto label_12a230;
        }
    }
    ctx->pc = 0x12A22Cu;
    // 0x12a22c: 0x4600ad47  neg.s       $f21, $f21
    ctx->pc = 0x12a22cu;
    ctx->f[21] = FPU_NEG_S(ctx->f[21]);
label_12a230:
    // 0x12a230: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x12a230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x12a234: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x12a234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x12a238: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x12a238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12a23c: 0xb3a50047  sdl         $a1, 0x47($sp)
    ctx->pc = 0x12a23cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12a240: 0xb7a50040  sdr         $a1, 0x40($sp)
    ctx->pc = 0x12a240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12a244: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x12a244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x12a248: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x12A248u;
    SET_GPR_U32(ctx, 31, 0x12A250u);
    ctx->pc = 0x12A24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A248u;
    // 0x12a24c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x12A248u, 0x12A250u)) {
        return;
    }
    ctx->pc = 0x12A250u;
label_12a250:
    // 0x12a250: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x12a250u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x12a254: 0xc09b164  jal         func_26C590
    ctx->pc = 0x12A254u;
    SET_GPR_U32(ctx, 31, 0x12A25Cu);
    ctx->pc = 0x12A258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A254u;
    // 0x12a258: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x12A254u, 0x12A25Cu)) {
        return;
    }
    ctx->pc = 0x12A25Cu;
label_12a25c:
    // 0x12a25c: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x12a25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12a260: 0x4615b034  c.lt.s      $f22, $f21
    ctx->pc = 0x12a260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a264: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x12a264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12a268: 0x46001902  mul.s       $f4, $f3, $f0
    ctx->pc = 0x12a268u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x12a26c: 0xe7b60054  swc1        $f22, 0x54($sp)
    ctx->pc = 0x12a26cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x12a270: 0x46141042  mul.s       $f1, $f2, $f20
    ctx->pc = 0x12a270u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x12a274: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x12a274u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x12a278: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x12a278u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x12a27c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x12a27cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x12a280: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x12a280u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x12a284: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x12a284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x12a288: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x12a288u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x12a28c: 0x6ba30057  ldl         $v1, 0x57($sp)
    ctx->pc = 0x12a28cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x12a290: 0x6fa30050  ldr         $v1, 0x50($sp)
    ctx->pc = 0x12a290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x12a294: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x12a294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12a298: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x12a298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12a29c: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x12a29cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12a2a0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x12a2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x12a2a4: 0x6ba70037  ldl         $a3, 0x37($sp)
    ctx->pc = 0x12a2a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x12a2a8: 0x6fa70030  ldr         $a3, 0x30($sp)
    ctx->pc = 0x12a2a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x12a2ac: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x12a2acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12a2b0: 0xb2272c07  sdl         $a3, 0x2C07($s1)
    ctx->pc = 0x12a2b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12a2b4: 0xb6272c00  sdr         $a3, 0x2C00($s1)
    ctx->pc = 0x12a2b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12a2b8: 0xae282c08  sw          $t0, 0x2C08($s1)
    ctx->pc = 0x12a2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11272), GPR_U32(ctx, 8));
    // 0x12a2bc: 0x4500ffc4  bc1f        . + 4 + (-0x3C << 2)
    ctx->pc = 0x12A2BCu;
    {
        const bool branch_taken_0x12a2bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A2BCu;
        // 0x12a2c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a2bc) {
            ctx->pc = 0x12A1D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a1d0;
        }
    }
    ctx->pc = 0x12A2C4u;
    // 0x12a2c4: 0x1000ffc2  b           . + 4 + (-0x3E << 2)
    ctx->pc = 0x12A2C4u;
    {
        const bool branch_taken_0x12a2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A2C4u;
        // 0x12a2c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a2c4) {
            ctx->pc = 0x12A1D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a1d0;
        }
    }
    ctx->pc = 0x12A2CCu;
label_12a2cc:
    // 0x12a2cc: 0x8e222bf0  lw          $v0, 0x2BF0($s1)
    ctx->pc = 0x12a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11248)));
    // 0x12a2d0: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x12A2D0u;
    {
        const bool branch_taken_0x12a2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A2D0u;
        // 0x12a2d4: 0x26300360  addiu       $s0, $s1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a2d0) {
            ctx->pc = 0x12A3E8u;
            goto label_12a3e8;
        }
    }
    ctx->pc = 0x12A2D8u;
    // 0x12a2d8: 0xc615081c  lwc1        $f21, 0x81C($s0)
    ctx->pc = 0x12a2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12a2dc: 0xc6000824  lwc1        $f0, 0x824($s0)
    ctx->pc = 0x12a2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a2e0: 0xc6342bfc  lwc1        $f20, 0x2BFC($s1)
    ctx->pc = 0x12a2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12a2e4: 0x0  nop
    ctx->pc = 0x12a2e4u;
    // NOP
    // 0x12a2e8: 0x0  nop
    ctx->pc = 0x12a2e8u;
    // NOP
    // 0x12a2ec: 0x4600ad43  div.s       $f21, $f21, $f0
    ctx->pc = 0x12a2ecu;
    ctx->f[21] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[0]);
    // 0x12a2f0: 0x6a252c17  ldl         $a1, 0x2C17($s1)
    ctx->pc = 0x12a2f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x12a2f4: 0x6e252c10  ldr         $a1, 0x2C10($s1)
    ctx->pc = 0x12a2f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x12a2f8: 0x8e262c18  lw          $a2, 0x2C18($s1)
    ctx->pc = 0x12a2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11288)));
    // 0x12a2fc: 0xb3a50047  sdl         $a1, 0x47($sp)
    ctx->pc = 0x12a2fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12a300: 0xb7a50040  sdr         $a1, 0x40($sp)
    ctx->pc = 0x12a300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12a304: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x12a304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x12a308: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x12a308u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x12a30c: 0xc09b0e8  jal         func_26C3A0
    ctx->pc = 0x12A30Cu;
    SET_GPR_U32(ctx, 31, 0x12A314u);
    ctx->pc = 0x12A310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A30Cu;
    // 0x12a310: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x12A30Cu, 0x12A314u)) {
        return;
    }
    ctx->pc = 0x12A314u;
label_12a314:
    // 0x12a314: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x12a314u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x12a318: 0xc09b164  jal         func_26C590
    ctx->pc = 0x12A318u;
    SET_GPR_U32(ctx, 31, 0x12A320u);
    ctx->pc = 0x12A31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A318u;
    // 0x12a31c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x12A318u, 0x12A320u)) {
        return;
    }
    ctx->pc = 0x12A320u;
label_12a320:
    // 0x12a320: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x12a320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12a324: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x12a324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12a328: 0x46001902  mul.s       $f4, $f3, $f0
    ctx->pc = 0x12a328u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x12a32c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12a32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12a330: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x12a330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x12a334: 0x46161042  mul.s       $f1, $f2, $f22
    ctx->pc = 0x12a334u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x12a338: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x12a338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x12a33c: 0x461618c2  mul.s       $f3, $f3, $f22
    ctx->pc = 0x12a33cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[22]);
    // 0x12a340: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x12a340u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x12a344: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x12a344u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x12a348: 0x46152836  c.le.s      $f5, $f21
    ctx->pc = 0x12a348u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a34c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x12a34cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x12a350: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x12a350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x12a354: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x12a354u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x12a358: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x12a358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x12a35c: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x12a35cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x12a360: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x12a360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12a364: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x12a364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12a368: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x12a368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12a36c: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x12a36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x12a370: 0x6ba60037  ldl         $a2, 0x37($sp)
    ctx->pc = 0x12a370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x12a374: 0x6fa60030  ldr         $a2, 0x30($sp)
    ctx->pc = 0x12a374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x12a378: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x12a378u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12a37c: 0xb2262c07  sdl         $a2, 0x2C07($s1)
    ctx->pc = 0x12a37cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12a380: 0xb6262c00  sdr         $a2, 0x2C00($s1)
    ctx->pc = 0x12a380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12a384: 0xae272c08  sw          $a3, 0x2C08($s1)
    ctx->pc = 0x12a384u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11272), GPR_U32(ctx, 7));
    // 0x12a388: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x12A388u;
    {
        const bool branch_taken_0x12a388 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A388u;
        // 0x12a38c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a388) {
            ctx->pc = 0x12A3E8u;
            goto label_12a3e8;
        }
    }
    ctx->pc = 0x12A390u;
    // 0x12a390: 0xae222bf8  sw          $v0, 0x2BF8($s1)
    ctx->pc = 0x12a390u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11256), GPR_U32(ctx, 2));
    // 0x12a394: 0x6a232c27  ldl         $v1, 0x2C27($s1)
    ctx->pc = 0x12a394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x12a398: 0x6e232c20  ldr         $v1, 0x2C20($s1)
    ctx->pc = 0x12a398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x12a39c: 0x8e242c28  lw          $a0, 0x2C28($s1)
    ctx->pc = 0x12a39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11304)));
    // 0x12a3a0: 0xb2232c07  sdl         $v1, 0x2C07($s1)
    ctx->pc = 0x12a3a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12a3a4: 0xb6232c00  sdr         $v1, 0x2C00($s1)
    ctx->pc = 0x12a3a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12a3a8: 0xae242c08  sw          $a0, 0x2C08($s1)
    ctx->pc = 0x12a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11272), GPR_U32(ctx, 4));
    // 0x12a3ac: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12A3ACu;
    {
        const bool branch_taken_0x12a3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A3ACu;
        // 0x12a3b0: 0x8e232bf0  lw          $v1, 0x2BF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a3ac) {
            ctx->pc = 0x12A3ECu;
            goto label_12a3ec;
        }
    }
    ctx->pc = 0x12A3B4u;
label_12a3b4:
    // 0x12a3b4: 0x8e222bf0  lw          $v0, 0x2BF0($s1)
    ctx->pc = 0x12a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11248)));
    // 0x12a3b8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12A3B8u;
    {
        const bool branch_taken_0x12a3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A3B8u;
        // 0x12a3bc: 0x26300360  addiu       $s0, $s1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a3b8) {
            ctx->pc = 0x12A3E8u;
            goto label_12a3e8;
        }
    }
    ctx->pc = 0x12A3C0u;
    // 0x12a3c0: 0xae202bf8  sw          $zero, 0x2BF8($s1)
    ctx->pc = 0x12a3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11256), GPR_U32(ctx, 0));
    // 0x12a3c4: 0x26222c10  addiu       $v0, $s1, 0x2C10
    ctx->pc = 0x12a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 11280));
    // 0x12a3c8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x12a3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x12a3cc: 0x26232c20  addiu       $v1, $s1, 0x2C20
    ctx->pc = 0x12a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 11296));
    // 0x12a3d0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x12a3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x12a3d4: 0xae202c10  sw          $zero, 0x2C10($s1)
    ctx->pc = 0x12a3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11280), GPR_U32(ctx, 0));
    // 0x12a3d8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12a3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12a3dc: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x12a3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x12a3e0: 0xae202c20  sw          $zero, 0x2C20($s1)
    ctx->pc = 0x12a3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11296), GPR_U32(ctx, 0));
    // 0x12a3e4: 0xae202bfc  sw          $zero, 0x2BFC($s1)
    ctx->pc = 0x12a3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11260), GPR_U32(ctx, 0));
label_12a3e8:
    // 0x12a3e8: 0x8e232bf0  lw          $v1, 0x2BF0($s1)
    ctx->pc = 0x12a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11248)));
label_12a3ec:
    // 0x12a3ec: 0x26252994  addiu       $a1, $s1, 0x2994
    ctx->pc = 0x12a3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 10644));
    // 0x12a3f0: 0x8e242bf8  lw          $a0, 0x2BF8($s1)
    ctx->pc = 0x12a3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11256)));
    // 0x12a3f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x12a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12a3f8: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12A3F8u;
    {
        const bool branch_taken_0x12a3f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x12A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A3F8u;
        // 0x12a3fc: 0xae232bf4  sw          $v1, 0x2BF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11252), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a3f8) {
            ctx->pc = 0x12A420u;
            goto label_12a420;
        }
    }
    ctx->pc = 0x12A400u;
    // 0x12a400: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x12a400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x12a404: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x12a404u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12a408: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12A408u;
    {
        const bool branch_taken_0x12a408 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x12a408) {
            ctx->pc = 0x12A428u;
            goto label_12a428;
        }
    }
    ctx->pc = 0x12A410u;
    // 0x12a410: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12a410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12a414: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12a414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12a418: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12A418u;
    {
        const bool branch_taken_0x12a418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a418) {
            ctx->pc = 0x12A428u;
            goto label_12a428;
        }
    }
    ctx->pc = 0x12A420u;
label_12a420:
    // 0x12a420: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12a420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x12a424: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12a424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12a428:
    // 0x12a428: 0xc06802e  jal         func_1A00B8
    ctx->pc = 0x12A428u;
    SET_GPR_U32(ctx, 31, 0x12A430u);
    ctx->pc = 0x12A42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A428u;
    // 0x12a42c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A00B8u, 0x12A428u, 0x12A430u)) {
        return;
    }
    ctx->pc = 0x12A430u;
label_12a430:
    // 0x12a430: 0x8e242bf8  lw          $a0, 0x2BF8($s1)
    ctx->pc = 0x12a430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11256)));
    // 0x12a434: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12a434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12a438: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12A438u;
    {
        const bool branch_taken_0x12a438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x12A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A438u;
        // 0x12a43c: 0x2625299c  addiu       $a1, $s1, 0x299C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 10652));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a438) {
            ctx->pc = 0x12A460u;
            goto label_12a460;
        }
    }
    ctx->pc = 0x12A440u;
    // 0x12a440: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12a440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12a444: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x12a444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12a448: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12A448u;
    {
        const bool branch_taken_0x12a448 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x12a448) {
            ctx->pc = 0x12A468u;
            goto label_12a468;
        }
    }
    ctx->pc = 0x12A450u;
    // 0x12a450: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12a450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12a454: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12a454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12a458: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12A458u;
    {
        const bool branch_taken_0x12a458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a458) {
            ctx->pc = 0x12A468u;
            goto label_12a468;
        }
    }
    ctx->pc = 0x12A460u;
label_12a460:
    // 0x12a460: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12a460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x12a464: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12a464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12a468:
    // 0x12a468: 0xc06802e  jal         func_1A00B8
    ctx->pc = 0x12A468u;
    SET_GPR_U32(ctx, 31, 0x12A470u);
    ctx->pc = 0x12A46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A468u;
    // 0x12a46c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A00B8u, 0x12A468u, 0x12A470u)) {
        return;
    }
    ctx->pc = 0x12A470u;
label_12a470:
    // 0x12a470: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x12a470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12a474: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x12a474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12a478: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x12a478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12a47c: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x12a47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x12a480: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x12a480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12a484: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x12a484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12a488: 0x3e00008  jr          $ra
    ctx->pc = 0x12A488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A488u;
        // 0x12a48c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A490u;
}
