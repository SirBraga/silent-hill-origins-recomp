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

// Function: sub_0031CE70
// Address: 0x31ce70 - 0x31d0d8
void sub_0031CE70_0x31ce70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031CE70_0x31ce70");
#endif

    switch (ctx->pc) {
        case 0x31cf1cu: goto label_31cf1c;
        case 0x31cfc8u: goto label_31cfc8;
        case 0x31d06cu: goto label_31d06c;
        default: break;
    }

    ctx->pc = 0x31ce70u;

    // 0x31ce70: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x31ce70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x31ce74: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x31ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x31ce78: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x31ce78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x31ce7c: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x31ce7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x31ce80: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x31ce80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x31ce84: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x31ce84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x31ce88: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x31ce88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x31ce8c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x31ce8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x31ce90: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x31ce90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x31ce94: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x31ce94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x31ce98: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x31ce98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x31ce9c: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x31ce9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x31cea0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x31cea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x31cea4: 0x3c160068  lui         $s6, 0x68
    ctx->pc = 0x31cea4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)104 << 16));
    // 0x31cea8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x31cea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x31ceac: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x31ceacu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ceb0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x31ceb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x31ceb4: 0x245e70c8  addiu       $fp, $v0, 0x70C8
    ctx->pc = 0x31ceb4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 28872));
    // 0x31ceb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31ceb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31cebc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31cec0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x31cec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x31cec4: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x31cec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x31cec8: 0x8fd40008  lw          $s4, 0x8($fp)
    ctx->pc = 0x31cec8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x31cecc: 0xdcc374d8  ld          $v1, 0x74D8($a2)
    ctx->pc = 0x31ceccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 29912)));
    // 0x31ced0: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x31ced0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x31ced4: 0xa3282d  daddu       $a1, $a1, $v1
    ctx->pc = 0x31ced4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 3));
    // 0x31ced8: 0xc29824  and         $s3, $a2, $v0
    ctx->pc = 0x31ced8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x31cedc: 0x64a50010  daddiu      $a1, $a1, 0x10
    ctx->pc = 0x31cedcu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)16);
    // 0x31cee0: 0x8ec274e0  lw          $v0, 0x74E0($s6)
    ctx->pc = 0x31cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29920)));
    // 0x31cee4: 0x5903c  dsll32      $s2, $a1, 0
    ctx->pc = 0x31cee4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) << (32 + 0));
    // 0x31cee8: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x31cee8u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x31ceec: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31CEECu;
    {
        const bool branch_taken_0x31ceec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x31CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CEECu;
        // 0x31cef0: 0x293a821  addu        $s5, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ceec) {
            ctx->pc = 0x31CF10u;
            goto label_31cf10;
        }
    }
    ctx->pc = 0x31CEF4u;
    // 0x31cef4: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x31cef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x31cef8: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x31cef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x31cefc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31cefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31cf00: 0x64420fff  daddiu      $v0, $v0, 0xFFF
    ctx->pc = 0x31cf00u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4095);
    // 0x31cf04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31cf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31cf08: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x31cf08u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31cf0c: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x31cf0cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
label_31cf10:
    // 0x31cf10: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x31cf10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cf14: 0xc0c7db6  jal         func_31F6D8
    ctx->pc = 0x31CF14u;
    SET_GPR_U32(ctx, 31, 0x31CF1Cu);
    ctx->pc = 0x31CF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CF14u;
    // 0x31cf18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F6D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31F6D8u, 0x31CF14u, 0x31CF1Cu)) {
        return;
    }
    ctx->pc = 0x31CF1Cu;
label_31cf1c:
    // 0x31cf1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31cf1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cf20: 0x12300060  beq         $s1, $s0, . + 4 + (0x60 << 2)
    ctx->pc = 0x31CF20u;
    {
        const bool branch_taken_0x31cf20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x31CF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF20u;
        // 0x31cf24: 0x235102b  sltu        $v0, $s1, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cf20) {
            ctx->pc = 0x31D0A4u;
            goto label_31d0a4;
        }
    }
    ctx->pc = 0x31CF28u;
    // 0x31cf28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31CF28u;
    {
        const bool branch_taken_0x31cf28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF28u;
        // 0x31cf2c: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cf28) {
            ctx->pc = 0x31CF3Cu;
            goto label_31cf3c;
        }
    }
    ctx->pc = 0x31CF30u;
    // 0x31cf30: 0x569e005d  bnel        $s4, $fp, . + 4 + (0x5D << 2)
    ctx->pc = 0x31CF30u;
    {
        const bool branch_taken_0x31cf30 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 30));
        if (branch_taken_0x31cf30) {
            ctx->pc = 0x31CF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CF30u;
            // 0x31cf34: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D0A8u;
            goto label_31d0a8;
        }
    }
    ctx->pc = 0x31CF38u;
    // 0x31cf38: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x31cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_31cf3c:
    // 0x31cf3c: 0x8c4374f8  lw          $v1, 0x74F8($v0)
    ctx->pc = 0x31cf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29944)));
    // 0x31cf40: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x31cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x31cf44: 0x16350006  bne         $s1, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x31CF44u;
    {
        const bool branch_taken_0x31cf44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x31CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF44u;
        // 0x31cf48: 0xac4374f8  sw          $v1, 0x74F8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 29944), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cf44) {
            ctx->pc = 0x31CF60u;
            goto label_31cf60;
        }
    }
    ctx->pc = 0x31CF4Cu;
    // 0x31cf4c: 0x2532821  addu        $a1, $s2, $s3
    ctx->pc = 0x31cf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x31cf50: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x31cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x31cf54: 0x34a20001  ori         $v0, $a1, 0x1
    ctx->pc = 0x31cf54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x31cf58: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x31CF58u;
    {
        const bool branch_taken_0x31cf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF58u;
        // 0x31cf5c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cf58) {
            ctx->pc = 0x31D06Cu;
            goto label_31d06c;
        }
    }
    ctx->pc = 0x31CF60u;
