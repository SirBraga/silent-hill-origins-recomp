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

// Function: sub_00158BB0
// Address: 0x158bb0 - 0x158d90
void sub_00158BB0_0x158bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158BB0_0x158bb0");
#endif

    switch (ctx->pc) {
        case 0x158bb0u: goto label_158bb0;
        case 0x158bb4u: goto label_158bb4;
        case 0x158bb8u: goto label_158bb8;
        case 0x158bbcu: goto label_158bbc;
        case 0x158bc0u: goto label_158bc0;
        case 0x158bc4u: goto label_158bc4;
        case 0x158bc8u: goto label_158bc8;
        case 0x158bccu: goto label_158bcc;
        case 0x158bd0u: goto label_158bd0;
        case 0x158bd4u: goto label_158bd4;
        case 0x158bd8u: goto label_158bd8;
        case 0x158bdcu: goto label_158bdc;
        case 0x158be0u: goto label_158be0;
        case 0x158be4u: goto label_158be4;
        case 0x158be8u: goto label_158be8;
        case 0x158becu: goto label_158bec;
        case 0x158bf0u: goto label_158bf0;
        case 0x158bf4u: goto label_158bf4;
        case 0x158bf8u: goto label_158bf8;
        case 0x158bfcu: goto label_158bfc;
        case 0x158c00u: goto label_158c00;
        case 0x158c04u: goto label_158c04;
        case 0x158c08u: goto label_158c08;
        case 0x158c0cu: goto label_158c0c;
        case 0x158c10u: goto label_158c10;
        case 0x158c14u: goto label_158c14;
        case 0x158c18u: goto label_158c18;
        case 0x158c1cu: goto label_158c1c;
        case 0x158c20u: goto label_158c20;
        case 0x158c24u: goto label_158c24;
        case 0x158c28u: goto label_158c28;
        case 0x158c2cu: goto label_158c2c;
        case 0x158c30u: goto label_158c30;
        case 0x158c34u: goto label_158c34;
        case 0x158c38u: goto label_158c38;
        case 0x158c3cu: goto label_158c3c;
        case 0x158c40u: goto label_158c40;
        case 0x158c44u: goto label_158c44;
        case 0x158c48u: goto label_158c48;
        case 0x158c4cu: goto label_158c4c;
        case 0x158c50u: goto label_158c50;
        case 0x158c54u: goto label_158c54;
        case 0x158c58u: goto label_158c58;
        case 0x158c5cu: goto label_158c5c;
        case 0x158c60u: goto label_158c60;
        case 0x158c64u: goto label_158c64;
        case 0x158c68u: goto label_158c68;
        case 0x158c6cu: goto label_158c6c;
        case 0x158c70u: goto label_158c70;
        case 0x158c74u: goto label_158c74;
        case 0x158c78u: goto label_158c78;
        case 0x158c7cu: goto label_158c7c;
        case 0x158c80u: goto label_158c80;
        case 0x158c84u: goto label_158c84;
        case 0x158c88u: goto label_158c88;
        case 0x158c8cu: goto label_158c8c;
        case 0x158c90u: goto label_158c90;
        case 0x158c94u: goto label_158c94;
        case 0x158c98u: goto label_158c98;
        case 0x158c9cu: goto label_158c9c;
        case 0x158ca0u: goto label_158ca0;
        case 0x158ca4u: goto label_158ca4;
        case 0x158ca8u: goto label_158ca8;
        case 0x158cacu: goto label_158cac;
        case 0x158cb0u: goto label_158cb0;
        case 0x158cb4u: goto label_158cb4;
        case 0x158cb8u: goto label_158cb8;
        case 0x158cbcu: goto label_158cbc;
        case 0x158cc0u: goto label_158cc0;
        case 0x158cc4u: goto label_158cc4;
        case 0x158cc8u: goto label_158cc8;
        case 0x158cccu: goto label_158ccc;
        case 0x158cd0u: goto label_158cd0;
        case 0x158cd4u: goto label_158cd4;
        case 0x158cd8u: goto label_158cd8;
        case 0x158cdcu: goto label_158cdc;
        case 0x158ce0u: goto label_158ce0;
        case 0x158ce4u: goto label_158ce4;
        case 0x158ce8u: goto label_158ce8;
        case 0x158cecu: goto label_158cec;
        case 0x158cf0u: goto label_158cf0;
        case 0x158cf4u: goto label_158cf4;
        case 0x158cf8u: goto label_158cf8;
        case 0x158cfcu: goto label_158cfc;
        case 0x158d00u: goto label_158d00;
        case 0x158d04u: goto label_158d04;
        case 0x158d08u: goto label_158d08;
        case 0x158d0cu: goto label_158d0c;
        case 0x158d10u: goto label_158d10;
        case 0x158d14u: goto label_158d14;
        case 0x158d18u: goto label_158d18;
        case 0x158d1cu: goto label_158d1c;
        case 0x158d20u: goto label_158d20;
        case 0x158d24u: goto label_158d24;
        case 0x158d28u: goto label_158d28;
        case 0x158d2cu: goto label_158d2c;
        case 0x158d30u: goto label_158d30;
        case 0x158d34u: goto label_158d34;
        case 0x158d38u: goto label_158d38;
        case 0x158d3cu: goto label_158d3c;
        case 0x158d40u: goto label_158d40;
        case 0x158d44u: goto label_158d44;
        case 0x158d48u: goto label_158d48;
        case 0x158d4cu: goto label_158d4c;
        case 0x158d50u: goto label_158d50;
        case 0x158d54u: goto label_158d54;
        case 0x158d58u: goto label_158d58;
        case 0x158d5cu: goto label_158d5c;
        case 0x158d60u: goto label_158d60;
        case 0x158d64u: goto label_158d64;
        case 0x158d68u: goto label_158d68;
        case 0x158d6cu: goto label_158d6c;
        case 0x158d70u: goto label_158d70;
        case 0x158d74u: goto label_158d74;
        case 0x158d78u: goto label_158d78;
        case 0x158d7cu: goto label_158d7c;
        case 0x158d80u: goto label_158d80;
        case 0x158d84u: goto label_158d84;
        case 0x158d88u: goto label_158d88;
        case 0x158d8cu: goto label_158d8c;
        default: break;
    }

    ctx->pc = 0x158bb0u;

