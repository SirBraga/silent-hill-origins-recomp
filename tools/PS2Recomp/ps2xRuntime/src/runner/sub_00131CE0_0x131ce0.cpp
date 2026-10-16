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

// Function: sub_00131CE0
// Address: 0x131ce0 - 0x131ef0
void sub_00131CE0_0x131ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131CE0_0x131ce0");
#endif

    switch (ctx->pc) {
        case 0x131ce0u: goto label_131ce0;
        case 0x131ce4u: goto label_131ce4;
        case 0x131ce8u: goto label_131ce8;
        case 0x131cecu: goto label_131cec;
        case 0x131cf0u: goto label_131cf0;
        case 0x131cf4u: goto label_131cf4;
        case 0x131cf8u: goto label_131cf8;
        case 0x131cfcu: goto label_131cfc;
        case 0x131d00u: goto label_131d00;
        case 0x131d04u: goto label_131d04;
        case 0x131d08u: goto label_131d08;
        case 0x131d0cu: goto label_131d0c;
        case 0x131d10u: goto label_131d10;
        case 0x131d14u: goto label_131d14;
        case 0x131d18u: goto label_131d18;
        case 0x131d1cu: goto label_131d1c;
        case 0x131d20u: goto label_131d20;
        case 0x131d24u: goto label_131d24;
        case 0x131d28u: goto label_131d28;
        case 0x131d2cu: goto label_131d2c;
        case 0x131d30u: goto label_131d30;
        case 0x131d34u: goto label_131d34;
        case 0x131d38u: goto label_131d38;
        case 0x131d3cu: goto label_131d3c;
        case 0x131d40u: goto label_131d40;
        case 0x131d44u: goto label_131d44;
        case 0x131d48u: goto label_131d48;
        case 0x131d4cu: goto label_131d4c;
        case 0x131d50u: goto label_131d50;
        case 0x131d54u: goto label_131d54;
        case 0x131d58u: goto label_131d58;
        case 0x131d5cu: goto label_131d5c;
        case 0x131d60u: goto label_131d60;
        case 0x131d64u: goto label_131d64;
        case 0x131d68u: goto label_131d68;
        case 0x131d6cu: goto label_131d6c;
        case 0x131d70u: goto label_131d70;
        case 0x131d74u: goto label_131d74;
        case 0x131d78u: goto label_131d78;
        case 0x131d7cu: goto label_131d7c;
        case 0x131d80u: goto label_131d80;
        case 0x131d84u: goto label_131d84;
        case 0x131d88u: goto label_131d88;
        case 0x131d8cu: goto label_131d8c;
        case 0x131d90u: goto label_131d90;
        case 0x131d94u: goto label_131d94;
        case 0x131d98u: goto label_131d98;
        case 0x131d9cu: goto label_131d9c;
        case 0x131da0u: goto label_131da0;
        case 0x131da4u: goto label_131da4;
        case 0x131da8u: goto label_131da8;
        case 0x131dacu: goto label_131dac;
        case 0x131db0u: goto label_131db0;
        case 0x131db4u: goto label_131db4;
        case 0x131db8u: goto label_131db8;
        case 0x131dbcu: goto label_131dbc;
        case 0x131dc0u: goto label_131dc0;
        case 0x131dc4u: goto label_131dc4;
        case 0x131dc8u: goto label_131dc8;
        case 0x131dccu: goto label_131dcc;
        case 0x131dd0u: goto label_131dd0;
        case 0x131dd4u: goto label_131dd4;
        case 0x131dd8u: goto label_131dd8;
        case 0x131ddcu: goto label_131ddc;
        case 0x131de0u: goto label_131de0;
        case 0x131de4u: goto label_131de4;
        case 0x131de8u: goto label_131de8;
        case 0x131decu: goto label_131dec;
        case 0x131df0u: goto label_131df0;
        case 0x131df4u: goto label_131df4;
        case 0x131df8u: goto label_131df8;
        case 0x131dfcu: goto label_131dfc;
        case 0x131e00u: goto label_131e00;
        case 0x131e04u: goto label_131e04;
        case 0x131e08u: goto label_131e08;
        case 0x131e0cu: goto label_131e0c;
        case 0x131e10u: goto label_131e10;
        case 0x131e14u: goto label_131e14;
        case 0x131e18u: goto label_131e18;
        case 0x131e1cu: goto label_131e1c;
        case 0x131e20u: goto label_131e20;
        case 0x131e24u: goto label_131e24;
        case 0x131e28u: goto label_131e28;
        case 0x131e2cu: goto label_131e2c;
        case 0x131e30u: goto label_131e30;
        case 0x131e34u: goto label_131e34;
        case 0x131e38u: goto label_131e38;
        case 0x131e3cu: goto label_131e3c;
        case 0x131e40u: goto label_131e40;
        case 0x131e44u: goto label_131e44;
        case 0x131e48u: goto label_131e48;
        case 0x131e4cu: goto label_131e4c;
        case 0x131e50u: goto label_131e50;
        case 0x131e54u: goto label_131e54;
        case 0x131e58u: goto label_131e58;
        case 0x131e5cu: goto label_131e5c;
        case 0x131e60u: goto label_131e60;
        case 0x131e64u: goto label_131e64;
        case 0x131e68u: goto label_131e68;
        case 0x131e6cu: goto label_131e6c;
        case 0x131e70u: goto label_131e70;
        case 0x131e74u: goto label_131e74;
        case 0x131e78u: goto label_131e78;
        case 0x131e7cu: goto label_131e7c;
        case 0x131e80u: goto label_131e80;
        case 0x131e84u: goto label_131e84;
        case 0x131e88u: goto label_131e88;
        case 0x131e8cu: goto label_131e8c;
        case 0x131e90u: goto label_131e90;
        case 0x131e94u: goto label_131e94;
        case 0x131e98u: goto label_131e98;
        case 0x131e9cu: goto label_131e9c;
        case 0x131ea0u: goto label_131ea0;
        case 0x131ea4u: goto label_131ea4;
        case 0x131ea8u: goto label_131ea8;
        case 0x131eacu: goto label_131eac;
        case 0x131eb0u: goto label_131eb0;
        case 0x131eb4u: goto label_131eb4;
        case 0x131eb8u: goto label_131eb8;
        case 0x131ebcu: goto label_131ebc;
        case 0x131ec0u: goto label_131ec0;
        case 0x131ec4u: goto label_131ec4;
        case 0x131ec8u: goto label_131ec8;
        case 0x131eccu: goto label_131ecc;
        case 0x131ed0u: goto label_131ed0;
        case 0x131ed4u: goto label_131ed4;
        case 0x131ed8u: goto label_131ed8;
        case 0x131edcu: goto label_131edc;
        case 0x131ee0u: goto label_131ee0;
        case 0x131ee4u: goto label_131ee4;
        case 0x131ee8u: goto label_131ee8;
        case 0x131eecu: goto label_131eec;
        default: break;
    }

    ctx->pc = 0x131ce0u;

