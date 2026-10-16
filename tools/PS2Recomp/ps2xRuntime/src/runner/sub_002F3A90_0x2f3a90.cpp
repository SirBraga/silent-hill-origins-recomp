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

// Function: sub_002F3A90
// Address: 0x2f3a90 - 0x2f3d08
void sub_002F3A90_0x2f3a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3A90_0x2f3a90");
#endif

    switch (ctx->pc) {
        case 0x2f3ae8u: goto label_2f3ae8;
        case 0x2f3af4u: goto label_2f3af4;
        case 0x2f3b04u: goto label_2f3b04;
        case 0x2f3b1cu: goto label_2f3b1c;
        case 0x2f3b24u: goto label_2f3b24;
        case 0x2f3b30u: goto label_2f3b30;
        case 0x2f3b48u: goto label_2f3b48;
        case 0x2f3b70u: goto label_2f3b70;
        case 0x2f3bd0u: goto label_2f3bd0;
        case 0x2f3c48u: goto label_2f3c48;
        case 0x2f3c88u: goto label_2f3c88;
        case 0x2f3cb4u: goto label_2f3cb4;
        default: break;
    }

    ctx->pc = 0x2f3a90u;

    // 0x2f3a90: 0x27bdfb50  addiu       $sp, $sp, -0x4B0
    ctx->pc = 0x2f3a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966096));
    // 0x2f3a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3a98: 0xffbe0490  sd          $fp, 0x490($sp)
    ctx->pc = 0x2f3a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 30));
    // 0x2f3a9c: 0xffb70480  sd          $s7, 0x480($sp)
    ctx->pc = 0x2f3a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 23));
    // 0x2f3aa0: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x2f3aa0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3aa4: 0xffb60470  sd          $s6, 0x470($sp)
    ctx->pc = 0x2f3aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 22));
    // 0x2f3aa8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2f3aa8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3aac: 0xffb50460  sd          $s5, 0x460($sp)
    ctx->pc = 0x2f3aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 21));
    // 0x2f3ab0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2f3ab0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ab4: 0xffb40450  sd          $s4, 0x450($sp)
    ctx->pc = 0x2f3ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 20));
    // 0x2f3ab8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2f3ab8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3abc: 0xffb30440  sd          $s3, 0x440($sp)
    ctx->pc = 0x2f3abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 19));
    // 0x2f3ac0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2f3ac0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ac4: 0xffb20430  sd          $s2, 0x430($sp)
    ctx->pc = 0x2f3ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 18));
    // 0x2f3ac8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2f3ac8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3acc: 0xffbf04a0  sd          $ra, 0x4A0($sp)
    ctx->pc = 0x2f3accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 31));
    // 0x2f3ad0: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2f3ad0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3ad4: 0xffb10420  sd          $s1, 0x420($sp)
    ctx->pc = 0x2f3ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 17));
    // 0x2f3ad8: 0xffb00410  sd          $s0, 0x410($sp)
    ctx->pc = 0x2f3ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 16));
    // 0x2f3adc: 0xafa00400  sw          $zero, 0x400($sp)
    ctx->pc = 0x2f3adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 0));
    // 0x2f3ae0: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2F3AE0u;
    {
        const bool branch_taken_0x2f3ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3AE0u;
        // 0x2f3ae4: 0xafa20404  sw          $v0, 0x404($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ae0) {
            ctx->pc = 0x2F3C74u;
            goto label_2f3c74;
        }
    }
    ctx->pc = 0x2F3AE8u;
label_2f3ae8:
    // 0x2f3ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f3ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3aec: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x2F3AECu;
    SET_GPR_U32(ctx, 31, 0x2F3AF4u);
    ctx->pc = 0x2F3AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3AECu;
    // 0x2f3af0: 0x24c50140  addiu       $a1, $a2, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x2F3AECu, 0x2F3AF4u)) {
        return;
    }
    ctx->pc = 0x2F3AF4u;