label_158bb0:
    // 0x158bb0: 0x27bdebf0  addiu       $sp, $sp, -0x1410
    ctx->pc = 0x158bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294962160));
label_158bb4:
    // 0x158bb4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x158bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_158bb8:
    // 0x158bb8: 0x7fb01400  sq          $s0, 0x1400($sp)
    ctx->pc = 0x158bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 5120), GPR_VEC(ctx, 16));
label_158bbc:
    // 0x158bbc: 0x7fb113f0  sq          $s1, 0x13F0($sp)
    ctx->pc = 0x158bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 5104), GPR_VEC(ctx, 17));
label_158bc0:
    // 0x158bc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x158bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_158bc4:
    // 0x158bc4: 0x7fb413c0  sq          $s4, 0x13C0($sp)
    ctx->pc = 0x158bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 5056), GPR_VEC(ctx, 20));
label_158bc8:
    // 0x158bc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x158bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158bcc:
    // 0x158bcc: 0x7fb213e0  sq          $s2, 0x13E0($sp)
    ctx->pc = 0x158bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 5088), GPR_VEC(ctx, 18));
label_158bd0:
    // 0x158bd0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x158bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158bd4:
    // 0x158bd4: 0x7fb313d0  sq          $s3, 0x13D0($sp)
    ctx->pc = 0x158bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 5072), GPR_VEC(ctx, 19));
label_158bd8:
    // 0x158bd8: 0x7fb513b0  sq          $s5, 0x13B0($sp)
    ctx->pc = 0x158bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 5040), GPR_VEC(ctx, 21));
label_158bdc:
    // 0x158bdc: 0x7fb613a0  sq          $s6, 0x13A0($sp)
    ctx->pc = 0x158bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 5024), GPR_VEC(ctx, 22));
label_158be0:
    // 0x158be0: 0xffbf1390  sd          $ra, 0x1390($sp)
    ctx->pc = 0x158be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 5008), GPR_U64(ctx, 31));
label_158be4:
    // 0x158be4: 0x8c620fe8  lw          $v0, 0xFE8($v1)
    ctx->pc = 0x158be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