label_131ce0:
    // 0x131ce0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x131ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_131ce4:
    // 0x131ce4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x131ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_131ce8:
    // 0x131ce8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x131ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_131cec:
    // 0x131cec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x131cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_131cf0:
    // 0x131cf0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x131cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_131cf4:
    // 0x131cf4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x131cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_131cf8:
    // 0x131cf8: 0xc04989e  jal         func_126278
label_131cfc:
    if (ctx->pc == 0x131CFCu) {
        ctx->pc = 0x131CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131CF8u;
        // 0x131cfc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131D00u;
        goto label_131d00;
    }
    ctx->pc = 0x131CF8u;
    SET_GPR_U32(ctx, 31, 0x131D00u);
    ctx->pc = 0x131CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131CF8u;
    // 0x131cfc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126278u, 0x131CF8u, 0x131D00u)) {
        return;
    }
    ctx->pc = 0x131D00u;
label_131d00:
    // 0x131d00: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x131d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_131d04:
    // 0x131d04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x131d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_131d08:
    // 0x131d08: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x131d08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_131d0c:
    // 0x131d0c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x131d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_131d10:
    // 0x131d10: 0x60f809  jalr        $v1
label_131d14:
    if (ctx->pc == 0x131D14u) {
        ctx->pc = 0x131D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131D10u;
        // 0x131d14: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131D18u;
        goto label_131d18;
    }
    ctx->pc = 0x131D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x131D18u);
        ctx->pc = 0x131D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131D10u;
        // 0x131d14: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131D10u, 0x131D18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x131D18u;