label_2f3af4:
    // 0x2f3af4: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x2F3AF4u;
    {
        const bool branch_taken_0x2f3af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3AF4u;
        // 0x2f3af8: 0x27b00240  addiu       $s0, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3af4) {
            ctx->pc = 0x2F3CC0u;
            goto label_2f3cc0;
        }
    }
    ctx->pc = 0x2F3AFCu;
    // 0x2f3afc: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x2F3AFCu;
    SET_GPR_U32(ctx, 31, 0x2F3B04u);
    ctx->pc = 0x2F3B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3AFCu;
    // 0x2f3b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x2F3AFCu, 0x2F3B04u)) {
        return;
    }
    ctx->pc = 0x2F3B04u;
label_2f3b04:
    // 0x2f3b04: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x2f3b04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2f3b08: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x2F3B08u;
    {
        const bool branch_taken_0x2f3b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B08u;
        // 0x2f3b0c: 0x3c07006b  lui         $a3, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b08) {
            ctx->pc = 0x2F3CC0u;
            goto label_2f3cc0;
        }
    }
    ctx->pc = 0x2F3B10u;
    // 0x2f3b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f3b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3b14: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x2F3B14u;
    SET_GPR_U32(ctx, 31, 0x2F3B1Cu);
    ctx->pc = 0x2F3B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3B14u;
    // 0x2f3b18: 0x24e50148  addiu       $a1, $a3, 0x148 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x2F3B14u, 0x2F3B1Cu)) {
        return;
    }
    ctx->pc = 0x2F3B1Cu;
label_2f3b1c:
    // 0x2f3b1c: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x2F3B1Cu;
    {
        const bool branch_taken_0x2f3b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B1Cu;
        // 0x2f3b20: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b1c) {
            ctx->pc = 0x2F3CC0u;
            goto label_2f3cc0;
        }
    }
    ctx->pc = 0x2F3B24u;
label_2f3b24:
    // 0x2f3b24: 0x12400044  beqz        $s2, . + 4 + (0x44 << 2)
    ctx->pc = 0x2F3B24u;
    {
        const bool branch_taken_0x2f3b24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B24u;
        // 0x2f3b28: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b24) {
            ctx->pc = 0x2F3C38u;
            goto label_2f3c38;
        }
    }
    ctx->pc = 0x2F3B2Cu;
    // 0x2f3b2c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2f3b2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2f3b30:
    // 0x2f3b30: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2f3b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2f3b34: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2F3B34u;
    {
        const bool branch_taken_0x2f3b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B34u;
        // 0x2f3b38: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b34) {
            ctx->pc = 0x2F3C14u;
            goto label_2f3c14;
        }
    }
    ctx->pc = 0x2F3B3Cu;
    // 0x2f3b3c: 0xa200005f  sb          $zero, 0x5F($s0)
    ctx->pc = 0x2f3b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 95), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f3b40: 0xc0c4a1f  jal         func_31287C
    ctx->pc = 0x2F3B40u;
    SET_GPR_U32(ctx, 31, 0x2F3B48u);
    ctx->pc = 0x2F3B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3B40u;
    // 0x2f3b44: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x2F3B40u, 0x2F3B48u)) {
        return;
    }
    ctx->pc = 0x2F3B48u;
