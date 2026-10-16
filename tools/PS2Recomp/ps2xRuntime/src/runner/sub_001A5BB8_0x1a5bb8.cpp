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

// Function: sub_001A5BB8
// Address: 0x1a5bb8 - 0x1a5dd0
void sub_001A5BB8_0x1a5bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5BB8_0x1a5bb8");
#endif

    switch (ctx->pc) {
        case 0x1a5bb8u: goto label_1a5bb8;
        case 0x1a5bbcu: goto label_1a5bbc;
        case 0x1a5bc0u: goto label_1a5bc0;
        case 0x1a5bc4u: goto label_1a5bc4;
        case 0x1a5bc8u: goto label_1a5bc8;
        case 0x1a5bccu: goto label_1a5bcc;
        case 0x1a5bd0u: goto label_1a5bd0;
        case 0x1a5bd4u: goto label_1a5bd4;
        case 0x1a5bd8u: goto label_1a5bd8;
        case 0x1a5bdcu: goto label_1a5bdc;
        case 0x1a5be0u: goto label_1a5be0;
        case 0x1a5be4u: goto label_1a5be4;
        case 0x1a5be8u: goto label_1a5be8;
        case 0x1a5becu: goto label_1a5bec;
        case 0x1a5bf0u: goto label_1a5bf0;
        case 0x1a5bf4u: goto label_1a5bf4;
        case 0x1a5bf8u: goto label_1a5bf8;
        case 0x1a5bfcu: goto label_1a5bfc;
        case 0x1a5c00u: goto label_1a5c00;
        case 0x1a5c04u: goto label_1a5c04;
        case 0x1a5c08u: goto label_1a5c08;
        case 0x1a5c0cu: goto label_1a5c0c;
        case 0x1a5c10u: goto label_1a5c10;
        case 0x1a5c14u: goto label_1a5c14;
        case 0x1a5c18u: goto label_1a5c18;
        case 0x1a5c1cu: goto label_1a5c1c;
        case 0x1a5c20u: goto label_1a5c20;
        case 0x1a5c24u: goto label_1a5c24;
        case 0x1a5c28u: goto label_1a5c28;
        case 0x1a5c2cu: goto label_1a5c2c;
        case 0x1a5c30u: goto label_1a5c30;
        case 0x1a5c34u: goto label_1a5c34;
        case 0x1a5c38u: goto label_1a5c38;
        case 0x1a5c3cu: goto label_1a5c3c;
        case 0x1a5c40u: goto label_1a5c40;
        case 0x1a5c44u: goto label_1a5c44;
        case 0x1a5c48u: goto label_1a5c48;
        case 0x1a5c4cu: goto label_1a5c4c;
        case 0x1a5c50u: goto label_1a5c50;
        case 0x1a5c54u: goto label_1a5c54;
        case 0x1a5c58u: goto label_1a5c58;
        case 0x1a5c5cu: goto label_1a5c5c;
        case 0x1a5c60u: goto label_1a5c60;
        case 0x1a5c64u: goto label_1a5c64;
        case 0x1a5c68u: goto label_1a5c68;
        case 0x1a5c6cu: goto label_1a5c6c;
        case 0x1a5c70u: goto label_1a5c70;
        case 0x1a5c74u: goto label_1a5c74;
        case 0x1a5c78u: goto label_1a5c78;
        case 0x1a5c7cu: goto label_1a5c7c;
        case 0x1a5c80u: goto label_1a5c80;
        case 0x1a5c84u: goto label_1a5c84;
        case 0x1a5c88u: goto label_1a5c88;
        case 0x1a5c8cu: goto label_1a5c8c;
        case 0x1a5c90u: goto label_1a5c90;
        case 0x1a5c94u: goto label_1a5c94;
        case 0x1a5c98u: goto label_1a5c98;
        case 0x1a5c9cu: goto label_1a5c9c;
        case 0x1a5ca0u: goto label_1a5ca0;
        case 0x1a5ca4u: goto label_1a5ca4;
        case 0x1a5ca8u: goto label_1a5ca8;
        case 0x1a5cacu: goto label_1a5cac;
        case 0x1a5cb0u: goto label_1a5cb0;
        case 0x1a5cb4u: goto label_1a5cb4;
        case 0x1a5cb8u: goto label_1a5cb8;
        case 0x1a5cbcu: goto label_1a5cbc;
        case 0x1a5cc0u: goto label_1a5cc0;
        case 0x1a5cc4u: goto label_1a5cc4;
        case 0x1a5cc8u: goto label_1a5cc8;
        case 0x1a5cccu: goto label_1a5ccc;
        case 0x1a5cd0u: goto label_1a5cd0;
        case 0x1a5cd4u: goto label_1a5cd4;
        case 0x1a5cd8u: goto label_1a5cd8;
        case 0x1a5cdcu: goto label_1a5cdc;
        case 0x1a5ce0u: goto label_1a5ce0;
        case 0x1a5ce4u: goto label_1a5ce4;
        case 0x1a5ce8u: goto label_1a5ce8;
        case 0x1a5cecu: goto label_1a5cec;
        case 0x1a5cf0u: goto label_1a5cf0;
        case 0x1a5cf4u: goto label_1a5cf4;
        case 0x1a5cf8u: goto label_1a5cf8;
        case 0x1a5cfcu: goto label_1a5cfc;
        case 0x1a5d00u: goto label_1a5d00;
        case 0x1a5d04u: goto label_1a5d04;
        case 0x1a5d08u: goto label_1a5d08;
        case 0x1a5d0cu: goto label_1a5d0c;
        case 0x1a5d10u: goto label_1a5d10;
        case 0x1a5d14u: goto label_1a5d14;
        case 0x1a5d18u: goto label_1a5d18;
        case 0x1a5d1cu: goto label_1a5d1c;
        case 0x1a5d20u: goto label_1a5d20;
        case 0x1a5d24u: goto label_1a5d24;
        case 0x1a5d28u: goto label_1a5d28;
        case 0x1a5d2cu: goto label_1a5d2c;
        case 0x1a5d30u: goto label_1a5d30;
        case 0x1a5d34u: goto label_1a5d34;
        case 0x1a5d38u: goto label_1a5d38;
        case 0x1a5d3cu: goto label_1a5d3c;
        case 0x1a5d40u: goto label_1a5d40;
        case 0x1a5d44u: goto label_1a5d44;
        case 0x1a5d48u: goto label_1a5d48;
        case 0x1a5d4cu: goto label_1a5d4c;
        case 0x1a5d50u: goto label_1a5d50;
        case 0x1a5d54u: goto label_1a5d54;
        case 0x1a5d58u: goto label_1a5d58;
        case 0x1a5d5cu: goto label_1a5d5c;
        case 0x1a5d60u: goto label_1a5d60;
        case 0x1a5d64u: goto label_1a5d64;
        case 0x1a5d68u: goto label_1a5d68;
        case 0x1a5d6cu: goto label_1a5d6c;
        case 0x1a5d70u: goto label_1a5d70;
        case 0x1a5d74u: goto label_1a5d74;
        case 0x1a5d78u: goto label_1a5d78;
        case 0x1a5d7cu: goto label_1a5d7c;
        case 0x1a5d80u: goto label_1a5d80;
        case 0x1a5d84u: goto label_1a5d84;
        case 0x1a5d88u: goto label_1a5d88;
        case 0x1a5d8cu: goto label_1a5d8c;
        case 0x1a5d90u: goto label_1a5d90;
        case 0x1a5d94u: goto label_1a5d94;
        case 0x1a5d98u: goto label_1a5d98;
        case 0x1a5d9cu: goto label_1a5d9c;
        case 0x1a5da0u: goto label_1a5da0;
        case 0x1a5da4u: goto label_1a5da4;
        case 0x1a5da8u: goto label_1a5da8;
        case 0x1a5dacu: goto label_1a5dac;
        case 0x1a5db0u: goto label_1a5db0;
        case 0x1a5db4u: goto label_1a5db4;
        case 0x1a5db8u: goto label_1a5db8;
        case 0x1a5dbcu: goto label_1a5dbc;
        case 0x1a5dc0u: goto label_1a5dc0;
        case 0x1a5dc4u: goto label_1a5dc4;
        case 0x1a5dc8u: goto label_1a5dc8;
        case 0x1a5dccu: goto label_1a5dcc;
        default: break;
    }

    ctx->pc = 0x1a5bb8u;