label_158be8:
    // 0x158be8: 0x40f809  jalr        $v0
label_158bec:
    if (ctx->pc == 0x158BECu) {
        ctx->pc = 0x158BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BE8u;
        // 0x158bec: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158BF0u;
        goto label_158bf0;
    }
    ctx->pc = 0x158BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158BF0u);
        ctx->pc = 0x158BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BE8u;
        // 0x158bec: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158BE8u, 0x158BF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158BF0u;
label_158bf0:
    // 0x158bf0: 0x27aa1200  addiu       $t2, $sp, 0x1200
    ctx->pc = 0x158bf0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4608));
label_158bf4:
    // 0x158bf4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x158bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_158bf8:
    // 0x158bf8: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x158bf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_158bfc:
    // 0x158bfc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x158bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_158c00:
    // 0x158c00: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x158c00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_158c04:
    // 0x158c04: 0x18600049  blez        $v1, . + 4 + (0x49 << 2)
label_158c08:
    if (ctx->pc == 0x158C08u) {
        ctx->pc = 0x158C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C04u;
        // 0x158c08: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C0Cu;
        goto label_158c0c;
    }
    ctx->pc = 0x158C04u;
    {
        const bool branch_taken_0x158c04 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x158C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C04u;
        // 0x158c08: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c04) {
            ctx->pc = 0x158D2Cu;
            goto label_158d2c;
        }
    }
    ctx->pc = 0x158C0Cu;
label_158c0c:
    // 0x158c0c: 0x0  nop
    ctx->pc = 0x158c0cu;
    // NOP
label_158c10:
    // 0x158c10: 0x90a20043  lbu         $v0, 0x43($a1)
    ctx->pc = 0x158c10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 67)));
label_158c14:
    // 0x158c14: 0x2473ffff  addiu       $s3, $v1, -0x1
    ctx->pc = 0x158c14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_158c18:
    // 0x158c18: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_158c1c:
    if (ctx->pc == 0x158C1Cu) {
        ctx->pc = 0x158C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C18u;
        // 0x158c1c: 0x24b20050  addiu       $s2, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158C20u;
        goto label_158c20;
    }
    ctx->pc = 0x158C18u;
    {
        const bool branch_taken_0x158c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C18u;
        // 0x158c1c: 0x24b20050  addiu       $s2, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c18) {
            ctx->pc = 0x158D20u;
            goto label_158d20;
        }
    }
    ctx->pc = 0x158C20u;
label_158c20:
    // 0x158c20: 0x252d0090  addiu       $t5, $t1, 0x90
    ctx->pc = 0x158c20u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
label_158c24:
    // 0x158c24: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x158c24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_158c28:
    // 0x158c28: 0x1a0602d  daddu       $t4, $t5, $zero
    ctx->pc = 0x158c28u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_158c2c:
    // 0x158c2c: 0x256f0001  addiu       $t7, $t3, 0x1
    ctx->pc = 0x158c2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_158c30:
    // 0x158c30: 0x256e0002  addiu       $t6, $t3, 0x2
    ctx->pc = 0x158c30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
label_158c34:
    // 0x158c34: 0x25700003  addiu       $s0, $t3, 0x3
    ctx->pc = 0x158c34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
label_158c38:
    // 0x158c38: 0x25780004  addiu       $t8, $t3, 0x4
    ctx->pc = 0x158c38u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_158c3c:
    // 0x158c3c: 0x2559000c  addiu       $t9, $t2, 0xC
    ctx->pc = 0x158c3cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
label_158c40:
    // 0x158c40: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x158c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_158c44:
    // 0x158c44: 0x24a80008  addiu       $t0, $a1, 0x8
    ctx->pc = 0x158c44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_158c48:
    // 0x158c48: 0x24a70004  addiu       $a3, $a1, 0x4
    ctx->pc = 0x158c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_158c4c:
    // 0x158c4c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x158c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_158c50:
    // 0x158c50: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x158c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_158c54:
    // 0x158c54: 0xe7a01380  swc1        $f0, 0x1380($sp)
    ctx->pc = 0x158c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4992), bits); }