label_2f3b48:
    // 0x2f3b48: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2F3B48u;
    {
        const bool branch_taken_0x2f3b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B48u;
        // 0x2f3b4c: 0x12102a  slt         $v0, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b48) {
            ctx->pc = 0x2F3C18u;
            goto label_2f3c18;
        }
    }
    ctx->pc = 0x2F3B50u;
    // 0x2f3b50: 0x1280002c  beqz        $s4, . + 4 + (0x2C << 2)
    ctx->pc = 0x2F3B50u;
    {
        const bool branch_taken_0x2f3b50 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3b50) {
            ctx->pc = 0x2F3C04u;
            goto label_2f3c04;
        }
    }
    ctx->pc = 0x2F3B58u;
    // 0x2f3b58: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f3b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3b5c: 0x2051025  or          $v0, $s0, $a1
    ctx->pc = 0x2f3b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
    // 0x2f3b60: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2f3b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2f3b64: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F3B64u;
    {
        const bool branch_taken_0x2f3b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B64u;
        // 0x2f3b68: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b64) {
            ctx->pc = 0x2F3BCCu;
            goto label_2f3bcc;
        }
    }
    ctx->pc = 0x2F3B6Cu;
    // 0x2f3b6c: 0x26020200  addiu       $v0, $s0, 0x200
    ctx->pc = 0x2f3b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_2f3b70:
    // 0x2f3b70: 0x68680007  ldl         $t0, 0x7($v1)
    ctx->pc = 0x2f3b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2f3b74: 0x6c680000  ldr         $t0, 0x0($v1)
    ctx->pc = 0x2f3b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2f3b78: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x2f3b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f3b7c: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x2f3b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f3b80: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x2f3b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2f3b84: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x2f3b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2f3b88: 0x6867001f  ldl         $a3, 0x1F($v1)
    ctx->pc = 0x2f3b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2f3b8c: 0x6c670018  ldr         $a3, 0x18($v1)
    ctx->pc = 0x2f3b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2f3b90: 0xb0a80007  sdl         $t0, 0x7($a1)
    ctx->pc = 0x2f3b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3b94: 0xb4a80000  sdr         $t0, 0x0($a1)
    ctx->pc = 0x2f3b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3b98: 0xb0a4000f  sdl         $a0, 0xF($a1)
    ctx->pc = 0x2f3b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3b9c: 0xb4a40008  sdr         $a0, 0x8($a1)
    ctx->pc = 0x2f3b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3ba0: 0xb0a60017  sdl         $a2, 0x17($a1)
    ctx->pc = 0x2f3ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3ba4: 0xb4a60010  sdr         $a2, 0x10($a1)
    ctx->pc = 0x2f3ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3ba8: 0xb0a7001f  sdl         $a3, 0x1F($a1)
    ctx->pc = 0x2f3ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3bac: 0xb4a70018  sdr         $a3, 0x18($a1)
    ctx->pc = 0x2f3bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f3bb0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2f3bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2f3bb4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2f3bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2f3bb8: 0x0  nop
    ctx->pc = 0x2f3bb8u;
    // NOP
    // 0x2f3bbc: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2F3BBCu;
    {
        const bool branch_taken_0x2f3bbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f3bbc) {
            ctx->pc = 0x2F3B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3b70;
        }
    }
    ctx->pc = 0x2F3BC4u;
    // 0x2f3bc4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F3BC4u;
    {
        const bool branch_taken_0x2f3bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3bc4) {
            ctx->pc = 0x2F3C04u;
            goto label_2f3c04;
        }
    }
    ctx->pc = 0x2F3BCCu;
label_2f3bcc:
    // 0x2f3bcc: 0x26020200  addiu       $v0, $s0, 0x200
    ctx->pc = 0x2f3bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_2f3bd0:
    // 0x2f3bd0: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x2f3bd0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f3bd4: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x2f3bd4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2f3bd8: 0xdc660010  ld          $a2, 0x10($v1)
    ctx->pc = 0x2f3bd8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f3bdc: 0xdc670018  ld          $a3, 0x18($v1)
    ctx->pc = 0x2f3bdcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2f3be0: 0xfca80000  sd          $t0, 0x0($a1)
    ctx->pc = 0x2f3be0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 8));
    // 0x2f3be4: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x2f3be4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x2f3be8: 0xfca60010  sd          $a2, 0x10($a1)
    ctx->pc = 0x2f3be8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 6));
    // 0x2f3bec: 0xfca70018  sd          $a3, 0x18($a1)
    ctx->pc = 0x2f3becu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 7));
    // 0x2f3bf0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2f3bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2f3bf4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2f3bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2f3bf8: 0x0  nop
    ctx->pc = 0x2f3bf8u;
    // NOP
    // 0x2f3bfc: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F3BFCu;
    {
        const bool branch_taken_0x2f3bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f3bfc) {
            ctx->pc = 0x2F3BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3bd0;
        }
    }
    ctx->pc = 0x2F3C04u;
label_2f3c04:
    // 0x2f3c04: 0x56c00001  bnel        $s6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F3C04u;
    {
        const bool branch_taken_0x2f3c04 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3c04) {
            ctx->pc = 0x2F3C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3C04u;
            // 0x2f3c08: 0xaed50000  sw          $s5, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3C0Cu;
            goto label_2f3c0c;
        }
    }
    ctx->pc = 0x2F3C0Cu;