label_1a5bb8:
    // 0x1a5bb8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a5bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1a5bbc:
    // 0x1a5bbc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1a5bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1a5bc0:
    // 0x1a5bc0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1a5bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1a5bc4:
    // 0x1a5bc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a5bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5bc8:
    // 0x1a5bc8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1a5bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1a5bcc:
    // 0x1a5bcc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a5bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a5bd0:
    // 0x1a5bd0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a5bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1a5bd4:
    // 0x1a5bd4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a5bd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a5bd8:
    // 0x1a5bd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a5bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a5bdc:
    // 0x1a5bdc: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1a5bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a5be0:
    // 0x1a5be0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1a5be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a5be4:
    // 0x1a5be4: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x1a5be4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_1a5be8:
    // 0x1a5be8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1a5be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1a5bec:
    // 0x1a5bec: 0x40f809  jalr        $v0
label_1a5bf0:
    if (ctx->pc == 0x1A5BF0u) {
        ctx->pc = 0x1A5BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BECu;
        // 0x1a5bf0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5BF4u;
        goto label_1a5bf4;
    }
    ctx->pc = 0x1A5BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5BF4u);
        ctx->pc = 0x1A5BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BECu;
        // 0x1a5bf0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5BECu, 0x1A5BF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5BF4u;
label_1a5bf4:
    // 0x1a5bf4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1a5bf8:
    if (ctx->pc == 0x1A5BF8u) {
        ctx->pc = 0x1A5BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BF4u;
        // 0x1a5bf8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5BFCu;
        goto label_1a5bfc;
    }
    ctx->pc = 0x1A5BF4u;
    {
        const bool branch_taken_0x1a5bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5BF4u;
        // 0x1a5bf8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5bf4) {
            ctx->pc = 0x1A5C10u;
            goto label_1a5c10;
        }
    }
    ctx->pc = 0x1A5BFCu;
