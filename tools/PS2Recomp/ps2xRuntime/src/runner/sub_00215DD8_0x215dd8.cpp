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

// Function: sub_00215DD8
// Address: 0x215dd8 - 0x216108
void sub_00215DD8_0x215dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215DD8_0x215dd8");
#endif

    switch (ctx->pc) {
        case 0x215e68u: goto label_215e68;
        case 0x215fd4u: goto label_215fd4;
        case 0x216080u: goto label_216080;
        default: break;
    }

    ctx->pc = 0x215dd8u;

    // 0x215dd8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x215dd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ddc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x215ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x215de0: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x215de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x215de4: 0x40c02d  daddu       $t8, $v0, $zero
    ctx->pc = 0x215de4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215de8: 0x8c44830c  lw          $a0, -0x7CF4($v0)
    ctx->pc = 0x215de8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33830Cu));
    // 0x215dec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x215decu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x215df0: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x215df0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x215df4: 0x8c830198  lw          $v1, 0x198($a0)
    ctx->pc = 0x215df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
    // 0x215df8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x215df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215dfc: 0x0  nop
    ctx->pc = 0x215dfcu;
    // NOP
    // 0x215e00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x215e00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x215e04: 0x3c013f5b  lui         $at, 0x3F5B
    ctx->pc = 0x215e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16219 << 16));
    // 0x215e08: 0x34216db7  ori         $at, $at, 0x6DB7
    ctx->pc = 0x215e08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28087);
    // 0x215e0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x215e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x215e10: 0x0  nop
    ctx->pc = 0x215e10u;
    // NOP
    // 0x215e14: 0x0  nop
    ctx->pc = 0x215e14u;
    // NOP
    // 0x215e18: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x215e18u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[0]);
    // 0x215e1c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x215E1Cu;
    {
        const bool branch_taken_0x215e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x215E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E1Cu;
        // 0x215e20: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e1c) {
            ctx->pc = 0x215E30u;
            goto label_215e30;
        }
    }
    ctx->pc = 0x215E24u;
    // 0x215e24: 0x3c013f24  lui         $at, 0x3F24
    ctx->pc = 0x215e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16164 << 16));
    // 0x215e28: 0x3421924a  ori         $at, $at, 0x924A
    ctx->pc = 0x215e28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37450);
    // 0x215e2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x215e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_215e30:
    // 0x215e30: 0x0  nop
    ctx->pc = 0x215e30u;
    // NOP
    // 0x215e34: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x215e34u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x215e38: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x215e38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x215e3c: 0x112000ae  beqz        $t1, . + 4 + (0xAE << 2)
    ctx->pc = 0x215E3Cu;
    {
        const bool branch_taken_0x215e3c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x215E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E3Cu;
        // 0x215e40: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e3c) {
            ctx->pc = 0x2160F8u;
            goto label_2160f8;
        }
    }
    ctx->pc = 0x215E44u;
    // 0x215e44: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x215e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x215e48: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x215e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x215e4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x215e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x215e50: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x215e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x215e54: 0x244f02a0  addiu       $t7, $v0, 0x2A0
    ctx->pc = 0x215e54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 672));
    // 0x215e58: 0x246c2d40  addiu       $t4, $v1, 0x2D40
    ctx->pc = 0x215e58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 11584));
    // 0x215e5c: 0x240e000a  addiu       $t6, $zero, 0xA
    ctx->pc = 0x215e5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x215e60: 0x3c0d005c  lui         $t5, 0x5C
    ctx->pc = 0x215e60u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)92 << 16));
    // 0x215e64: 0x0  nop
    ctx->pc = 0x215e64u;
    // NOP
label_215e68:
    // 0x215e68: 0x8ce50264  lw          $a1, 0x264($a3)
    ctx->pc = 0x215e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 612)));
    // 0x215e6c: 0x46006086  mov.s       $f2, $f12
    ctx->pc = 0x215e6cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[12]);
    // 0x215e70: 0x90e8025c  lbu         $t0, 0x25C($a3)
    ctx->pc = 0x215e70u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 604)));
    // 0x215e74: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x215e74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e78: 0x1251021  addu        $v0, $t1, $a1
    ctx->pc = 0x215e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x215e7c: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x215e7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x215e80: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x215e80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215e84: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x215e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x215e88: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x215e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x215e8c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x215e8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x215e90: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x215e90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e94: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x215E94u;
    {
        const bool branch_taken_0x215e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x215E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215E94u;
        // 0x215e98: 0xa7a40000  sh          $a0, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e94) {
            ctx->pc = 0x215EACu;
            goto label_215eac;
        }
    }
    ctx->pc = 0x215E9Cu;
    // 0x215e9c: 0x8ce60260  lw          $a2, 0x260($a3)
    ctx->pc = 0x215e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 608)));
    // 0x215ea0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x215ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ea4: 0x144e0003  bne         $v0, $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x215EA4u;
    {
        const bool branch_taken_0x215ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        ctx->pc = 0x215EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215EA4u;
        // 0x215ea8: 0x1264821  addu        $t1, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ea4) {
            ctx->pc = 0x215EB4u;
            goto label_215eb4;
        }
    }
    ctx->pc = 0x215EACu;