label_31cf60:
    // 0x31cf60: 0x8ec274e0  lw          $v0, 0x74E0($s6)
    ctx->pc = 0x31cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29920)));
    // 0x31cf64: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31CF64u;
    {
        const bool branch_taken_0x31cf64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x31CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF64u;
        // 0x31cf68: 0x2351023  subu        $v0, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cf64) {
            ctx->pc = 0x31CF74u;
            goto label_31cf74;
        }
    }
    ctx->pc = 0x31CF6Cu;
    // 0x31cf6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31CF6Cu;
    {
        const bool branch_taken_0x31cf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF6Cu;
        // 0x31cf70: 0xaed174e0  sw          $s1, 0x74E0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 29920), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cf6c) {
            ctx->pc = 0x31CF80u;
            goto label_31cf80;
        }
    }
    ctx->pc = 0x31CF74u;
label_31cf74:
    // 0x31cf74: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31cf78: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x31cf78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x31cf7c: 0xac6274f8  sw          $v0, 0x74F8($v1)
    ctx->pc = 0x31cf7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6874F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6874F8u, _value); } while (0);
label_31cf80:
    // 0x31cf80: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x31cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x31cf84: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x31cf84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x31cf88: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31CF88u;
    {
        const bool branch_taken_0x31cf88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF88u;
        // 0x31cf8c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cf88) {
            ctx->pc = 0x31CF9Cu;
            goto label_31cf9c;
        }
    }
    ctx->pc = 0x31CF90u;
    // 0x31cf90: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x31cf90u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x31cf94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31CF94u;
    {
        const bool branch_taken_0x31cf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CF94u;
        // 0x31cf98: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cf94) {
            ctx->pc = 0x31CFA0u;
            goto label_31cfa0;
        }
    }
    ctx->pc = 0x31CF9Cu;
label_31cf9c:
    // 0x31cf9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31cf9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31cfa0:
    // 0x31cfa0: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x31cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x31cfa4: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x31cfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x31cfa8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x31cfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x31cfac: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x31cfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cfb0: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x31cfb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x31cfb4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x31cfb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31cfb8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x31cfb8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x31cfbc: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x31cfbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x31cfc0: 0xc0c7db6  jal         func_31F6D8
    ctx->pc = 0x31CFC0u;
    SET_GPR_U32(ctx, 31, 0x31CFC8u);
    ctx->pc = 0x31CFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CFC0u;
    // 0x31cfc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F6D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31F6D8u, 0x31CFC0u, 0x31CFC8u)) {
        return;
    }
    ctx->pc = 0x31CFC8u;
