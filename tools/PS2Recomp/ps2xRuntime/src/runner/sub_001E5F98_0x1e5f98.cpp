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

// Function: sub_001E5F98
// Address: 0x1e5f98 - 0x1e61c8
void sub_001E5F98_0x1e5f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5F98_0x1e5f98");
#endif

    switch (ctx->pc) {
        case 0x1e5fd4u: goto label_1e5fd4;
        case 0x1e5fe4u: goto label_1e5fe4;
        case 0x1e6004u: goto label_1e6004;
        case 0x1e6010u: goto label_1e6010;
        case 0x1e602cu: goto label_1e602c;
        case 0x1e6048u: goto label_1e6048;
        case 0x1e6054u: goto label_1e6054;
        case 0x1e6064u: goto label_1e6064;
        case 0x1e6070u: goto label_1e6070;
        case 0x1e6080u: goto label_1e6080;
        case 0x1e60c8u: goto label_1e60c8;
        case 0x1e60d4u: goto label_1e60d4;
        case 0x1e6100u: goto label_1e6100;
        case 0x1e6114u: goto label_1e6114;
        case 0x1e6124u: goto label_1e6124;
        case 0x1e6140u: goto label_1e6140;
        case 0x1e6158u: goto label_1e6158;
        case 0x1e6188u: goto label_1e6188;
        case 0x1e6198u: goto label_1e6198;
        case 0x1e61a0u: goto label_1e61a0;
        default: break;
    }

    ctx->pc = 0x1e5f98u;

    // 0x1e5f98: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e5f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1e5f9c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1e5f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1e5fa0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1e5fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1e5fa4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e5fa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5fa8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1e5fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1e5fac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1e5facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5fb0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e5fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e5fb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e5fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5fb8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1e5fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1e5fbc: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x1e5fbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5fc0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1e5fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1e5fc4: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1e5fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x1e5fc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e5fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e5fcc: 0xc091eaa  jal         func_247AA8
    ctx->pc = 0x1E5FCCu;
    SET_GPR_U32(ctx, 31, 0x1E5FD4u);
    ctx->pc = 0x1E5FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5FCCu;
    // 0x1e5fd0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247AA8u, 0x1E5FCCu, 0x1E5FD4u)) {
        return;
    }
    ctx->pc = 0x1E5FD4u;
label_1e5fd4:
    // 0x1e5fd4: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1e5fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e5fd8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1e5fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1e5fdc: 0xc091f3e  jal         func_247CF8
    ctx->pc = 0x1E5FDCu;
    SET_GPR_U32(ctx, 31, 0x1E5FE4u);
    ctx->pc = 0x1E5FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5FDCu;
    // 0x1e5fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247CF8u, 0x1E5FDCu, 0x1E5FE4u)) {
        return;
    }
    ctx->pc = 0x1E5FE4u;
label_1e5fe4:
    // 0x1e5fe4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e5fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e5fe8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e5fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5fec: 0xdc5034c8  ld          $s0, 0x34C8($v0)
    ctx->pc = 0x1e5fecu;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x6B34C8u));
    // 0x1e5ff0: 0x321001ff  andi        $s0, $s0, 0x1FF
    ctx->pc = 0x1e5ff0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)511);
    // 0x1e5ff4: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1e5ff4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1e5ff8: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1e5ff8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1e5ffc: 0xc079cfa  jal         func_1E73E8
    ctx->pc = 0x1E5FFCu;
    SET_GPR_U32(ctx, 31, 0x1E6004u);
    ctx->pc = 0x1E6000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5FFCu;
    // 0x1e6000: 0x108140  sll         $s0, $s0, 5 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x1E5FFCu, 0x1E6004u)) {
        return;
    }
    ctx->pc = 0x1E6004u;
label_1e6004:
    // 0x1e6004: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e6004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6008: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6008u;
    SET_GPR_U32(ctx, 31, 0x1E6010u);
    ctx->pc = 0x1E600Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6008u;
    // 0x1e600c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6008u, 0x1E6010u)) {
        return;
    }
    ctx->pc = 0x1E6010u;
label_1e6010:
    // 0x1e6010: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e6010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e6014: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e6014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e6018: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1e6018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e601c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1e601cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1e6020: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x1e6020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1e6024: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6024u;
    SET_GPR_U32(ctx, 31, 0x1E602Cu);
    ctx->pc = 0x1E6028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6024u;
    // 0x1e6028: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6024u, 0x1E602Cu)) {
        return;
    }
    ctx->pc = 0x1E602Cu;
