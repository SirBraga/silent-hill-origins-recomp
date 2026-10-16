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

// Function: sub_002F0AA8
// Address: 0x2f0aa8 - 0x2f0c50
void sub_002F0AA8_0x2f0aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0AA8_0x2f0aa8");
#endif

    switch (ctx->pc) {
        case 0x2f0ae4u: goto label_2f0ae4;
        case 0x2f0b28u: goto label_2f0b28;
        case 0x2f0b4cu: goto label_2f0b4c;
        case 0x2f0b70u: goto label_2f0b70;
        case 0x2f0bc4u: goto label_2f0bc4;
        case 0x2f0bd4u: goto label_2f0bd4;
        case 0x2f0be8u: goto label_2f0be8;
        case 0x2f0bf8u: goto label_2f0bf8;
        case 0x2f0c0cu: goto label_2f0c0c;
        case 0x2f0c14u: goto label_2f0c14;
        case 0x2f0c20u: goto label_2f0c20;
        default: break;
    }

    ctx->pc = 0x2f0aa8u;

    // 0x2f0aa8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2f0aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2f0aac: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x2f0aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x2f0ab0: 0x3c140068  lui         $s4, 0x68
    ctx->pc = 0x2f0ab0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)104 << 16));
    // 0x2f0ab4: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x2f0ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x2f0ab8: 0x8e826338  lw          $v0, 0x6338($s4)
    ctx->pc = 0x2f0ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x686338u));
    // 0x2f0abc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f0abcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0ac0: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x2f0ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x2f0ac4: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x2f0ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x2f0ac8: 0xffb500d0  sd          $s5, 0xD0($sp)
    ctx->pc = 0x2f0ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 21));
    // 0x2f0acc: 0xffb300b0  sd          $s3, 0xB0($sp)
    ctx->pc = 0x2f0accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
    // 0x2f0ad0: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x2f0ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x2f0ad4: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F0AD4u;
    {
        const bool branch_taken_0x2f0ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2F0AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0AD4u;
        // 0x2f0ad8: 0xffb00080  sd          $s0, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0ad4) {
            ctx->pc = 0x2F0AE4u;
            goto label_2f0ae4;
        }
    }
    ctx->pc = 0x2F0ADCu;
    // 0x2f0adc: 0xc0bc314  jal         func_2F0C50
    ctx->pc = 0x2F0ADCu;
    SET_GPR_U32(ctx, 31, 0x2F0AE4u);
    ctx->pc = 0x2F0C50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F0C50u, 0x2F0ADCu, 0x2F0AE4u)) {
        return;
    }
    ctx->pc = 0x2F0AE4u;
label_2f0ae4:
    // 0x2f0ae4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2f0ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2f0ae8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f0ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f0aec: 0x3c160071  lui         $s6, 0x71
    ctx->pc = 0x2f0aecu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)113 << 16));
    // 0x2f0af0: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x2f0af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x2f0af4: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x2f0af4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x2f0af8: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x2f0af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
    // 0x2f0afc: 0xae02f62c  sw          $v0, -0x9D4($s0)
    ctx->pc = 0x2f0afcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x70F62Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70F62Cu, _value); } while (0);
    // 0x2f0b00: 0x26d5f620  addiu       $s5, $s6, -0x9E0
    ctx->pc = 0x2f0b00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 4294964768));
    // 0x2f0b04: 0xaec2f620  sw          $v0, -0x9E0($s6)
    ctx->pc = 0x2f0b04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x70F620u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70F620u, _value); } while (0);
    // 0x2f0b08: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x2f0b08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f0b0c: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x2f0b0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x70F624u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70F624u, _value); } while (0);
    // 0x2f0b10: 0x2413007f  addiu       $s3, $zero, 0x7F
    ctx->pc = 0x2f0b10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2f0b14: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x2f0b14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x70F628u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70F628u, _value); } while (0);
    // 0x2f0b18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f0b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0b1c: 0xafb20068  sw          $s2, 0x68($sp)
    ctx->pc = 0x2f0b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 18));
    // 0x2f0b20: 0xc0c84c8  jal         func_321320
    ctx->pc = 0x2F0B20u;
    SET_GPR_U32(ctx, 31, 0x2F0B28u);
    ctx->pc = 0x2F0B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0B20u;
    // 0x2f0b24: 0xafb30064  sw          $s3, 0x64($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321320u, 0x2F0B20u, 0x2F0B28u)) {
        return;
    }
    ctx->pc = 0x2F0B28u;
