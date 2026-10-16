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

// Function: sub_002D2910
// Address: 0x2d2910 - 0x2d2bb0
void sub_002D2910_0x2d2910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2910_0x2d2910");
#endif

    switch (ctx->pc) {
        case 0x2d2988u: goto label_2d2988;
        case 0x2d29b4u: goto label_2d29b4;
        case 0x2d29d0u: goto label_2d29d0;
        case 0x2d29e0u: goto label_2d29e0;
        case 0x2d2a34u: goto label_2d2a34;
        default: break;
    }

    ctx->pc = 0x2d2910u;

    // 0x2d2910: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2d2910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2d2914: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2d2914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x2d2918: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2d2918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2d291c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2d291cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x2d2920: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2d2920u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2924: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2d2924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x2d2928: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2d2928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x2d292c: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2d292cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x2d2930: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2d2930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x2d2934: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x2d2934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x2d2938: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2d2938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2d293c: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2d293cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x2d2940: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2d2940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x2d2944: 0x8ef10004  lw          $s1, 0x4($s7)
    ctx->pc = 0x2d2944u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x2d2948: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x2d2948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
    // 0x2d294c: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x2d294cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x2d2950: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x2d2950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x2d2954: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x2d2954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x2d2958: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2d2958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d295c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2d295cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d2960: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2960u;
    {
        const bool branch_taken_0x2d2960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2960u;
        // 0x2d2964: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2960) {
            ctx->pc = 0x2D2970u;
            goto label_2d2970;
        }
    }
    ctx->pc = 0x2D2968u;
    // 0x2d2968: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x2D2968u;
    {
        const bool branch_taken_0x2d2968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2968u;
        // 0x2d296c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2968) {
            ctx->pc = 0x2D2B7Cu;
            goto label_2d2b7c;
        }
    }
    ctx->pc = 0x2D2970u;
label_2d2970:
    // 0x2d2970: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x2d2970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x2d2974: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2d2974u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2978: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x2D2978u;
    {
        const bool branch_taken_0x2d2978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2978u;
        // 0x2d297c: 0x8ee50008  lw          $a1, 0x8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2978) {
            ctx->pc = 0x2D2B70u;
            goto label_2d2b70;
        }
    }
    ctx->pc = 0x2D2980u;
    // 0x2d2980: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2d2980u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2984: 0x0  nop
    ctx->pc = 0x2d2984u;
    // NOP
label_2d2988:
    // 0x2d2988: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2d2988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d298c: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2D298Cu;
    {
        const bool branch_taken_0x2d298c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D298Cu;
        // 0x2d2990: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d298c) {
            ctx->pc = 0x2D2B5Cu;
            goto label_2d2b5c;
        }
    }
    ctx->pc = 0x2D2994u;
    // 0x2d2994: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d2994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2998: 0xa7a50044  sh          $a1, 0x44($sp)
    ctx->pc = 0x2d2998u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 68), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d299c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d299cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d29a0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2d29a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2d29a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d29a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d29a8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2d29a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d29ac: 0xc0aa730  jal         func_2A9CC0
    ctx->pc = 0x2D29ACu;
    SET_GPR_U32(ctx, 31, 0x2D29B4u);
    ctx->pc = 0x2D29B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D29ACu;
    // 0x2d29b0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9CC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9CC0u, 0x2D29ACu, 0x2D29B4u)) {
        return;
    }
    ctx->pc = 0x2D29B4u;
label_2d29b4:
    // 0x2d29b4: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x2d29b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2d29b8: 0x10c00068  beqz        $a2, . + 4 + (0x68 << 2)
    ctx->pc = 0x2D29B8u;
    {
        const bool branch_taken_0x2d29b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D29BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D29B8u;
        // 0x2d29bc: 0x26c2000c  addiu       $v0, $s6, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d29b8) {
            ctx->pc = 0x2D2B5Cu;
            goto label_2d2b5c;
        }
    }
    ctx->pc = 0x2D29C0u;
    // 0x2d29c0: 0x8fb30050  lw          $s3, 0x50($sp)
    ctx->pc = 0x2d29c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d29c4: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x2d29c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x2d29c8: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x2d29c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d29cc: 0x0  nop
    ctx->pc = 0x2d29ccu;
    // NOP
label_2d29d0:
    // 0x2d29d0: 0x12c00014  beqz        $s6, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D29D0u;
    {
        const bool branch_taken_0x2d29d0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D29D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D29D0u;
        // 0x2d29d4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d29d0) {
            ctx->pc = 0x2D2A24u;
            goto label_2d2a24;
        }
    }
    ctx->pc = 0x2D29D8u;
    // 0x2d29d8: 0xc0ab572  jal         func_2AD5C8
    ctx->pc = 0x2D29D8u;
    SET_GPR_U32(ctx, 31, 0x2D29E0u);
    ctx->pc = 0x2D29DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D29D8u;
    // 0x2d29dc: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD5C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD5C8u, 0x2D29D8u, 0x2D29E0u)) {
        return;
    }
    ctx->pc = 0x2D29E0u;