label_131d18:
    // 0x131d18: 0xc04f0cc  jal         func_13C330
label_131d1c:
    if (ctx->pc == 0x131D1Cu) {
        ctx->pc = 0x131D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131D18u;
        // 0x131d1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131D20u;
        goto label_131d20;
    }
    ctx->pc = 0x131D18u;
    SET_GPR_U32(ctx, 31, 0x131D20u);
    ctx->pc = 0x131D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131D18u;
    // 0x131d1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x131D18u, 0x131D20u)) {
        return;
    }
    ctx->pc = 0x131D20u;
label_131d20:
    // 0x131d20: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x131d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_131d24:
    // 0x131d24: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x131d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_131d28:
    // 0x131d28: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x131d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_131d2c:
    // 0x131d2c: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x131d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_131d30:
    // 0x131d30: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x131d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_131d34:
    // 0x131d34: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x131d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_131d38:
    // 0x131d38: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x131d38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_131d3c:
    // 0x131d3c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x131d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_131d40:
    // 0x131d40: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x131d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_131d44:
    // 0x131d44: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x131d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_131d48:
    // 0x131d48: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x131d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_131d4c:
    // 0x131d4c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x131d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_131d50:
    // 0x131d50: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x131d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_131d54:
    // 0x131d54: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x131d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_131d58:
    // 0x131d58: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x131d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_131d5c:
    // 0x131d5c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x131d5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_131d60:
    // 0x131d60: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x131d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_131d64:
    // 0x131d64: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x131d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_131d68:
    // 0x131d68: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x131d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_131d6c:
    // 0x131d6c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x131d6cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_131d70:
    // 0x131d70: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x131d70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_131d74:
    // 0x131d74: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x131d74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_131d78:
    // 0x131d78: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x131d78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_131d7c:
    // 0x131d7c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x131d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_131d80:
    // 0x131d80: 0x6ba60047  ldl         $a2, 0x47($sp)
    ctx->pc = 0x131d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_131d84:
    // 0x131d84: 0x6fa60040  ldr         $a2, 0x40($sp)
    ctx->pc = 0x131d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_131d88:
    // 0x131d88: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x131d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_131d8c:
    // 0x131d8c: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x131d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_131d90:
    // 0x131d90: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x131d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_131d94:
    // 0x131d94: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x131d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_131d98:
    // 0x131d98: 0x26501b60  addiu       $s0, $s2, 0x1B60
    ctx->pc = 0x131d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 7008));
label_131d9c:
    // 0x131d9c: 0x6ba50037  ldl         $a1, 0x37($sp)
    ctx->pc = 0x131d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_131da0:
    // 0x131da0: 0x6fa50030  ldr         $a1, 0x30($sp)
    ctx->pc = 0x131da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_131da4:
    // 0x131da4: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x131da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_131da8:
    // 0x131da8: 0xb2451b67  sdl         $a1, 0x1B67($s2)
    ctx->pc = 0x131da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7015); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_131dac:
    // 0x131dac: 0xb6451b60  sdr         $a1, 0x1B60($s2)
    ctx->pc = 0x131dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7008); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_131db0:
    // 0x131db0: 0xae461b68  sw          $a2, 0x1B68($s2)
    ctx->pc = 0x131db0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 7016), GPR_U32(ctx, 6));
label_131db4:
    // 0x131db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x131db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_131db8:
    // 0x131db8: 0xc04642c  jal         func_1190B0