label_215eac:
    // 0x215eac: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x215EACu;
    {
        const bool branch_taken_0x215eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215EACu;
        // 0x215eb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215eac) {
            ctx->pc = 0x216038u;
            goto label_216038;
        }
    }
    ctx->pc = 0x215EB4u;
label_215eb4:
    // 0x215eb4: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x215eb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x215eb8: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x215EB8u;
    {
        const bool branch_taken_0x215eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215EB8u;
        // 0x215ebc: 0x1251021  addu        $v0, $t1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215eb8) {
            ctx->pc = 0x215FE8u;
            goto label_215fe8;
        }
    }
    ctx->pc = 0x215EC0u;
    // 0x215ec0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x215ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x215ec4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x215ec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215ec8: 0x91250000  lbu         $a1, 0x0($t1)
    ctx->pc = 0x215ec8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x215ecc: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x215eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x215ed0: 0x1264821  addu        $t1, $t1, $a2
    ctx->pc = 0x215ed0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x215ed4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x215ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x215ed8: 0x97a60000  lhu         $a2, 0x0($sp)
    ctx->pc = 0x215ed8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215edc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x215edcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x215ee0: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x215ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x215ee4: 0x10c4001b  beq         $a2, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x215EE4u;
    {
        const bool branch_taken_0x215ee4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x215EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215EE4u;
        // 0x215ee8: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ee4) {
            ctx->pc = 0x215F54u;
            goto label_215f54;
        }
    }
    ctx->pc = 0x215EECu;
    // 0x215eec: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x215eecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x215ef0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215EF0u;
    {
        const bool branch_taken_0x215ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215EF0u;
        // 0x215ef4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ef0) {
            ctx->pc = 0x215F08u;
            goto label_215f08;
        }
    }
    ctx->pc = 0x215EF8u;
    // 0x215ef8: 0x10c2000a  beq         $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x215EF8u;
    {
        const bool branch_taken_0x215ef8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x215EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215EF8u;
        // 0x215efc: 0x97a40000  lhu         $a0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ef8) {
            ctx->pc = 0x215F24u;
            goto label_215f24;
        }
    }
    ctx->pc = 0x215F00u;
    // 0x215f00: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x215F00u;
    {
        const bool branch_taken_0x215f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F00u;
        // 0x215f04: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f00) {
            ctx->pc = 0x216038u;
            goto label_216038;
        }
    }
    ctx->pc = 0x215F08u;
label_215f08:
    // 0x215f08: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x215f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x215f0c: 0x10c20013  beq         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x215F0Cu;
    {
        const bool branch_taken_0x215f0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x215F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F0Cu;
        // 0x215f10: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f0c) {
            ctx->pc = 0x215F5Cu;
            goto label_215f5c;
        }
    }
    ctx->pc = 0x215F14u;
    // 0x215f14: 0x10c20024  beq         $a2, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x215F14u;
    {
        const bool branch_taken_0x215f14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x215F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F14u;
        // 0x215f18: 0x97a40000  lhu         $a0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f14) {
            ctx->pc = 0x215FA8u;
            goto label_215fa8;
        }
    }
    ctx->pc = 0x215F1Cu;
    // 0x215f1c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x215F1Cu;
    {
        const bool branch_taken_0x215f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F1Cu;
        // 0x215f20: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f1c) {
            ctx->pc = 0x216038u;
            goto label_216038;
        }
    }
    ctx->pc = 0x215F24u;