label_2d29e0:
    // 0x2d29e0: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x2d29e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2d29e4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x2d29e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d29e8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2d29e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d29ec: 0x94a3005a  lhu         $v1, 0x5A($a1)
    ctx->pc = 0x2d29ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 90)));
    // 0x2d29f0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x2d29f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2d29f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d29f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d29f8: 0x22142  srl         $a0, $v0, 5
    ctx->pc = 0x2d29f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2d29fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d29fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2a00: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2d2a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2d2a04: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2d2a04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2d2a08: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x2d2a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2d2a0c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2d2a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2d2a10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d2a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d2a14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2d2a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2d2a18: 0x1460004b  bnez        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x2D2A18u;
    {
        const bool branch_taken_0x2d2a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2A18u;
        // 0x2d2a1c: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2a18) {
            ctx->pc = 0x2D2B48u;
            goto label_2d2b48;
        }
    }
    ctx->pc = 0x2D2A20u;
    // 0x2d2a20: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d2a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d2a24:
    // 0x2d2a24: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2d2a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d2a28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d2a28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2a2c: 0xc0ab4b8  jal         func_2AD2E0
    ctx->pc = 0x2D2A2Cu;
    SET_GPR_U32(ctx, 31, 0x2D2A34u);
    ctx->pc = 0x2D2A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2A2Cu;
    // 0x2d2a30: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD2E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD2E0u, 0x2D2A2Cu, 0x2D2A34u)) {
        return;
    }
    ctx->pc = 0x2D2A34u;
label_2d2a34:
    // 0x2d2a34: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2D2A34u;
    {
        const bool branch_taken_0x2d2a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2A34u;
        // 0x2d2a38: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2a34) {
            ctx->pc = 0x2D2B48u;
            goto label_2d2b48;
        }
    }
    ctx->pc = 0x2D2A3Cu;
    // 0x2d2a3c: 0x13b0002e  beq         $sp, $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2D2A3Cu;
    {
        const bool branch_taken_0x2d2a3c = (GPR_U64(ctx, 29) == GPR_U64(ctx, 16));
        ctx->pc = 0x2D2A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2A3Cu;
        // 0x2d2a40: 0x34068000  ori         $a2, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2a3c) {
            ctx->pc = 0x2D2AF8u;
            goto label_2d2af8;
        }
    }
    ctx->pc = 0x2D2A44u;
    // 0x2d2a44: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2d2a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2d2a48: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2d2a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2a4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d2a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d2a50: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x2d2a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2a54: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2d2a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2d2a58: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d2a58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d2a5c: 0xc4424014  lwc1        $f2, 0x4014($v0)
    ctx->pc = 0x2d2a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2a60: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2d2a60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2a64: 0x0  nop
    ctx->pc = 0x2d2a64u;
    // NOP
    // 0x2d2a68: 0x45030037  bc1tl       . + 4 + (0x37 << 2)
    ctx->pc = 0x2D2A68u;
    {
        const bool branch_taken_0x2d2a68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2a68) {
            ctx->pc = 0x2D2A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2A68u;
            // 0x2d2a6c: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2B48u;
            goto label_2d2b48;
        }
    }
    ctx->pc = 0x2D2A70u;
    // 0x2d2a70: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2d2a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2a74: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2d2a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2a78: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d2a78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d2a7c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2d2a7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2a80: 0x0  nop
    ctx->pc = 0x2d2a80u;
    // NOP
    // 0x2d2a84: 0x45030030  bc1tl       . + 4 + (0x30 << 2)
    ctx->pc = 0x2D2A84u;
    {
        const bool branch_taken_0x2d2a84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2a84) {
            ctx->pc = 0x2D2A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2A84u;
            // 0x2d2a88: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2B48u;
            goto label_2d2b48;
        }
    }
    ctx->pc = 0x2D2A8Cu;
    // 0x2d2a8c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2d2a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2a90: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2d2a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2a94: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d2a94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d2a98: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2d2a98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2a9c: 0x0  nop
    ctx->pc = 0x2d2a9cu;
    // NOP
    // 0x2d2aa0: 0x45010029  bc1t        . + 4 + (0x29 << 2)
    ctx->pc = 0x2D2AA0u;
    {
        const bool branch_taken_0x2d2aa0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D2AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2AA0u;
        // 0x2d2aa4: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2aa0) {
            ctx->pc = 0x2D2B48u;
            goto label_2d2b48;
        }
    }
    ctx->pc = 0x2D2AA8u;
    // 0x2d2aa8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2d2aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2aac: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2d2aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2ab0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d2ab0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d2ab4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2d2ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2ab8: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x2D2AB8u;
    {
        const bool branch_taken_0x2d2ab8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2ab8) {
            ctx->pc = 0x2D2B48u;
            goto label_2d2b48;
        }
    }
    ctx->pc = 0x2D2AC0u;
    // 0x2d2ac0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2d2ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2ac4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2d2ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2ac8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d2ac8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d2acc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2d2accu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2ad0: 0x0  nop
    ctx->pc = 0x2d2ad0u;
    // NOP
    // 0x2d2ad4: 0x4503001d  bc1tl       . + 4 + (0x1D << 2)
    ctx->pc = 0x2D2AD4u;
    {
        const bool branch_taken_0x2d2ad4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2ad4) {
            ctx->pc = 0x2D2AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2AD4u;
            // 0x2d2ad8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2B4Cu;
            goto label_2d2b4c;
        }
    }
    ctx->pc = 0x2D2ADCu;
    // 0x2d2adc: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2d2adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2ae0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2d2ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2ae4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d2ae4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d2ae8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2d2ae8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2aec: 0x0  nop
    ctx->pc = 0x2d2aecu;
    // NOP
    // 0x2d2af0: 0x45030016  bc1tl       . + 4 + (0x16 << 2)
    ctx->pc = 0x2D2AF0u;
    {
        const bool branch_taken_0x2d2af0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2af0) {
            ctx->pc = 0x2D2AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2AF0u;
            // 0x2d2af4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2B4Cu;
            goto label_2d2b4c;
        }
    }
    ctx->pc = 0x2D2AF8u;