label_2f3c0c:
    // 0x2f3c0c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2F3C0Cu;
    {
        const bool branch_taken_0x2f3c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C0Cu;
        // 0x2f3c10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3c0c) {
            ctx->pc = 0x2F3CD4u;
            goto label_2f3cd4;
        }
    }
    ctx->pc = 0x2F3C14u;
label_2f3c14:
    // 0x2f3c14: 0x12102a  slt         $v0, $zero, $s2
    ctx->pc = 0x2f3c14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2f3c18:
    // 0x2f3c18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f3c18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f3c1c: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x2f3c1cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2f3c20: 0x26100200  addiu       $s0, $s0, 0x200
    ctx->pc = 0x2f3c20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x2f3c24: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x2f3c24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f3c28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3C28u;
    {
        const bool branch_taken_0x2f3c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C28u;
        // 0x2f3c2c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3c28) {
            ctx->pc = 0x2F3C38u;
            goto label_2f3c38;
        }
    }
    ctx->pc = 0x2F3C30u;
    // 0x2f3c30: 0x5640ffbf  bnel        $s2, $zero, . + 4 + (-0x41 << 2)
    ctx->pc = 0x2F3C30u;
    {
        const bool branch_taken_0x2f3c30 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3c30) {
            ctx->pc = 0x2F3C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3C30u;
            // 0x2f3c34: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3b30;
        }
    }
    ctx->pc = 0x2F3C38u;
label_2f3c38:
    // 0x2f3c38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f3c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3c3c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2f3c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3c40: 0xc0bc95c  jal         func_2F2570
    ctx->pc = 0x2F3C40u;
    SET_GPR_U32(ctx, 31, 0x2F3C48u);
    ctx->pc = 0x2F3C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3C40u;
    // 0x2f3c44: 0x27a60400  addiu       $a2, $sp, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2570u, 0x2F3C40u, 0x2F3C48u)) {
        return;
    }
    ctx->pc = 0x2F3C48u;
label_2f3c48:
    // 0x2f3c48: 0x8fa30400  lw          $v1, 0x400($sp)
    ctx->pc = 0x2f3c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x2f3c4c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3C4Cu;
    {
        const bool branch_taken_0x2f3c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C4Cu;
        // 0x2f3c50: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3c4c) {
            ctx->pc = 0x2F3C5Cu;
            goto label_2f3c5c;
        }
    }
    ctx->pc = 0x2F3C54u;
    // 0x2f3c54: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2F3C54u;
    {
        const bool branch_taken_0x2f3c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C54u;
        // 0x2f3c58: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3c54) {
            ctx->pc = 0x2F3CD4u;
            goto label_2f3cd4;
        }
    }
    ctx->pc = 0x2F3C5Cu;
label_2f3c5c:
    // 0x2f3c5c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f3c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f3c60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f3c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f3c64: 0x12620019  beq         $s3, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F3C64u;
    {
        const bool branch_taken_0x2f3c64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C64u;
        // 0x2f3c68: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3c64) {
            ctx->pc = 0x2F3CCCu;
            goto label_2f3ccc;
        }
    }
    ctx->pc = 0x2F3C6Cu;
    // 0x2f3c6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f3c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f3c70: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x2f3c70u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_2f3c74:
    // 0x2f3c74: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2f3c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3c78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f3c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3c7c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f3c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3c80: 0xc0bdb5e  jal         func_2F6D78
    ctx->pc = 0x2F3C80u;
    SET_GPR_U32(ctx, 31, 0x2F3C88u);
    ctx->pc = 0x2F3C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3C80u;
    // 0x2f3c84: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6D78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6D78u, 0x2F3C80u, 0x2F3C88u)) {
        return;
    }
    ctx->pc = 0x2F3C88u;