label_158c58:
    // 0x158c58: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x158c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_158c5c:
    // 0x158c5c: 0xe7a11384  swc1        $f1, 0x1384($sp)
    ctx->pc = 0x158c5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4996), bits); }
label_158c60:
    // 0x158c60: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x158c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_158c64:
    // 0x158c64: 0xe7a01388  swc1        $f0, 0x1388($sp)
    ctx->pc = 0x158c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 5000), bits); }
label_158c68:
    // 0x158c68: 0x6ba21387  ldl         $v0, 0x1387($sp)
    ctx->pc = 0x158c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4999); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_158c6c:
    // 0x158c6c: 0x6fa21380  ldr         $v0, 0x1380($sp)
    ctx->pc = 0x158c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4992); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_158c70:
    // 0x158c70: 0x8fa31388  lw          $v1, 0x1388($sp)
    ctx->pc = 0x158c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5000)));
label_158c74:
    // 0x158c74: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x158c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_158c78:
    // 0x158c78: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x158c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_158c7c:
    // 0x158c7c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x158c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_158c80:
    // 0x158c80: 0x90a20040  lbu         $v0, 0x40($a1)
    ctx->pc = 0x158c80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 64)));
label_158c84:
    // 0x158c84: 0xa082000c  sb          $v0, 0xC($a0)
    ctx->pc = 0x158c84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 2));
label_158c88:
    // 0x158c88: 0x90a30041  lbu         $v1, 0x41($a1)
    ctx->pc = 0x158c88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 65)));
label_158c8c:
    // 0x158c8c: 0xa083000d  sb          $v1, 0xD($a0)
    ctx->pc = 0x158c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 3));
label_158c90:
    // 0x158c90: 0x90a20042  lbu         $v0, 0x42($a1)
    ctx->pc = 0x158c90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 66)));
label_158c94:
    // 0x158c94: 0xa082000e  sb          $v0, 0xE($a0)
    ctx->pc = 0x158c94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 2));
label_158c98:
    // 0x158c98: 0x90a30043  lbu         $v1, 0x43($a1)
    ctx->pc = 0x158c98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 67)));
label_158c9c:
    // 0x158c9c: 0xa083000f  sb          $v1, 0xF($a0)
    ctx->pc = 0x158c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 15), (uint8_t)GPR_U32(ctx, 3));
label_158ca0:
    // 0x158ca0: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x158ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
label_158ca4:
    // 0x158ca4: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x158ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_158ca8:
    // 0x158ca8: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x158ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_158cac:
    // 0x158cac: 0x8c102a  slt         $v0, $a0, $t4
    ctx->pc = 0x158cacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_158cb0:
    // 0x158cb0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_158cb4:
    if (ctx->pc == 0x158CB4u) {
        ctx->pc = 0x158CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CB0u;
        // 0x158cb4: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158CB8u;
        goto label_158cb8;
    }
    ctx->pc = 0x158CB0u;
    {
        const bool branch_taken_0x158cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CB0u;
        // 0x158cb4: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158cb0) {
            ctx->pc = 0x158C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158c50;
        }
    }
    ctx->pc = 0x158CB8u;
label_158cb8:
    // 0x158cb8: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x158cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_158cbc:
    // 0x158cbc: 0xe520001c  swc1        $f0, 0x1C($t1)
    ctx->pc = 0x158cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 28), bits); }
label_158cc0:
    // 0x158cc0: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x158cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_158cc4:
    // 0x158cc4: 0xe5210020  swc1        $f1, 0x20($t1)
    ctx->pc = 0x158cc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 32), bits); }
label_158cc8:
    // 0x158cc8: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x158cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_158ccc:
    // 0x158ccc: 0xe5200040  swc1        $f0, 0x40($t1)
    ctx->pc = 0x158cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 64), bits); }
label_158cd0:
    // 0x158cd0: 0xc4a10034  lwc1        $f1, 0x34($a1)
    ctx->pc = 0x158cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_158cd4:
    // 0x158cd4: 0xe5210044  swc1        $f1, 0x44($t1)
    ctx->pc = 0x158cd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 68), bits); }
label_158cd8:
    // 0x158cd8: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x158cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_158cdc:
    // 0x158cdc: 0xe5200064  swc1        $f0, 0x64($t1)
    ctx->pc = 0x158cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 100), bits); }