label_1a5bfc:
    // 0x1a5bfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5c00:
    // 0x1a5c00: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1a5c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1a5c04:
    // 0x1a5c04: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1a5c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1a5c08:
    // 0x1a5c08: 0x1000006b  b           . + 4 + (0x6B << 2)
label_1a5c0c:
    if (ctx->pc == 0x1A5C0Cu) {
        ctx->pc = 0x1A5C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C08u;
        // 0x1a5c0c: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C10u;
        goto label_1a5c10;
    }
    ctx->pc = 0x1A5C08u;
    {
        const bool branch_taken_0x1a5c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C08u;
        // 0x1a5c0c: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c08) {
            ctx->pc = 0x1A5DB8u;
            goto label_1a5db8;
        }
    }
    ctx->pc = 0x1A5C10u;
label_1a5c10:
    // 0x1a5c10: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x1a5c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a5c14:
    // 0x1a5c14: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x1a5c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a5c18:
    // 0x1a5c18: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1a5c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1a5c1c:
    // 0x1a5c1c: 0xb2020077  sdl         $v0, 0x77($s0)
    ctx->pc = 0x1a5c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a5c20:
    // 0x1a5c20: 0xb6020070  sdr         $v0, 0x70($s0)
    ctx->pc = 0x1a5c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a5c24:
    // 0x1a5c24: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x1a5c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
label_1a5c28:
    // 0x1a5c28: 0x12200041  beqz        $s1, . + 4 + (0x41 << 2)
label_1a5c2c:
    if (ctx->pc == 0x1A5C2Cu) {
        ctx->pc = 0x1A5C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C28u;
        // 0x1a5c2c: 0x26220004  addiu       $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C30u;
        goto label_1a5c30;
    }
    ctx->pc = 0x1A5C28u;
    {
        const bool branch_taken_0x1a5c28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C28u;
        // 0x1a5c2c: 0x26220004  addiu       $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c28) {
            ctx->pc = 0x1A5D30u;
            goto label_1a5d30;
        }
    }
    ctx->pc = 0x1A5C30u;