label_1e602c:
    // 0x1e602c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e602cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e6030: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e6030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e6034: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x1e6034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x1e6038: 0xdc4534c0  ld          $a1, 0x34C0($v0)
    ctx->pc = 0x1e6038u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13504)));
    // 0x1e603c: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x1e603cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1e6040: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6040u;
    SET_GPR_U32(ctx, 31, 0x1E6048u);
    ctx->pc = 0x1E6044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6040u;
    // 0x1e6044: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6040u, 0x1E6048u)) {
        return;
    }
    ctx->pc = 0x1E6048u;
label_1e6048:
    // 0x1e6048: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1e6048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e604c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E604Cu;
    SET_GPR_U32(ctx, 31, 0x1E6054u);
    ctx->pc = 0x1E6050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E604Cu;
    // 0x1e6050: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E604Cu, 0x1E6054u)) {
        return;
    }
    ctx->pc = 0x1E6054u;
label_1e6054:
    // 0x1e6054: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1e6054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1e6058: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x1e6058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x1e605c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E605Cu;
    SET_GPR_U32(ctx, 31, 0x1E6064u);
    ctx->pc = 0x1E6060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E605Cu;
    // 0x1e6060: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E605Cu, 0x1E6064u)) {
        return;
    }
    ctx->pc = 0x1E6064u;
label_1e6064:
    // 0x1e6064: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e6064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6068: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6068u;
    SET_GPR_U32(ctx, 31, 0x1E6070u);
    ctx->pc = 0x1E606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6068u;
    // 0x1e606c: 0x24050156  addiu       $a1, $zero, 0x156 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6068u, 0x1E6070u)) {
        return;
    }
    ctx->pc = 0x1E6070u;
label_1e6070:
    // 0x1e6070: 0x3c054080  lui         $a1, 0x4080
    ctx->pc = 0x1e6070u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16512 << 16));
    // 0x1e6074: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x1e6074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x1e6078: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6078u;
    SET_GPR_U32(ctx, 31, 0x1E6080u);
    ctx->pc = 0x1E607Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6078u;
    // 0x1e607c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6078u, 0x1E6080u)) {
        return;
    }
    ctx->pc = 0x1E6080u;
label_1e6080:
    // 0x1e6080: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1e6080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e6084: 0x3407d536  ori         $a3, $zero, 0xD536
    ctx->pc = 0x1e6084u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54582);
    // 0x1e6088: 0x73cf8  dsll        $a3, $a3, 19
    ctx->pc = 0x1e6088u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 19);
    // 0x1e608c: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x1e608cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1e6090: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1e6090u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e6094: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1e6094u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1e6098: 0x224182a  slt         $v1, $s1, $a0
    ctx->pc = 0x1e6098u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1e609c: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x1e609cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x1e60a0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1e60a0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x1e60a4: 0x6317c  dsll32      $a2, $a2, 5
    ctx->pc = 0x1e60a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 5));
    // 0x1e60a8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1e60a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x1e60ac: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1e60acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1e60b0: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x1e60b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x1e60b4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1e60b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e60b8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1e60b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1e60bc: 0x2068025  or          $s0, $s0, $a2
    ctx->pc = 0x1e60bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    // 0x1e60c0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E60C0u;
    SET_GPR_U32(ctx, 31, 0x1E60C8u);
    ctx->pc = 0x1E60C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E60C0u;
    // 0x1e60c4: 0x2052825  or          $a1, $s0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E60C0u, 0x1E60C8u)) {
        return;
    }
    ctx->pc = 0x1E60C8u;
label_1e60c8:
    // 0x1e60c8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e60c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e60cc: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E60CCu;
    SET_GPR_U32(ctx, 31, 0x1E60D4u);
    ctx->pc = 0x1E60D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E60CCu;
    // 0x1e60d0: 0x24050241  addiu       $a1, $zero, 0x241 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E60CCu, 0x1E60D4u)) {
        return;
    }
    ctx->pc = 0x1E60D4u;
label_1e60d4:
    // 0x1e60d4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e60d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e60d8: 0x223882a  slt         $s1, $s1, $v1
    ctx->pc = 0x1e60d8u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e60dc: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1e60dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1e60e0: 0x71100b  movn        $v0, $v1, $s1
    ctx->pc = 0x1e60e0u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x1e60e4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e60e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1e60e8: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1E60E8u;
    {
        const bool branch_taken_0x1e60e8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1E60ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60E8u;
        // 0x1e60ec: 0x3c160008  lui         $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e60e8) {
            ctx->pc = 0x1E6178u;
            goto label_1e6178;
        }
    }
    ctx->pc = 0x1E60F0u;
    // 0x1e60f0: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1e60f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e60f4: 0x24140200  addiu       $s4, $zero, 0x200
    ctx->pc = 0x1e60f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1e60f8: 0x138240  sll         $s0, $s3, 9
    ctx->pc = 0x1e60f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 9));
    // 0x1e60fc: 0x0  nop
    ctx->pc = 0x1e60fcu;
    // NOP