label_2f0b28:
    // 0x2f0b28: 0x4400031  bltz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2F0B28u;
    {
        const bool branch_taken_0x2f0b28 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2F0B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B28u;
        // 0x2f0b2c: 0xae02f62c  sw          $v0, -0x9D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294964780), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0b28) {
            ctx->pc = 0x2F0BF0u;
            goto label_2f0bf0;
        }
    }
    ctx->pc = 0x2F0B30u;
    // 0x2f0b30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2f0b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2f0b34: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x2f0b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x2f0b38: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x2f0b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x2f0b3c: 0xafb30064  sw          $s3, 0x64($sp)
    ctx->pc = 0x2f0b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 19));
    // 0x2f0b40: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x2f0b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x2f0b44: 0xc0c84c8  jal         func_321320
    ctx->pc = 0x2F0B44u;
    SET_GPR_U32(ctx, 31, 0x2F0B4Cu);
    ctx->pc = 0x2F0B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0B44u;
    // 0x2f0b48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321320u, 0x2F0B44u, 0x2F0B4Cu)) {
        return;
    }
    ctx->pc = 0x2F0B4Cu;
label_2f0b4c:
    // 0x2f0b4c: 0x4400028  bltz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2F0B4Cu;
    {
        const bool branch_taken_0x2f0b4c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2F0B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B4Cu;
        // 0x2f0b50: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0b4c) {
            ctx->pc = 0x2F0BF0u;
            goto label_2f0bf0;
        }
    }
    ctx->pc = 0x2F0B54u;
    // 0x2f0b54: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2f0b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2f0b58: 0xafb30064  sw          $s3, 0x64($sp)
    ctx->pc = 0x2f0b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 19));
    // 0x2f0b5c: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x2f0b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2f0b60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f0b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0b64: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x2f0b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x2f0b68: 0xc0c84c8  jal         func_321320
    ctx->pc = 0x2F0B68u;
    SET_GPR_U32(ctx, 31, 0x2F0B70u);
    ctx->pc = 0x2F0B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0B68u;
    // 0x2f0b6c: 0xafa00068  sw          $zero, 0x68($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321320u, 0x2F0B68u, 0x2F0B70u)) {
        return;
    }
    ctx->pc = 0x2F0B70u;
label_2f0b70:
    // 0x2f0b70: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2F0B70u;
    {
        const bool branch_taken_0x2f0b70 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2F0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B70u;
        // 0x2f0b74: 0xaea20008  sw          $v0, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0b70) {
            ctx->pc = 0x2F0BF0u;
            goto label_2f0bf0;
        }
    }
    ctx->pc = 0x2F0B78u;
    // 0x2f0b78: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x2f0b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
    // 0x2f0b7c: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2f0b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x2f0b80: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x2f0b80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x2f0b84: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x2f0b84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x2f0b88: 0x24631888  addiu       $v1, $v1, 0x1888
    ctx->pc = 0x2f0b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6280));
    // 0x2f0b8c: 0x24a5f640  addiu       $a1, $a1, -0x9C0
    ctx->pc = 0x2f0b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964800));
    // 0x2f0b90: 0x24c6b070  addiu       $a2, $a2, -0x4F90
    ctx->pc = 0x2f0b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946928));
    // 0x2f0b94: 0x24e700a0  addiu       $a3, $a3, 0xA0
    ctx->pc = 0x2f0b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
    // 0x2f0b98: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2f0b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2f0b9c: 0x3408c000  ori         $t0, $zero, 0xC000
    ctx->pc = 0x2f0b9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x2f0ba0: 0xac40f104  sw          $zero, -0xEFC($v0)
    ctx->pc = 0x2f0ba0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x70F104u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70F104u, _value); } while (0);
    // 0x2f0ba4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f0ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0ba8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2f0ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2f0bac: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x2f0bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x2f0bb0: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x2f0bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x2f0bb4: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x2f0bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x2f0bb8: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x2f0bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x2f0bbc: 0xc0c8448  jal         func_321120
    ctx->pc = 0x2F0BBCu;
    SET_GPR_U32(ctx, 31, 0x2F0BC4u);
    ctx->pc = 0x2F0BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0BBCu;
    // 0x2f0bc0: 0xafb20014  sw          $s2, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321120u, 0x2F0BBCu, 0x2F0BC4u)) {
        return;
    }
    ctx->pc = 0x2F0BC4u;
label_2f0bc4:
    // 0x2f0bc4: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F0BC4u;
    {
        const bool branch_taken_0x2f0bc4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2F0BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BC4u;
        // 0x2f0bc8: 0xaec2f620  sw          $v0, -0x9E0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294964768), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0bc4) {
            ctx->pc = 0x2F0BE0u;
            goto label_2f0be0;
        }
    }
    ctx->pc = 0x2F0BCCu;
    // 0x2f0bcc: 0xc0bc314  jal         func_2F0C50
    ctx->pc = 0x2F0BCCu;
    SET_GPR_U32(ctx, 31, 0x2F0BD4u);
    ctx->pc = 0x2F0BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0BCCu;
    // 0x2f0bd0: 0xae926338  sw          $s2, 0x6338($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 25400), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0C50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F0C50u, 0x2F0BCCu, 0x2F0BD4u)) {
        return;
    }
    ctx->pc = 0x2F0BD4u;