label_2f3c88:
    // 0x2f3c88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3C88u;
    {
        const bool branch_taken_0x2f3c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C88u;
        // 0x2f3c8c: 0x8fa80404  lw          $t0, 0x404($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3c88) {
            ctx->pc = 0x2F3C9Cu;
            goto label_2f3c9c;
        }
    }
    ctx->pc = 0x2F3C90u;
    // 0x2f3c90: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f3c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f3c94: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F3C94u;
    {
        const bool branch_taken_0x2f3c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C94u;
        // 0x2f3c98: 0x3442006f  ori         $v0, $v0, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)111);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3c94) {
            ctx->pc = 0x2F3CD4u;
            goto label_2f3cd4;
        }
    }
    ctx->pc = 0x2F3C9Cu;
label_2f3c9c:
    // 0x2f3c9c: 0x1100ffa1  beqz        $t0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x2F3C9Cu;
    {
        const bool branch_taken_0x2f3c9c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C9Cu;
        // 0x2f3ca0: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3c9c) {
            ctx->pc = 0x2F3B24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3b24;
        }
    }
    ctx->pc = 0x2F3CA4u;
    // 0x2f3ca4: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2f3ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f3ca8: 0xafa00404  sw          $zero, 0x404($sp)
    ctx->pc = 0x2f3ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 0));
    // 0x2f3cac: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x2F3CACu;
    SET_GPR_U32(ctx, 31, 0x2F3CB4u);
    ctx->pc = 0x2F3CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3CACu;
    // 0x2f3cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x2F3CACu, 0x2F3CB4u)) {
        return;
    }
    ctx->pc = 0x2F3CB4u;
label_2f3cb4:
    // 0x2f3cb4: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x2f3cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2f3cb8: 0x1440ff8b  bnez        $v0, . + 4 + (-0x75 << 2)
    ctx->pc = 0x2F3CB8u;
    {
        const bool branch_taken_0x2f3cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CB8u;
        // 0x2f3cbc: 0x3c06006b  lui         $a2, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3cb8) {
            ctx->pc = 0x2F3AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f3ae8;
        }
    }
    ctx->pc = 0x2F3CC0u;
label_2f3cc0:
    // 0x2f3cc0: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f3cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f3cc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3CC4u;
    {
        const bool branch_taken_0x2f3cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CC4u;
        // 0x2f3cc8: 0x34429002  ori         $v0, $v0, 0x9002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36866);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3cc4) {
            ctx->pc = 0x2F3CD4u;
            goto label_2f3cd4;
        }
    }
    ctx->pc = 0x2F3CCCu;
label_2f3ccc:
    // 0x2f3ccc: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f3cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f3cd0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2f3cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2f3cd4:
    // 0x2f3cd4: 0xdfbf04a0  ld          $ra, 0x4A0($sp)
    ctx->pc = 0x2f3cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x2f3cd8: 0xdfbe0490  ld          $fp, 0x490($sp)
    ctx->pc = 0x2f3cd8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x2f3cdc: 0xdfb70480  ld          $s7, 0x480($sp)
    ctx->pc = 0x2f3cdcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x2f3ce0: 0xdfb60470  ld          $s6, 0x470($sp)
    ctx->pc = 0x2f3ce0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x2f3ce4: 0xdfb50460  ld          $s5, 0x460($sp)
    ctx->pc = 0x2f3ce4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x2f3ce8: 0xdfb40450  ld          $s4, 0x450($sp)
    ctx->pc = 0x2f3ce8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x2f3cec: 0xdfb30440  ld          $s3, 0x440($sp)
    ctx->pc = 0x2f3cecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x2f3cf0: 0xdfb20430  ld          $s2, 0x430($sp)
    ctx->pc = 0x2f3cf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x2f3cf4: 0xdfb10420  ld          $s1, 0x420($sp)
    ctx->pc = 0x2f3cf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x2f3cf8: 0xdfb00410  ld          $s0, 0x410($sp)
    ctx->pc = 0x2f3cf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x2f3cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CFCu;
        // 0x2f3d00: 0x27bd04b0  addiu       $sp, $sp, 0x4B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3D04u;
    // 0x2f3d04: 0x0  nop
    ctx->pc = 0x2f3d04u;
    // NOP
    ctx->pc = 0x2f3d08u;
}