label_215f24:
    // 0x215f24: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x215F24u;
    {
        const bool branch_taken_0x215f24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x215F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F24u;
        // 0x215f28: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f24) {
            ctx->pc = 0x215F40u;
            goto label_215f40;
        }
    }
    ctx->pc = 0x215F2Cu;
    // 0x215f2c: 0x8ce30050  lw          $v1, 0x50($a3)
    ctx->pc = 0x215f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x215f30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x215f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x215f34: 0xace30280  sw          $v1, 0x280($a3)
    ctx->pc = 0x215f34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 640), GPR_U32(ctx, 3));
    // 0x215f38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x215F38u;
    {
        const bool branch_taken_0x215f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F38u;
        // 0x215f3c: 0xace30284  sw          $v1, 0x284($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 644), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f38) {
            ctx->pc = 0x215F4Cu;
            goto label_215f4c;
        }
    }
    ctx->pc = 0x215F40u;
label_215f40:
    // 0x215f40: 0x8ce2027c  lw          $v0, 0x27C($a3)
    ctx->pc = 0x215f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 636)));
    // 0x215f44: 0xace20280  sw          $v0, 0x280($a3)
    ctx->pc = 0x215f44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 640), GPR_U32(ctx, 2));
    // 0x215f48: 0xace20284  sw          $v0, 0x284($a3)
    ctx->pc = 0x215f48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 644), GPR_U32(ctx, 2));
label_215f4c:
    // 0x215f4c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x215F4Cu;
    {
        const bool branch_taken_0x215f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F4Cu;
        // 0x215f50: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f4c) {
            ctx->pc = 0x216030u;
            goto label_216030;
        }
    }
    ctx->pc = 0x215F54u;
label_215f54:
    // 0x215f54: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x215F54u;
    {
        const bool branch_taken_0x215f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F54u;
        // 0x215f58: 0xa7a00000  sh          $zero, 0x0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f54) {
            ctx->pc = 0x216030u;
            goto label_216030;
        }
    }
    ctx->pc = 0x215F5Cu;
label_215f5c:
    // 0x215f5c: 0x8ce40030  lw          $a0, 0x30($a3)
    ctx->pc = 0x215f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x215f60: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x215f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x215f64: 0x8ce3003c  lw          $v1, 0x3C($a3)
    ctx->pc = 0x215f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x215f68: 0xace40274  sw          $a0, 0x274($a3)
    ctx->pc = 0x215f68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 628), GPR_U32(ctx, 4));
    // 0x215f6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x215f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x215f70: 0x3c013f5b  lui         $at, 0x3F5B
    ctx->pc = 0x215f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16219 << 16));
    // 0x215f74: 0x34216db7  ori         $at, $at, 0x6DB7
    ctx->pc = 0x215f74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28087);
    // 0x215f78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215f78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215f7c: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x215f7cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215f80: 0xacef0280  sw          $t7, 0x280($a3)
    ctx->pc = 0x215f80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 640), GPR_U32(ctx, 15));
    // 0x215f84: 0x8f02830c  lw          $v0, -0x7CF4($t8)
    ctx->pc = 0x215f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4294935308)));
    // 0x215f88: 0x8c430198  lw          $v1, 0x198($v0)
    ctx->pc = 0x215f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 408)));
    // 0x215f8c: 0x50600028  beql        $v1, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x215F8Cu;
    {
        const bool branch_taken_0x215f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x215f8c) {
            ctx->pc = 0x215F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215F8Cu;
            // 0x215f90: 0x46002082  mul.s       $f2, $f4, $f0 (Delay Slot)
            ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x216030u;
            goto label_216030;
        }
    }
    ctx->pc = 0x215F94u;
    // 0x215f94: 0x3c013f24  lui         $at, 0x3F24
    ctx->pc = 0x215f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16164 << 16));
    // 0x215f98: 0x3421924a  ori         $at, $at, 0x924A
    ctx->pc = 0x215f98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37450);
    // 0x215f9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215f9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215fa0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x215FA0u;
    {
        const bool branch_taken_0x215fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215FA0u;
        // 0x215fa4: 0x46002082  mul.s       $f2, $f4, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215fa0) {
            ctx->pc = 0x216030u;
            goto label_216030;
        }
    }
    ctx->pc = 0x215FA8u;