label_131dbc:
    if (ctx->pc == 0x131DBCu) {
        ctx->pc = 0x131DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131DB8u;
        // 0x131dbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131DC0u;
        goto label_131dc0;
    }
    ctx->pc = 0x131DB8u;
    SET_GPR_U32(ctx, 31, 0x131DC0u);
    ctx->pc = 0x131DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131DB8u;
    // 0x131dbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x131DB8u, 0x131DC0u)) {
        return;
    }
    ctx->pc = 0x131DC0u;
label_131dc0:
    // 0x131dc0: 0x0  nop
    ctx->pc = 0x131dc0u;
    // NOP
label_131dc4:
    // 0x131dc4: 0x0  nop
    ctx->pc = 0x131dc4u;
    // NOP
label_131dc8:
    // 0x131dc8: 0x46000044  c1          0x44
    ctx->pc = 0x131dc8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_131dcc:
    // 0x131dcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x131dccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_131dd0:
    // 0x131dd0: 0x0  nop
    ctx->pc = 0x131dd0u;
    // NOP
label_131dd4:
    // 0x131dd4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x131dd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_131dd8:
    // 0x131dd8: 0x0  nop
    ctx->pc = 0x131dd8u;
    // NOP
label_131ddc:
    // 0x131ddc: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_131de0:
    if (ctx->pc == 0x131DE0u) {
        ctx->pc = 0x131DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131DDCu;
        // 0x131de0: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x131DE4u;
        goto label_131de4;
    }
    ctx->pc = 0x131DDCu;
    {
        const bool branch_taken_0x131ddc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x131DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131DDCu;
        // 0x131de0: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x131ddc) {
            ctx->pc = 0x131E14u;
            goto label_131e14;
        }
    }
    ctx->pc = 0x131DE4u;
label_131de4:
    // 0x131de4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x131de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_131de8:
    // 0x131de8: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x131de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_131dec:
    // 0x131dec: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x131decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_131df0:
    // 0x131df0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x131df0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_131df4:
    // 0x131df4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x131df4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_131df8:
    // 0x131df8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x131df8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_131dfc:
    // 0x131dfc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x131dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_131e00:
    // 0x131e00: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x131e00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_131e04:
    // 0x131e04: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_131e08:
    if (ctx->pc == 0x131E08u) {
        ctx->pc = 0x131E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E04u;
        // 0x131e08: 0xe6020008  swc1        $f2, 0x8($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x131E0Cu;
        goto label_131e0c;
    }
    ctx->pc = 0x131E04u;
    {
        const bool branch_taken_0x131e04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x131E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E04u;
        // 0x131e08: 0xe6020008  swc1        $f2, 0x8($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131e04) {
            ctx->pc = 0x131E2Cu;
            goto label_131e2c;
        }
    }
    ctx->pc = 0x131E0Cu;
label_131e0c:
    // 0x131e0c: 0x10000008  b           . + 4 + (0x8 << 2)
label_131e10:
    if (ctx->pc == 0x131E10u) {
        ctx->pc = 0x131E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E0Cu;
        // 0x131e10: 0x2624ffbc  addiu       $a0, $s1, -0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967228));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131E14u;
        goto label_131e14;
    }
    ctx->pc = 0x131E0Cu;
    {
        const bool branch_taken_0x131e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E0Cu;
        // 0x131e10: 0x2624ffbc  addiu       $a0, $s1, -0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967228));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131e0c) {
            ctx->pc = 0x131E30u;
            goto label_131e30;
        }
    }
    ctx->pc = 0x131E14u;
label_131e14:
    // 0x131e14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x131e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_131e18:
    // 0x131e18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x131e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_131e1c:
    // 0x131e1c: 0x0  nop
    ctx->pc = 0x131e1cu;
    // NOP
label_131e20:
    // 0x131e20: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x131e20u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_131e24:
    // 0x131e24: 0x1000fff0  b           . + 4 + (-0x10 << 2)
label_131e28:
    if (ctx->pc == 0x131E28u) {
        ctx->pc = 0x131E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E24u;
        // 0x131e28: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x131E2Cu;
        goto label_131e2c;
    }
    ctx->pc = 0x131E24u;
    {
        const bool branch_taken_0x131e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E24u;
        // 0x131e28: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131e24) {
            ctx->pc = 0x131DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131de8;
        }
    }
    ctx->pc = 0x131E2Cu;