label_1a5c30:
    // 0x1a5c30: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1a5c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a5c34:
    // 0x1a5c34: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1a5c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5c38:
    // 0x1a5c38: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1a5c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5c3c:
    // 0x1a5c3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a5c3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a5c40:
    // 0x1a5c40: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a5c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1a5c44:
    // 0x1a5c44: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1a5c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5c48:
    // 0x1a5c48: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a5c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5c4c:
    // 0x1a5c4c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a5c4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a5c50:
    // 0x1a5c50: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1a5c50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1a5c54:
    // 0x1a5c54: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a5c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5c58:
    // 0x1a5c58: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1a5c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5c5c:
    // 0x1a5c5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a5c5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a5c60:
    // 0x1a5c60: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1a5c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1a5c64:
    // 0x1a5c64: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x1a5c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a5c68:
    // 0x1a5c68: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x1a5c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a5c6c:
    // 0x1a5c6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a5c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a5c70:
    // 0x1a5c70: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x1a5c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a5c74:
    // 0x1a5c74: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x1a5c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a5c78:
    // 0x1a5c78: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1a5c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_1a5c7c:
    // 0x1a5c7c: 0x2622001c  addiu       $v0, $s1, 0x1C
    ctx->pc = 0x1a5c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_1a5c80:
    // 0x1a5c80: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1a5c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5c84:
    // 0x1a5c84: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x1a5c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5c88:
    // 0x1a5c88: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x1a5c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a5c8c:
    // 0x1a5c8c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a5c8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a5c90:
    // 0x1a5c90: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x1a5c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a5c94:
    // 0x1a5c94: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1a5c94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1a5c98:
    // 0x1a5c98: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1a5c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5c9c:
    // 0x1a5c9c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1a5c9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1a5ca0:
    // 0x1a5ca0: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1a5ca0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1a5ca4:
    // 0x1a5ca4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a5ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5ca8:
    // 0x1a5ca8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1a5ca8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1a5cac:
    // 0x1a5cac: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x1a5cacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1a5cb0:
    // 0x1a5cb0: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x1a5cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a5cb4:
    // 0x1a5cb4: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x1a5cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a5cb8:
    // 0x1a5cb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a5cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a5cbc:
    // 0x1a5cbc: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x1a5cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a5cc0:
    // 0x1a5cc0: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x1a5cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a5cc4:
    // 0x1a5cc4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1a5cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_1a5cc8:
    // 0x1a5cc8: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x1a5cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
label_1a5ccc:
    // 0x1a5ccc: 0x3421aa3b  ori         $at, $at, 0xAA3B
    ctx->pc = 0x1a5cccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43579);
label_1a5cd0:
    // 0x1a5cd0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1a5cd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a5cd4:
    // 0x1a5cd4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1a5cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a5cd8:
    // 0x1a5cd8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1a5cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5cdc:
    // 0x1a5cdc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a5cdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1a5ce0:
    // 0x1a5ce0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a5ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1a5ce4:
    // 0x1a5ce4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a5ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5ce8:
    // 0x1a5ce8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a5ce8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1a5cec:
    // 0x1a5cec: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1a5cecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1a5cf0:
    // 0x1a5cf0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a5cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5cf4:
    // 0x1a5cf4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a5cf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1a5cf8:
    // 0x1a5cf8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1a5cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1a5cfc:
    // 0x1a5cfc: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x1a5cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a5d00:
    // 0x1a5d00: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x1a5d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a5d04:
    // 0x1a5d04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a5d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a5d08:
    // 0x1a5d08: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1a5d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a5d0c:
    // 0x1a5d0c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1a5d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a5d10:
    // 0x1a5d10: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1a5d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_1a5d14:
    // 0x1a5d14: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1a5d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a5d18:
    // 0x1a5d18: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1a5d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a5d1c:
    // 0x1a5d1c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a5d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1a5d20:
    // 0x1a5d20: 0xb2020067  sdl         $v0, 0x67($s0)
    ctx->pc = 0x1a5d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a5d24:
    // 0x1a5d24: 0xb6020060  sdr         $v0, 0x60($s0)
    ctx->pc = 0x1a5d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a5d28:
    // 0x1a5d28: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x1a5d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_1a5d2c:
    // 0x1a5d2c: 0x0  nop
    ctx->pc = 0x1a5d2cu;
    // NOP
label_1a5d30:
    // 0x1a5d30: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_1a5d34:
    if (ctx->pc == 0x1A5D34u) {
        ctx->pc = 0x1A5D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D30u;
        // 0x1a5d34: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5D38u;
        goto label_1a5d38;
    }
    ctx->pc = 0x1A5D30u;
    {
        const bool branch_taken_0x1a5d30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D30u;
        // 0x1a5d34: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d30) {
            ctx->pc = 0x1A5D58u;
            goto label_1a5d58;
        }
    }
    ctx->pc = 0x1A5D38u;
label_1a5d38:
    // 0x1a5d38: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1a5d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1a5d3c:
    // 0x1a5d3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a5d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a5d40:
    // 0x1a5d40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a5d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5d44:
    // 0x1a5d44: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1a5d44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1a5d48:
    // 0x1a5d48: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1a5d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a5d4c:
    // 0x1a5d4c: 0x40f809  jalr        $v0