label_1e6100:
    // 0x1e6100: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e6100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e6104: 0x2162825  or          $a1, $s0, $s6
    ctx->pc = 0x1e6104u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 22));
    // 0x1e6108: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x1e6108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e610c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E610Cu;
    SET_GPR_U32(ctx, 31, 0x1E6114u);
    ctx->pc = 0x1E6110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E610Cu;
    // 0x1e6110: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E610Cu, 0x1E6114u)) {
        return;
    }
    ctx->pc = 0x1E6114u;
label_1e6114:
    // 0x1e6114: 0x26940200  addiu       $s4, $s4, 0x200
    ctx->pc = 0x1e6114u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
    // 0x1e6118: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e6118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e611c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E611Cu;
    SET_GPR_U32(ctx, 31, 0x1E6124u);
    ctx->pc = 0x1E6120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E611Cu;
    // 0x1e6120: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E611Cu, 0x1E6124u)) {
        return;
    }
    ctx->pc = 0x1E6124u;
label_1e6124:
    // 0x1e6124: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1e6124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e6128: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e6128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e612c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1e612cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e6130: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1e6130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1e6134: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e6134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e6138: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6138u;
    SET_GPR_U32(ctx, 31, 0x1E6140u);
    ctx->pc = 0x1E613Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6138u;
    // 0x1e613c: 0x2252825  or          $a1, $s1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6138u, 0x1E6140u)) {
        return;
    }
    ctx->pc = 0x1E6140u;
label_1e6140:
    // 0x1e6140: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1e6140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1e6144: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e6144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e6148: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1e6148u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1e614c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1e614cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1e6150: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6150u;
    SET_GPR_U32(ctx, 31, 0x1E6158u);
    ctx->pc = 0x1E6154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6150u;
    // 0x1e6154: 0x2252825  or          $a1, $s1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6150u, 0x1E6158u)) {
        return;
    }
    ctx->pc = 0x1E6158u;
label_1e6158:
    // 0x1e6158: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1e6158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e615c: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1e615cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1e6160: 0x2a3202a  slt         $a0, $s5, $v1
    ctx->pc = 0x1e6160u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e6164: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1e6164u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x1e6168: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e6168u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1e616c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1e616cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e6170: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1E6170u;
    {
        const bool branch_taken_0x1e6170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6170u;
        // 0x1e6174: 0x138240  sll         $s0, $s3, 9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6170) {
            ctx->pc = 0x1E6100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6100;
        }
    }
    ctx->pc = 0x1E6178u;
label_1e6178:
    // 0x1e6178: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e6178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e617c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1e617cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1e6180: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6180u;
    SET_GPR_U32(ctx, 31, 0x1E6188u);
    ctx->pc = 0x1E6184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6180u;
    // 0x1e6184: 0xdc4534d8  ld          $a1, 0x34D8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6180u, 0x1E6188u)) {
        return;
    }
    ctx->pc = 0x1E6188u;
label_1e6188:
    // 0x1e6188: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1e6188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x1e618c: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1e618cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e6190: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1E6190u;
    SET_GPR_U32(ctx, 31, 0x1E6198u);
    ctx->pc = 0x1E6194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6190u;
    // 0x1e6194: 0xdc453500  ld          $a1, 0x3500($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13568)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1E6190u, 0x1E6198u)) {
        return;
    }
    ctx->pc = 0x1E6198u;
label_1e6198:
    // 0x1e6198: 0xc079ca0  jal         func_1E7280
    ctx->pc = 0x1E6198u;
    SET_GPR_U32(ctx, 31, 0x1E61A0u);
    ctx->pc = 0x1E619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6198u;
    // 0x1e619c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1E6198u, 0x1E61A0u)) {
        return;
    }
    ctx->pc = 0x1E61A0u;
label_1e61a0:
    // 0x1e61a0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1e61a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e61a4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1e61a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e61a8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1e61a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e61ac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e61acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e61b0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1e61b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e61b4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1e61b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e61b8: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1e61b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e61bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e61bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e61c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E61C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E61C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E61C0u;
        // 0x1e61c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E61C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E61C8u;
}