label_158ce0:
    // 0x158ce0: 0xc4a1003c  lwc1        $f1, 0x3C($a1)
    ctx->pc = 0x158ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_158ce4:
    // 0x158ce4: 0xe5210068  swc1        $f1, 0x68($t1)
    ctx->pc = 0x158ce4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 104), bits); }
label_158ce8:
    // 0x158ce8: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x158ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_158cec:
    // 0x158cec: 0xe5200088  swc1        $f0, 0x88($t1)
    ctx->pc = 0x158cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 136), bits); }
label_158cf0:
    // 0x158cf0: 0xc4a1003c  lwc1        $f1, 0x3C($a1)
    ctx->pc = 0x158cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_158cf4:
    // 0x158cf4: 0xe521008c  swc1        $f1, 0x8C($t1)
    ctx->pc = 0x158cf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 140), bits); }
label_158cf8:
    // 0x158cf8: 0xa54b000a  sh          $t3, 0xA($t2)
    ctx->pc = 0x158cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 10), (uint16_t)GPR_U32(ctx, 11));
label_158cfc:
    // 0x158cfc: 0x1a0482d  daddu       $t1, $t5, $zero
    ctx->pc = 0x158cfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_158d00:
    // 0x158d00: 0xa54b0000  sh          $t3, 0x0($t2)
    ctx->pc = 0x158d00u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 11));
label_158d04:
    // 0x158d04: 0xa54f0002  sh          $t7, 0x2($t2)
    ctx->pc = 0x158d04u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 15));
label_158d08:
    // 0x158d08: 0x300582d  daddu       $t3, $t8, $zero
    ctx->pc = 0x158d08u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_158d0c:
    // 0x158d0c: 0xa54e0006  sh          $t6, 0x6($t2)
    ctx->pc = 0x158d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 6), (uint16_t)GPR_U32(ctx, 14));
label_158d10:
    // 0x158d10: 0xa5500008  sh          $s0, 0x8($t2)
    ctx->pc = 0x158d10u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 8), (uint16_t)GPR_U32(ctx, 16));
label_158d14:
    // 0x158d14: 0xa54e0004  sh          $t6, 0x4($t2)
    ctx->pc = 0x158d14u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4), (uint16_t)GPR_U32(ctx, 14));
label_158d18:
    // 0x158d18: 0x320502d  daddu       $t2, $t9, $zero
    ctx->pc = 0x158d18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_158d1c:
    // 0x158d1c: 0x0  nop
    ctx->pc = 0x158d1cu;
    // NOP
label_158d20:
    // 0x158d20: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x158d20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_158d24:
    // 0x158d24: 0x1c60ffba  bgtz        $v1, . + 4 + (-0x46 << 2)
label_158d28:
    if (ctx->pc == 0x158D28u) {
        ctx->pc = 0x158D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D24u;
        // 0x158d28: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D2Cu;
        goto label_158d2c;
    }
    ctx->pc = 0x158D24u;
    {
        const bool branch_taken_0x158d24 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x158D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D24u;
        // 0x158d28: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d24) {
            ctx->pc = 0x158C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158c10;
        }
    }
    ctx->pc = 0x158D2Cu;
label_158d2c:
    // 0x158d2c: 0x1a20000e  blez        $s1, . + 4 + (0xE << 2)
label_158d30:
    if (ctx->pc == 0x158D30u) {
        ctx->pc = 0x158D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D2Cu;
        // 0x158d30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D34u;
        goto label_158d34;
    }
    ctx->pc = 0x158D2Cu;
    {
        const bool branch_taken_0x158d2c = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x158D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D2Cu;
        // 0x158d30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d2c) {
            ctx->pc = 0x158D68u;
            goto label_158d68;
        }
    }
    ctx->pc = 0x158D34u;
label_158d34:
    // 0x158d34: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x158d34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_158d38:
    // 0x158d38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x158d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158d3c:
    // 0x158d3c: 0xc091fea  jal         func_247FA8