label_215fa8:
    // 0x215fa8: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x215fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x215fac: 0x8c4302a8  lw          $v1, 0x2A8($v0)
    ctx->pc = 0x215facu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5C02A8u));
    // 0x215fb0: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x215FB0u;
    {
        const bool branch_taken_0x215fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x215FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215FB0u;
        // 0x215fb4: 0x8da202a4  lw          $v0, 0x2A4($t5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215fb0) {
            ctx->pc = 0x216030u;
            goto label_216030;
        }
    }
    ctx->pc = 0x215FB8u;
    // 0x215fb8: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x215FB8u;
    {
        const bool branch_taken_0x215fb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x215FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215FB8u;
        // 0x215fbc: 0xace20274  sw          $v0, 0x274($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215fb8) {
            ctx->pc = 0x215FC8u;
            goto label_215fc8;
        }
    }
    ctx->pc = 0x215FC0u;
    // 0x215fc0: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x215fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x215fc4: 0xace20274  sw          $v0, 0x274($a3)
    ctx->pc = 0x215fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 628), GPR_U32(ctx, 2));
label_215fc8:
    // 0x215fc8: 0x8ce20274  lw          $v0, 0x274($a3)
    ctx->pc = 0x215fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 628)));
    // 0x215fcc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x215FCCu;
    {
        const bool branch_taken_0x215fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215FCCu;
        // 0x215fd0: 0xace20278  sw          $v0, 0x278($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215fcc) {
            ctx->pc = 0x216030u;
            goto label_216030;
        }
    }
    ctx->pc = 0x215FD4u;
label_215fd4:
    // 0x215fd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x215fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x215fd8: 0x0  nop
    ctx->pc = 0x215fd8u;
    // NOP
    // 0x215fdc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x215fdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x215fe0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x215FE0u;
    {
        const bool branch_taken_0x215fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215FE0u;
        // 0x215fe4: 0x51400  sll         $v0, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215fe0) {
            ctx->pc = 0x2160ACu;
            goto label_2160ac;
        }
    }
    ctx->pc = 0x215FE8u;
label_215fe8:
    // 0x215fe8: 0x94e2002c  lhu         $v0, 0x2C($a3)
    ctx->pc = 0x215fe8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x215fec: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x215fecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x215ff0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x215FF0u;
    {
        const bool branch_taken_0x215ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215FF0u;
        // 0x215ff4: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ff0) {
            ctx->pc = 0x216008u;
            goto label_216008;
        }
    }
    ctx->pc = 0x215FF8u;
    // 0x215ff8: 0x8ce30028  lw          $v1, 0x28($a3)
    ctx->pc = 0x215ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x215ffc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x215ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x216000: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x216000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x216004: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x216004u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_216008:
    // 0x216008: 0x11400009  beqz        $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x216008u;
    {
        const bool branch_taken_0x216008 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x21600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216008u;
        // 0x21600c: 0x8da202a4  lw          $v0, 0x2A4($t5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216008) {
            ctx->pc = 0x216030u;
            goto label_216030;
        }
    }
    ctx->pc = 0x216010u;
    // 0x216010: 0x8ce30274  lw          $v1, 0x274($a3)
    ctx->pc = 0x216010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 628)));
    // 0x216014: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x216014u;
    {
        const bool branch_taken_0x216014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x216018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216014u;
        // 0x216018: 0x97a40000  lhu         $a0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216014) {
            ctx->pc = 0x216034u;
            goto label_216034;
        }
    }
    ctx->pc = 0x21601Cu;
    // 0x21601c: 0x91420006  lbu         $v0, 0x6($t2)
    ctx->pc = 0x21601cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 6)));
    // 0x216020: 0xa1820006  sb          $v0, 0x6($t4)
    ctx->pc = 0x216020u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x216024: 0x95430002  lhu         $v1, 0x2($t2)
    ctx->pc = 0x216024u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x216028: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x216028u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21602c: 0xa5830002  sh          $v1, 0x2($t4)
    ctx->pc = 0x21602cu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 2), (uint16_t)GPR_U32(ctx, 3));