label_31cfc8:
    // 0x31cfc8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31cfc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cfcc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31cfd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31cfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31cfd4: 0x50620034  beql        $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x31CFD4u;
    {
        const bool branch_taken_0x31cfd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31cfd4) {
            ctx->pc = 0x31CFD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31CFD4u;
            // 0x31cfd8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D0A8u;
            goto label_31d0a8;
        }
    }
    ctx->pc = 0x31CFDCu;
    // 0x31cfdc: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x31cfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x31cfe0: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x31cfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x31cfe4: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x31cfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x31cfe8: 0x8c8274f8  lw          $v0, 0x74F8($a0)
    ctx->pc = 0x31cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6874F8u));
    // 0x31cfec: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x31cfecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x31cff0: 0x246470c8  addiu       $a0, $v1, 0x70C8
    ctx->pc = 0x31cff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28872));
    // 0x31cff4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31cff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31cff8: 0x34a30001  ori         $v1, $a1, 0x1
    ctx->pc = 0x31cff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x31cffc: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x31cffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x31d000: 0xaca274f8  sw          $v0, 0x74F8($a1)
    ctx->pc = 0x31d000u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6874F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6874F8u, _value); } while (0);
    // 0x31d004: 0xac910008  sw          $s1, 0x8($a0)
    ctx->pc = 0x31d004u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x6870D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6870D0u, _value); } while (0);
    // 0x31d008: 0x12840018  beq         $s4, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x31D008u;
    {
        const bool branch_taken_0x31d008 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        ctx->pc = 0x31D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D008u;
        // 0x31d00c: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d008) {
            ctx->pc = 0x31D06Cu;
            goto label_31d06c;
        }
    }
    ctx->pc = 0x31D010u;
    // 0x31d010: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x31d010u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x31d014: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D014u;
    {
        const bool branch_taken_0x31d014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D014u;
        // 0x31d018: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d014) {
            ctx->pc = 0x31D028u;
            goto label_31d028;
        }
    }
    ctx->pc = 0x31D01Cu;
    // 0x31d01c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x31d01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x31d020: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x31D020u;
    {
        const bool branch_taken_0x31d020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D020u;
        // 0x31d024: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d020) {
            ctx->pc = 0x31D0A4u;
            goto label_31d0a4;
        }
    }
    ctx->pc = 0x31D028u;
label_31d028:
    // 0x31d028: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x31d028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x31d02c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31d02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31d030: 0x2664fff4  addiu       $a0, $s3, -0xC
    ctx->pc = 0x31d030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967284));
    // 0x31d034: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x31d034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x31d038: 0x829824  and         $s3, $a0, $v0
    ctx->pc = 0x31d038u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x31d03c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x31d03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x31d040: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x31d040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x31d044: 0x2932021  addu        $a0, $s4, $s3
    ctx->pc = 0x31d044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x31d048: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x31d048u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x31d04c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x31d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31d050: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x31d050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x31d054: 0x2e630010  sltiu       $v1, $s3, 0x10
    ctx->pc = 0x31d054u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x31d058: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D058u;
    {
        const bool branch_taken_0x31d058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D058u;
        // 0x31d05c: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d058) {
            ctx->pc = 0x31D06Cu;
            goto label_31d06c;
        }
    }
    ctx->pc = 0x31D060u;
    // 0x31d060: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x31d060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d064: 0xc0c7602  jal         func_31D808
    ctx->pc = 0x31D064u;
    SET_GPR_U32(ctx, 31, 0x31D06Cu);
    ctx->pc = 0x31D068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D064u;
    // 0x31d068: 0x26850008  addiu       $a1, $s4, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31D808u, 0x31D064u, 0x31D06Cu)) {
        return;
    }
    ctx->pc = 0x31D06Cu;
label_31d06c:
    // 0x31d06c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x31d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x31d070: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x31d070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x31d074: 0x8c4374f8  lw          $v1, 0x74F8($v0)
    ctx->pc = 0x31d074u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6874F8u));
    // 0x31d078: 0xdc8274e8  ld          $v0, 0x74E8($a0)
    ctx->pc = 0x31d078u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6874E8u));
    // 0x31d07c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x31d07cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31d080: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31D080u;
    {
        const bool branch_taken_0x31d080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d080) {
            ctx->pc = 0x31D084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D080u;
            // 0x31d084: 0xfc8374e8  sd          $v1, 0x74E8($a0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 4), 29928), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D088u;
            goto label_31d088;
        }
    }
    ctx->pc = 0x31D088u;
label_31d088:
    // 0x31d088: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x31d088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x31d08c: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x31d08cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x31d090: 0x8ca374f8  lw          $v1, 0x74F8($a1)
    ctx->pc = 0x31d090u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6874F8u));
    // 0x31d094: 0xdc8274f0  ld          $v0, 0x74F0($a0)
    ctx->pc = 0x31d094u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x6874F0u));
    // 0x31d098: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x31d098u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31d09c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x31D09Cu;
    {
        const bool branch_taken_0x31d09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31d09c) {
            ctx->pc = 0x31D0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D09Cu;
            // 0x31d0a0: 0xfc8374f0  sd          $v1, 0x74F0($a0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 4), 29936), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D0A4u;
            goto label_31d0a4;
        }
    }
    ctx->pc = 0x31D0A4u;
label_31d0a4:
    // 0x31d0a4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x31d0a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_31d0a8:
    // 0x31d0a8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x31d0a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31d0ac: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x31d0acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31d0b0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x31d0b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31d0b4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x31d0b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31d0b8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x31d0b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31d0bc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x31d0bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d0c0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x31d0c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d0c4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x31d0c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31d0c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31d0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x31D0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D0CCu;
        // 0x31d0d0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D0D4u;
    // 0x31d0d4: 0x0  nop
    ctx->pc = 0x31d0d4u;
    // NOP
    ctx->pc = 0x31d0d8u;
}