label_158d40:
    if (ctx->pc == 0x158D40u) {
        ctx->pc = 0x158D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D3Cu;
        // 0x158d40: 0x24070019  addiu       $a3, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D44u;
        goto label_158d44;
    }
    ctx->pc = 0x158D3Cu;
    SET_GPR_U32(ctx, 31, 0x158D44u);
    ctx->pc = 0x158D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158D3Cu;
    // 0x158d40: 0x24070019  addiu       $a3, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247FA8u, 0x158D3Cu, 0x158D44u)) {
        return;
    }
    ctx->pc = 0x158D44u;
label_158d44:
    // 0x158d44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_158d48:
    if (ctx->pc == 0x158D48u) {
        ctx->pc = 0x158D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D44u;
        // 0x158d48: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D4Cu;
        goto label_158d4c;
    }
    ctx->pc = 0x158D44u;
    {
        const bool branch_taken_0x158d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D44u;
        // 0x158d48: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d44) {
            ctx->pc = 0x158D68u;
            goto label_158d68;
        }
    }
    ctx->pc = 0x158D4Cu;
label_158d4c:
    // 0x158d4c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x158d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_158d50:
    // 0x158d50: 0x2260018  mult        $zero, $s1, $a2
    ctx->pc = 0x158d50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_158d54:
    // 0x158d54: 0x3012  mflo        $a2
    ctx->pc = 0x158d54u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_158d58:
    // 0x158d58: 0xc09202a  jal         func_2480A8
label_158d5c:
    if (ctx->pc == 0x158D5Cu) {
        ctx->pc = 0x158D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D58u;
        // 0x158d5c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D60u;
        goto label_158d60;
    }
    ctx->pc = 0x158D58u;
    SET_GPR_U32(ctx, 31, 0x158D60u);
    ctx->pc = 0x158D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158D58u;
    // 0x158d5c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2480A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2480A8u, 0x158D58u, 0x158D60u)) {
        return;
    }
    ctx->pc = 0x158D60u;
label_158d60:
    // 0x158d60: 0xc092016  jal         func_248058
label_158d64:
    if (ctx->pc == 0x158D64u) {
        ctx->pc = 0x158D68u;
        goto label_158d68;
    }
    ctx->pc = 0x158D60u;
    SET_GPR_U32(ctx, 31, 0x158D68u);
    ctx->pc = 0x248058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248058u, 0x158D60u, 0x158D68u)) {
        return;
    }
    ctx->pc = 0x158D68u;
label_158d68:
    // 0x158d68: 0x7bb01400  lq          $s0, 0x1400($sp)
    ctx->pc = 0x158d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 5120)));
label_158d6c:
    // 0x158d6c: 0x7bb113f0  lq          $s1, 0x13F0($sp)
    ctx->pc = 0x158d6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 5104)));
label_158d70:
    // 0x158d70: 0x7bb213e0  lq          $s2, 0x13E0($sp)
    ctx->pc = 0x158d70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 5088)));
label_158d74:
    // 0x158d74: 0x7bb313d0  lq          $s3, 0x13D0($sp)
    ctx->pc = 0x158d74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 5072)));
label_158d78:
    // 0x158d78: 0x7bb413c0  lq          $s4, 0x13C0($sp)
    ctx->pc = 0x158d78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 5056)));
label_158d7c:
    // 0x158d7c: 0x7bb513b0  lq          $s5, 0x13B0($sp)
    ctx->pc = 0x158d7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 5040)));
label_158d80:
    // 0x158d80: 0x7bb613a0  lq          $s6, 0x13A0($sp)
    ctx->pc = 0x158d80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 5024)));
label_158d84:
    // 0x158d84: 0xdfbf1390  ld          $ra, 0x1390($sp)
    ctx->pc = 0x158d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 5008)));
label_158d88:
    // 0x158d88: 0x3e00008  jr          $ra
label_158d8c:
    if (ctx->pc == 0x158D8Cu) {
        ctx->pc = 0x158D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D88u;
        // 0x158d8c: 0x27bd1410  addiu       $sp, $sp, 0x1410 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 5136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158D90u;
        goto label_fallthrough_0x158d88;
    }
    ctx->pc = 0x158D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158D88u;
        // 0x158d8c: 0x27bd1410  addiu       $sp, $sp, 0x1410 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 5136));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x158d88:
    ctx->pc = 0x158D90u;
}