label_216030:
    // 0x216030: 0x97a40000  lhu         $a0, 0x0($sp)
    ctx->pc = 0x216030u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_216034:
    // 0x216034: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x216034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_216038:
    // 0x216038: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x216038u;
    {
        const bool branch_taken_0x216038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216038u;
        // 0x21603c: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216038) {
            ctx->pc = 0x2160FCu;
            goto label_2160fc;
        }
    }
    ctx->pc = 0x216040u;
    // 0x216040: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x216040u;
    {
        const bool branch_taken_0x216040 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x216040) {
            ctx->pc = 0x2160C8u;
            goto label_2160c8;
        }
    }
    ctx->pc = 0x216048u;
    // 0x216048: 0x8ce20044  lw          $v0, 0x44($a3)
    ctx->pc = 0x216048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 68)));
    // 0x21604c: 0x94a50002  lhu         $a1, 0x2($a1)
    ctx->pc = 0x21604cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x216050: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x216050u;
    {
        const bool branch_taken_0x216050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216050u;
        // 0x216054: 0x97a80000  lhu         $t0, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216050) {
            ctx->pc = 0x2160A4u;
            goto label_2160a4;
        }
    }
    ctx->pc = 0x216058u;
    // 0x216058: 0x10b1021  addu        $v0, $t0, $t3
    ctx->pc = 0x216058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x21605c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21605cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216060: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x216060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x216064: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x216064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x216068: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x216068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x21606c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x21606cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216070: 0x8c660060  lw          $a2, 0x60($v1)
    ctx->pc = 0x216070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x216074: 0x18c0000b  blez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x216074u;
    {
        const bool branch_taken_0x216074 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x216078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216074u;
        // 0x216078: 0x8c43005c  lw          $v1, 0x5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216074) {
            ctx->pc = 0x2160A4u;
            goto label_2160a4;
        }
    }
    ctx->pc = 0x21607Cu;
    // 0x21607c: 0x0  nop
    ctx->pc = 0x21607cu;
    // NOP
label_216080:
    // 0x216080: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x216080u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x216084: 0x14480004  bne         $v0, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x216084u;
    {
        const bool branch_taken_0x216084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x216088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216084u;
        // 0x216088: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216084) {
            ctx->pc = 0x216098u;
            goto label_216098;
        }
    }
    ctx->pc = 0x21608Cu;
    // 0x21608c: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x21608cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x216090: 0x504bffd0  beql        $v0, $t3, . + 4 + (-0x30 << 2)
    ctx->pc = 0x216090u;
    {
        const bool branch_taken_0x216090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 11));
        if (branch_taken_0x216090) {
            ctx->pc = 0x216094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216090u;
            // 0x216094: 0x84620004  lh          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215fd4;
        }
    }
    ctx->pc = 0x216098u;
label_216098:
    // 0x216098: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x216098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x21609c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21609Cu;
    {
        const bool branch_taken_0x21609c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2160A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21609Cu;
        // 0x2160a0: 0x24630006  addiu       $v1, $v1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21609c) {
            ctx->pc = 0x216080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216080;
        }
    }
    ctx->pc = 0x2160A4u;
label_2160a4:
    // 0x2160a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2160a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2160a8: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x2160a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_2160ac:
    // 0x2160ac: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2160acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2160b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2160b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2160b4: 0x0  nop
    ctx->pc = 0x2160b4u;
    // NOP
    // 0x2160b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2160b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2160bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2160bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2160c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2160c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2160c4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2160c4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2160c8:
    // 0x2160c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2160c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2160cc: 0x0  nop
    ctx->pc = 0x2160ccu;
    // NOP
    // 0x2160d0: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x2160d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2160d4: 0x0  nop
    ctx->pc = 0x2160d4u;
    // NOP
    // 0x2160d8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2160D8u;
    {
        const bool branch_taken_0x2160d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2160d8) {
            ctx->pc = 0x2160F0u;
            goto label_2160f0;
        }
    }
    ctx->pc = 0x2160E0u;
    // 0x2160e0: 0x46036834  c.lt.s      $f13, $f3
    ctx->pc = 0x2160e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2160e4: 0x0  nop
    ctx->pc = 0x2160e4u;
    // NOP
    // 0x2160e8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2160E8u;
    {
        const bool branch_taken_0x2160e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2160ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2160E8u;
        // 0x2160ec: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2160e8) {
            ctx->pc = 0x2160FCu;
            goto label_2160fc;
        }
    }
    ctx->pc = 0x2160F0u;
label_2160f0:
    // 0x2160f0: 0x1520ff5d  bnez        $t1, . + 4 + (-0xA3 << 2)
    ctx->pc = 0x2160F0u;
    {
        const bool branch_taken_0x2160f0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2160F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2160F0u;
        // 0x2160f4: 0x97ab0000  lhu         $t3, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2160f0) {
            ctx->pc = 0x215E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215e68;
        }
    }
    ctx->pc = 0x2160F8u;
label_2160f8:
    // 0x2160f8: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x2160f8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_2160fc:
    // 0x2160fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2160FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2160FCu;
        // 0x216100: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2160FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216104u;
    // 0x216104: 0x0  nop
    ctx->pc = 0x216104u;
    // NOP
    ctx->pc = 0x216108u;
}