label_131e2c:
    // 0x131e2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x131e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_131e30:
    // 0x131e30: 0x2483ffc0  addiu       $v1, $a0, -0x40
    ctx->pc = 0x131e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
label_131e34:
    // 0x131e34: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x131e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_131e38:
    // 0x131e38: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x131e38u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_131e3c:
    // 0x131e3c: 0x8c508b2c  lw          $s0, -0x74D4($v0)
    ctx->pc = 0x131e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
label_131e40:
    // 0x131e40: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_131e44:
    if (ctx->pc == 0x131E44u) {
        ctx->pc = 0x131E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E40u;
        // 0x131e44: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131E48u;
        goto label_131e48;
    }
    ctx->pc = 0x131E40u;
    {
        const bool branch_taken_0x131e40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x131E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E40u;
        // 0x131e44: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131e40) {
            ctx->pc = 0x131ECCu;
            goto label_131ecc;
        }
    }
    ctx->pc = 0x131E48u;
label_131e48:
    // 0x131e48: 0x8e06006c  lw          $a2, 0x6C($s0)
    ctx->pc = 0x131e48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_131e4c:
    // 0x131e4c: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
label_131e50:
    if (ctx->pc == 0x131E50u) {
        ctx->pc = 0x131E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E4Cu;
        // 0x131e50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131E54u;
        goto label_131e54;
    }
    ctx->pc = 0x131E4Cu;
    {
        const bool branch_taken_0x131e4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x131E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E4Cu;
        // 0x131e50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131e4c) {
            ctx->pc = 0x131ECCu;
            goto label_131ecc;
        }
    }
    ctx->pc = 0x131E54u;
label_131e54:
    // 0x131e54: 0x8cc30050  lw          $v1, 0x50($a2)
    ctx->pc = 0x131e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
label_131e58:
    // 0x131e58: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
label_131e5c:
    if (ctx->pc == 0x131E5Cu) {
        ctx->pc = 0x131E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E58u;
        // 0x131e5c: 0x8e430048  lw          $v1, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131E60u;
        goto label_131e60;
    }
    ctx->pc = 0x131E58u;
    {
        const bool branch_taken_0x131e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x131e58) {
            ctx->pc = 0x131E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131E58u;
            // 0x131e5c: 0x8e430048  lw          $v1, 0x48($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131E94u;
            goto label_131e94;
        }
    }
    ctx->pc = 0x131E60u;
label_131e60:
    // 0x131e60: 0x8cc30054  lw          $v1, 0x54($a2)
    ctx->pc = 0x131e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_131e64:
    // 0x131e64: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x131e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_131e68:
    // 0x131e68: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_131e6c:
    if (ctx->pc == 0x131E6Cu) {
        ctx->pc = 0x131E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E68u;
        // 0x131e6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131E70u;
        goto label_131e70;
    }
    ctx->pc = 0x131E68u;
    {
        const bool branch_taken_0x131e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x131E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E68u;
        // 0x131e6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131e68) {
            ctx->pc = 0x131E8Cu;
            goto label_131e8c;
        }
    }
    ctx->pc = 0x131E70u;
label_131e70:
    // 0x131e70: 0x8c822d60  lw          $v0, 0x2D60($a0)
    ctx->pc = 0x131e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11616)));
label_131e74:
    // 0x131e74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_131e78:
    if (ctx->pc == 0x131E78u) {
        ctx->pc = 0x131E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E74u;
        // 0x131e78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131E7Cu;
        goto label_131e7c;
    }
    ctx->pc = 0x131E74u;
    {
        const bool branch_taken_0x131e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E74u;
        // 0x131e78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131e74) {
            ctx->pc = 0x131E8Cu;
            goto label_131e8c;
        }
    }
    ctx->pc = 0x131E7Cu;
label_131e7c:
    // 0x131e7c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x131e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_131e80:
    // 0x131e80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x131e80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_131e84:
    // 0x131e84: 0x0  nop
    ctx->pc = 0x131e84u;
    // NOP