label_2d2af8:
    // 0x2d2af8: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x2d2af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x2d2afc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2d2afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d2b00: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x2d2b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2d2b04: 0x452018  mult        $a0, $v0, $a1
    ctx->pc = 0x2d2b04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2d2b08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d2b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d2b0c: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x2d2b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
    // 0x2d2b10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d2b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d2b14: 0x6ba60047  ldl         $a2, 0x47($sp)
    ctx->pc = 0x2d2b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2d2b18: 0x6fa60040  ldr         $a2, 0x40($sp)
    ctx->pc = 0x2d2b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2d2b1c: 0xb0660007  sdl         $a2, 0x7($v1)
    ctx->pc = 0x2d2b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d2b20: 0xb4660000  sdr         $a2, 0x0($v1)
    ctx->pc = 0x2d2b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d2b24: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x2d2b24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2d2b28: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2d2b28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x2d2b2c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d2b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d2b30: 0xa466000c  sh          $a2, 0xC($v1)
    ctx->pc = 0x2d2b30u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x2d2b34: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2d2b34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2d2b38: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x2d2b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x2d2b3c: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x2d2b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x2d2b40: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D2B40u;
    {
        const bool branch_taken_0x2d2b40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D2B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2B40u;
        // 0x2d2b44: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2b40) {
            ctx->pc = 0x2D2B70u;
            goto label_2d2b70;
        }
    }
    ctx->pc = 0x2D2B48u;
label_2d2b48:
    // 0x2d2b48: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2d2b48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2d2b4c:
    // 0x2d2b4c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2d2b4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2d2b50: 0x283102b  sltu        $v0, $s4, $v1
    ctx->pc = 0x2d2b50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d2b54: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x2D2B54u;
    {
        const bool branch_taken_0x2d2b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2B54u;
        // 0x2d2b58: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2b54) {
            ctx->pc = 0x2D29D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d29d0;
        }
    }
    ctx->pc = 0x2D2B5Cu;
label_2d2b5c:
    // 0x2d2b5c: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x2d2b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x2d2b60: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2d2b60u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x2d2b64: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x2d2b64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d2b68: 0x1440ff87  bnez        $v0, . + 4 + (-0x79 << 2)
    ctx->pc = 0x2D2B68u;
    {
        const bool branch_taken_0x2d2b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2B68u;
        // 0x2d2b6c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2b68) {
            ctx->pc = 0x2D2988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2988;
        }
    }
    ctx->pc = 0x2D2B70u;
label_2d2b70:
    // 0x2d2b70: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x2d2b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x2d2b74: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2d2b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d2b78: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2d2b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2d2b7c:
    // 0x2d2b7c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2d2b7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d2b80: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2d2b80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d2b84: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2d2b84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d2b88: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2d2b88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d2b8c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2d2b8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d2b90: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2d2b90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d2b94: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2d2b94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d2b98: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2d2b98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d2b9c: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x2d2b9cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d2ba0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2d2ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d2ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2BA4u;
        // 0x2d2ba8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2BACu;
    // 0x2d2bac: 0x0  nop
    ctx->pc = 0x2d2bacu;
    // NOP
    ctx->pc = 0x2d2bb0u;
}