label_1a5d50:
    if (ctx->pc == 0x1A5D50u) {
        ctx->pc = 0x1A5D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D4Cu;
        // 0x1a5d50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5D54u;
        goto label_1a5d54;
    }
    ctx->pc = 0x1A5D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5D54u);
        ctx->pc = 0x1A5D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D4Cu;
        // 0x1a5d50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5D4Cu, 0x1A5D54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5D54u;
label_1a5d54:
    // 0x1a5d54: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1a5d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1a5d58:
    // 0x1a5d58: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1a5d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a5d5c:
    // 0x1a5d5c: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_1a5d60:
    if (ctx->pc == 0x1A5D60u) {
        ctx->pc = 0x1A5D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D5Cu;
        // 0x1a5d60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5D64u;
        goto label_1a5d64;
    }
    ctx->pc = 0x1A5D5Cu;
    {
        const bool branch_taken_0x1a5d5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D5Cu;
        // 0x1a5d60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d5c) {
            ctx->pc = 0x1A5D74u;
            goto label_1a5d74;
        }
    }
    ctx->pc = 0x1A5D64u;
label_1a5d64:
    // 0x1a5d64: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1a5d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1a5d68:
    // 0x1a5d68: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1a5d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1a5d6c:
    // 0x1a5d6c: 0x10000012  b           . + 4 + (0x12 << 2)
label_1a5d70:
    if (ctx->pc == 0x1A5D70u) {
        ctx->pc = 0x1A5D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D6Cu;
        // 0x1a5d70: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5D74u;
        goto label_1a5d74;
    }
    ctx->pc = 0x1A5D6Cu;
    {
        const bool branch_taken_0x1a5d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D6Cu;
        // 0x1a5d70: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d6c) {
            ctx->pc = 0x1A5DB8u;
            goto label_1a5db8;
        }
    }
    ctx->pc = 0x1A5D74u;
label_1a5d74:
    // 0x1a5d74: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1a5d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1a5d78:
    // 0x1a5d78: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1a5d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_1a5d7c:
    // 0x1a5d7c: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x1a5d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1a5d80:
    // 0x1a5d80: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1a5d80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a5d84:
    // 0x1a5d84: 0xc06a4da  jal         func_1A9368
label_1a5d88:
    if (ctx->pc == 0x1A5D88u) {
        ctx->pc = 0x1A5D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D84u;
        // 0x1a5d88: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5D8Cu;
        goto label_1a5d8c;
    }
    ctx->pc = 0x1A5D84u;
    SET_GPR_U32(ctx, 31, 0x1A5D8Cu);
    ctx->pc = 0x1A5D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5D84u;
    // 0x1a5d88: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9368u, 0x1A5D84u, 0x1A5D8Cu)) {
        return;
    }
    ctx->pc = 0x1A5D8Cu;
label_1a5d8c:
    // 0x1a5d8c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a5d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a5d90:
    // 0x1a5d90: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1a5d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5d94:
    // 0x1a5d94: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a5d94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a5d98:
    // 0x1a5d98: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x1a5d98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1a5d9c:
    // 0x1a5d9c: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1a5d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1a5da0:
    // 0x1a5da0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1a5da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a5da4:
    // 0x1a5da4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1a5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a5da8:
    // 0x1a5da8: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1a5da8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1a5dac:
    // 0x1a5dac: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1a5dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1a5db0:
    // 0x1a5db0: 0x60f809  jalr        $v1
label_1a5db4:
    if (ctx->pc == 0x1A5DB4u) {
        ctx->pc = 0x1A5DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DB0u;
        // 0x1a5db4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5DB8u;
        goto label_1a5db8;
    }
    ctx->pc = 0x1A5DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A5DB8u);
        ctx->pc = 0x1A5DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DB0u;
        // 0x1a5db4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5DB0u, 0x1A5DB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5DB8u;
label_1a5db8:
    // 0x1a5db8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1a5db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a5dbc:
    // 0x1a5dbc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1a5dbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a5dc0:
    // 0x1a5dc0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1a5dc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a5dc4:
    // 0x1a5dc4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a5dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a5dc8:
    // 0x1a5dc8: 0x3e00008  jr          $ra
label_1a5dcc:
    if (ctx->pc == 0x1A5DCCu) {
        ctx->pc = 0x1A5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DC8u;
        // 0x1a5dcc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5DD0u;
        goto label_fallthrough_0x1a5dc8;
    }
    ctx->pc = 0x1A5DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5DC8u;
        // 0x1a5dcc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a5dc8:
    ctx->pc = 0x1A5DD0u;
}