label_131e88:
    // 0x131e88: 0xe4802d58  swc1        $f0, 0x2D58($a0)
    ctx->pc = 0x131e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11608), bits); }
label_131e8c:
    // 0x131e8c: 0xac822d80  sw          $v0, 0x2D80($a0)
    ctx->pc = 0x131e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11648), GPR_U32(ctx, 2));
label_131e90:
    // 0x131e90: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x131e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_131e94:
    // 0x131e94: 0x26450044  addiu       $a1, $s2, 0x44
    ctx->pc = 0x131e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
label_131e98:
    // 0x131e98: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x131e98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_131e9c:
    // 0x131e9c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x131e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_131ea0:
    // 0x131ea0: 0x40f809  jalr        $v0
label_131ea4:
    if (ctx->pc == 0x131EA4u) {
        ctx->pc = 0x131EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131EA0u;
        // 0x131ea4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131EA8u;
        goto label_131ea8;
    }
    ctx->pc = 0x131EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x131EA8u);
        ctx->pc = 0x131EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131EA0u;
        // 0x131ea4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131EA0u, 0x131EA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x131EA8u;
label_131ea8:
    // 0x131ea8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_131eac:
    if (ctx->pc == 0x131EACu) {
        ctx->pc = 0x131EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131EA8u;
        // 0x131eac: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131EB0u;
        goto label_131eb0;
    }
    ctx->pc = 0x131EA8u;
    {
        const bool branch_taken_0x131ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131ea8) {
            ctx->pc = 0x131EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131EA8u;
            // 0x131eac: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131ED8u;
            goto label_131ed8;
        }
    }
    ctx->pc = 0x131EB0u;
label_131eb0:
    // 0x131eb0: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x131eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_131eb4:
    // 0x131eb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x131eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_131eb8:
    // 0x131eb8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x131eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_131ebc:
    // 0x131ebc: 0xc063c4e  jal         func_18F138
label_131ec0:
    if (ctx->pc == 0x131EC0u) {
        ctx->pc = 0x131EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131EBCu;
        // 0x131ec0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131EC4u;
        goto label_131ec4;
    }
    ctx->pc = 0x131EBCu;
    SET_GPR_U32(ctx, 31, 0x131EC4u);
    ctx->pc = 0x131EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131EBCu;
    // 0x131ec0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18F138u, 0x131EBCu, 0x131EC4u)) {
        return;
    }
    ctx->pc = 0x131EC4u;
label_131ec4:
    // 0x131ec4: 0x10000004  b           . + 4 + (0x4 << 2)
label_131ec8:
    if (ctx->pc == 0x131EC8u) {
        ctx->pc = 0x131EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131EC4u;
        // 0x131ec8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131ECCu;
        goto label_131ecc;
    }
    ctx->pc = 0x131EC4u;
    {
        const bool branch_taken_0x131ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131EC4u;
        // 0x131ec8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131ec4) {
            ctx->pc = 0x131ED8u;
            goto label_131ed8;
        }
    }
    ctx->pc = 0x131ECCu;
label_131ecc:
    // 0x131ecc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_131ed0:
    // 0x131ed0: 0xac822d80  sw          $v0, 0x2D80($a0)
    ctx->pc = 0x131ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11648), GPR_U32(ctx, 2));
label_131ed4:
    // 0x131ed4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x131ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_131ed8:
    // 0x131ed8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x131ed8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_131edc:
    // 0x131edc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x131edcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_131ee0:
    // 0x131ee0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x131ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_131ee4:
    // 0x131ee4: 0x3e00008  jr          $ra
label_131ee8:
    if (ctx->pc == 0x131EE8u) {
        ctx->pc = 0x131EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131EE4u;
        // 0x131ee8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131EECu;
        goto label_131eec;
    }
    ctx->pc = 0x131EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131EE4u;
        // 0x131ee8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131EECu;
label_131eec:
    // 0x131eec: 0x0  nop
    ctx->pc = 0x131eecu;
    // NOP
    ctx->pc = 0x131ef0u;
}