label_2f0bd4:
    // 0x2f0bd4: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f0bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f0bd8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2F0BD8u;
    {
        const bool branch_taken_0x2f0bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BD8u;
        // 0x2f0bdc: 0x34428004  ori         $v0, $v0, 0x8004 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32772);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0bd8) {
            ctx->pc = 0x2F0C28u;
            goto label_2f0c28;
        }
    }
    ctx->pc = 0x2F0BE0u;
label_2f0be0:
    // 0x2f0be0: 0xc0bdc46  jal         func_2F7118
    ctx->pc = 0x2F0BE0u;
    SET_GPR_U32(ctx, 31, 0x2F0BE8u);
    ctx->pc = 0x2F7118u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7118u, 0x2F0BE0u, 0x2F0BE8u)) {
        return;
    }
    ctx->pc = 0x2F0BE8u;
label_2f0be8:
    // 0x2f0be8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F0BE8u;
    {
        const bool branch_taken_0x2f0be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f0be8) {
            ctx->pc = 0x2F0C04u;
            goto label_2f0c04;
        }
    }
    ctx->pc = 0x2F0BF0u;
label_2f0bf0:
    // 0x2f0bf0: 0xc0bc314  jal         func_2F0C50
    ctx->pc = 0x2F0BF0u;
    SET_GPR_U32(ctx, 31, 0x2F0BF8u);
    ctx->pc = 0x2F0BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0BF0u;
    // 0x2f0bf4: 0xae926338  sw          $s2, 0x6338($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 25400), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0C50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F0C50u, 0x2F0BF0u, 0x2F0BF8u)) {
        return;
    }
    ctx->pc = 0x2F0BF8u;
label_2f0bf8:
    // 0x2f0bf8: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f0bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f0bfc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F0BFCu;
    {
        const bool branch_taken_0x2f0bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BFCu;
        // 0x2f0c00: 0x34428003  ori         $v0, $v0, 0x8003 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0bfc) {
            ctx->pc = 0x2F0C28u;
            goto label_2f0c28;
        }
    }
    ctx->pc = 0x2F0C04u;
label_2f0c04:
    // 0x2f0c04: 0xc0bd938  jal         func_2F64E0
    ctx->pc = 0x2F0C04u;
    SET_GPR_U32(ctx, 31, 0x2F0C0Cu);
    ctx->pc = 0x2F64E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F64E0u, 0x2F0C04u, 0x2F0C0Cu)) {
        return;
    }
    ctx->pc = 0x2F0C0Cu;
label_2f0c0c:
    // 0x2f0c0c: 0xc0bc878  jal         func_2F21E0
    ctx->pc = 0x2F0C0Cu;
    SET_GPR_U32(ctx, 31, 0x2F0C14u);
    ctx->pc = 0x2F21E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F21E0u, 0x2F0C0Cu, 0x2F0C14u)) {
        return;
    }
    ctx->pc = 0x2F0C14u;
label_2f0c14:
    // 0x2f0c14: 0x8ec4f620  lw          $a0, -0x9E0($s6)
    ctx->pc = 0x2f0c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294964768)));
    // 0x2f0c18: 0xc0c888a  jal         func_322228
    ctx->pc = 0x2F0C18u;
    SET_GPR_U32(ctx, 31, 0x2F0C20u);
    ctx->pc = 0x2F0C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0C18u;
    // 0x2f0c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x322228u, 0x2F0C18u, 0x2F0C20u)) {
        return;
    }
    ctx->pc = 0x2F0C20u;
label_2f0c20:
    // 0x2f0c20: 0xae926338  sw          $s2, 0x6338($s4)
    ctx->pc = 0x2f0c20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 25400), GPR_U32(ctx, 18));
    // 0x2f0c24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f0c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0c28:
    // 0x2f0c28: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x2f0c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2f0c2c: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x2f0c2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2f0c30: 0xdfb500d0  ld          $s5, 0xD0($sp)
    ctx->pc = 0x2f0c30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2f0c34: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x2f0c34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2f0c38: 0xdfb300b0  ld          $s3, 0xB0($sp)
    ctx->pc = 0x2f0c38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f0c3c: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2f0c3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f0c40: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x2f0c40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f0c44: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x2f0c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f0c48: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C48u;
        // 0x2f0c4c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0C50u;
}
