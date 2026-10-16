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

// Function: sub_00221BD8
// Address: 0x221bd8 - 0x221f50
void sub_00221BD8_0x221bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221BD8_0x221bd8");
#endif

    switch (ctx->pc) {
        case 0x221c28u: goto label_221c28;
        case 0x221cc0u: goto label_221cc0;
        case 0x221d10u: goto label_221d10;
        case 0x221da8u: goto label_221da8;
        case 0x221f10u: goto label_221f10;
        default: break;
    }

    ctx->pc = 0x221bd8u;

    // 0x221bd8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x221bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x221bdc: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x221bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x221be0: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x221be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x221be4: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x221be4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221be8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x221be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x221bec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x221becu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221bf0: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x221bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x221bf4: 0x24160008  addiu       $s6, $zero, 0x8
    ctx->pc = 0x221bf4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x221bf8: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x221bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x221bfc: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x221bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x221c00: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x221c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x221c04: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x221c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x221c08: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x221c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x221c0c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x221c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x221c10: 0x8c820144  lw          $v0, 0x144($a0)
    ctx->pc = 0x221c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x221c14: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x221c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x221c18: 0x245e0080  addiu       $fp, $v0, 0x80
    ctx->pc = 0x221c18u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x221c1c: 0x8cb30050  lw          $s3, 0x50($a1)
    ctx->pc = 0x221c1cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x221c20: 0xafa80044  sw          $t0, 0x44($sp)
    ctx->pc = 0x221c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 8));
    // 0x221c24: 0x0  nop
    ctx->pc = 0x221c24u;
    // NOP
label_221c28:
    // 0x221c28: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x221c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x221c2c: 0x12c20050  beq         $s6, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x221C2Cu;
    {
        const bool branch_taken_0x221c2c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x221C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C2Cu;
        // 0x221c30: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c2c) {
            ctx->pc = 0x221D70u;
            goto label_221d70;
        }
    }
    ctx->pc = 0x221C34u;
    // 0x221c34: 0x12c2004e  beq         $s6, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x221C34u;
    {
        const bool branch_taken_0x221c34 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x221C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C34u;
        // 0x221c38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c34) {
            ctx->pc = 0x221D70u;
            goto label_221d70;
        }
    }
    ctx->pc = 0x221C3Cu;
    // 0x221c3c: 0x52c2004d  beql        $s6, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x221C3Cu;
    {
        const bool branch_taken_0x221c3c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x221c3c) {
            ctx->pc = 0x221C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221C3Cu;
            // 0x221c40: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221D74u;
            goto label_221d74;
        }
    }
    ctx->pc = 0x221C44u;
    // 0x221c44: 0x86420010  lh          $v0, 0x10($s2)
    ctx->pc = 0x221c44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x221c48: 0x96570010  lhu         $s7, 0x10($s2)
    ctx->pc = 0x221c48u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x221c4c: 0x96550030  lhu         $s5, 0x30($s2)
    ctx->pc = 0x221c4cu;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x221c50: 0x96500050  lhu         $s0, 0x50($s2)
    ctx->pc = 0x221c50u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x221c54: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x221C54u;
    {
        const bool branch_taken_0x221c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x221C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C54u;
        // 0x221c58: 0x96440070  lhu         $a0, 0x70($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c54) {
            ctx->pc = 0x221C90u;
            goto label_221c90;
        }
    }
    ctx->pc = 0x221C5Cu;
    // 0x221c5c: 0x56a0000d  bnel        $s5, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x221C5Cu;
    {
        const bool branch_taken_0x221c5c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x221c5c) {
            ctx->pc = 0x221C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221C5Cu;
            // 0x221c60: 0x8e660000  lw          $a2, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221C94u;
            goto label_221c94;
        }
    }
    ctx->pc = 0x221C64u;
    // 0x221c64: 0x5600000b  bnel        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x221C64u;
    {
        const bool branch_taken_0x221c64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x221c64) {
            ctx->pc = 0x221C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221C64u;
            // 0x221c68: 0x8e660000  lw          $a2, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221C94u;
            goto label_221c94;
        }
    }
    ctx->pc = 0x221C6Cu;
    // 0x221c6c: 0x54800009  bnel        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x221C6Cu;
    {
        const bool branch_taken_0x221c6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x221c6c) {
            ctx->pc = 0x221C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221C6Cu;
            // 0x221c70: 0x8e660000  lw          $a2, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221C94u;
            goto label_221c94;
        }
    }
    ctx->pc = 0x221C74u;
    // 0x221c74: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x221c74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x221c78: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x221c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x221c7c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x221c7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x221c80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x221c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x221c84: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x221c84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x221c88: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x221C88u;
    {
        const bool branch_taken_0x221c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221C88u;
        // 0x221c8c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221c88) {
            ctx->pc = 0x221D70u;
            goto label_221d70;
        }
    }
    ctx->pc = 0x221C90u;
label_221c90:
    // 0x221c90: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x221c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_221c94:
    // 0x221c94: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x221c94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x221c98: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x221c98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x221c9c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x221c9cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x221ca0: 0x8e6300e0  lw          $v1, 0xE0($s3)
    ctx->pc = 0x221ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
    // 0x221ca4: 0x2405e8ee  addiu       $a1, $zero, -0x1712
    ctx->pc = 0x221ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294961390));
    // 0x221ca8: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x221ca8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x221cac: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x221cacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x221cb0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x221cb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221cb4: 0x7a3f8  dsll        $s4, $a3, 15
    ctx->pc = 0x221cb4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) << 15);
    // 0x221cb8: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x221CB8u;
    SET_GPR_U32(ctx, 31, 0x221CC0u);
    ctx->pc = 0x221CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221CB8u;
    // 0x221cbc: 0x80202d  daddu       $a0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x221CB8u, 0x221CC0u)) {
        return;
    }
    ctx->pc = 0x221CC0u;
label_221cc0:
    // 0x221cc0: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x221cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
    // 0x221cc4: 0x103400  sll         $a2, $s0, 16
    ctx->pc = 0x221cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x221cc8: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x221cc8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x221ccc: 0x8e670060  lw          $a3, 0x60($s3)
    ctx->pc = 0x221cccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x221cd0: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x221cd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x221cd4: 0x152400  sll         $a0, $s5, 16
    ctx->pc = 0x221cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x221cd8: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x221cd8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x221cdc: 0x2405d746  addiu       $a1, $zero, -0x28BA
    ctx->pc = 0x221cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294956870));
    // 0x221ce0: 0x872018  mult        $a0, $a0, $a3
    ctx->pc = 0x221ce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x221ce4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x221ce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ce8: 0x718f8  dsll        $v1, $a3, 3
    ctx->pc = 0x221ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 3);
    // 0x221cec: 0x67182f  dsubu       $v1, $v1, $a3
    ctx->pc = 0x221cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 7));
    // 0x221cf0: 0x318b8  dsll        $v1, $v1, 2
    ctx->pc = 0x221cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 2);
    // 0x221cf4: 0x67182f  dsubu       $v1, $v1, $a3
    ctx->pc = 0x221cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 7));
    // 0x221cf8: 0x331f8  dsll        $a2, $v1, 7
    ctx->pc = 0x221cf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 7);
    // 0x221cfc: 0x66182d  daddu       $v1, $v1, $a2
    ctx->pc = 0x221cfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 6));
    // 0x221d00: 0x31878  dsll        $v1, $v1, 1
    ctx->pc = 0x221d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 1);
    // 0x221d04: 0x67182d  daddu       $v1, $v1, $a3
    ctx->pc = 0x221d04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 7));
    // 0x221d08: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x221D08u;
    SET_GPR_U32(ctx, 31, 0x221D10u);
    ctx->pc = 0x221D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221D08u;
    // 0x221d0c: 0x43802d  daddu       $s0, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x221D08u, 0x221D10u)) {
        return;
    }
    ctx->pc = 0x221D10u;
label_221d10:
    // 0x221d10: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x221d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x221d14: 0x171c00  sll         $v1, $s7, 16
    ctx->pc = 0x221d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
    // 0x221d18: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x221d18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x221d1c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x221d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x221d20: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x221d20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x221d24: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x221d24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d28: 0x710f8  dsll        $v0, $a3, 3
    ctx->pc = 0x221d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 3);
    // 0x221d2c: 0x47102f  dsubu       $v0, $v0, $a3
    ctx->pc = 0x221d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 7));
    // 0x221d30: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x221d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x221d34: 0x47102d  daddu       $v0, $v0, $a3
    ctx->pc = 0x221d34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 7));
    // 0x221d38: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x221d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x221d3c: 0x47102f  dsubu       $v0, $v0, $a3
    ctx->pc = 0x221d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 7));
    // 0x221d40: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x221d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x221d44: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x221d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x221d48: 0x290182f  dsubu       $v1, $s4, $s0
    ctx->pc = 0x221d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) - GPR_U64(ctx, 16));
    // 0x221d4c: 0x290102d  daddu       $v0, $s4, $s0
    ctx->pc = 0x221d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 16));
    // 0x221d50: 0x64421000  daddiu      $v0, $v0, 0x1000
    ctx->pc = 0x221d50u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4096);
    // 0x221d54: 0x64631000  daddiu      $v1, $v1, 0x1000
    ctx->pc = 0x221d54u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4096);
    // 0x221d58: 0x214f8  dsll        $v0, $v0, 19
    ctx->pc = 0x221d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 19);
    // 0x221d5c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x221d5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x221d60: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x221d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x221d64: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x221d64u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x221d68: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x221d68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x221d6c: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x221d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_221d70:
    // 0x221d70: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x221d70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_221d74:
    // 0x221d74: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x221d74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x221d78: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x221d78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x221d7c: 0x1ec0ffaa  bgtz        $s6, . + 4 + (-0x56 << 2)
    ctx->pc = 0x221D7Cu;
    {
        const bool branch_taken_0x221d7c = (GPR_S64(ctx, 22) > 0);
        ctx->pc = 0x221D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221D7Cu;
        // 0x221d80: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221d7c) {
            ctx->pc = 0x221C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221c28;
        }
    }
    ctx->pc = 0x221D84u;
    // 0x221d84: 0x8fac0040  lw          $t4, 0x40($sp)
    ctx->pc = 0x221d84u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221d88: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x221d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221d8c: 0x2413e8ee  addiu       $s3, $zero, -0x1712
    ctx->pc = 0x221d8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294961390));
    // 0x221d90: 0x24121b37  addiu       $s2, $zero, 0x1B37
    ctx->pc = 0x221d90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6967));
    // 0x221d94: 0x240fd746  addiu       $t7, $zero, -0x28BA
    ctx->pc = 0x221d94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294956870));
    // 0x221d98: 0x240e73fc  addiu       $t6, $zero, 0x73FC
    ctx->pc = 0x221d98u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 29692));
    // 0x221d9c: 0x3c0d0008  lui         $t5, 0x8
    ctx->pc = 0x221d9cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)8 << 16));
    // 0x221da0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x221da0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221da4: 0x0  nop
    ctx->pc = 0x221da4u;
    // NOP
label_221da8:
    // 0x221da8: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x221da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x221dac: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x221dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x221db0: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x221db0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x221db4: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x221db4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x221db8: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x221db8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x221dbc: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x221dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x221dc0: 0x15200012  bnez        $t1, . + 4 + (0x12 << 2)
    ctx->pc = 0x221DC0u;
    {
        const bool branch_taken_0x221dc0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x221DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DC0u;
        // 0x221dc4: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221dc0) {
            ctx->pc = 0x221E0Cu;
            goto label_221e0c;
        }
    }
    ctx->pc = 0x221DC8u;
    // 0x221dc8: 0x14c00011  bnez        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x221DC8u;
    {
        const bool branch_taken_0x221dc8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x221DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221DC8u;
        // 0x221dcc: 0x530018  mult        $zero, $v0, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x221dc8) {
            ctx->pc = 0x221E10u;
            goto label_221e10;
        }
    }
    ctx->pc = 0x221DD0u;
    // 0x221dd0: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x221DD0u;
    {
        const bool branch_taken_0x221dd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x221dd0) {
            ctx->pc = 0x221E10u;
            goto label_221e10;
        }
    }
    ctx->pc = 0x221DD8u;
    // 0x221dd8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x221DD8u;
    {
        const bool branch_taken_0x221dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x221dd8) {
            ctx->pc = 0x221E10u;
            goto label_221e10;
        }
    }
    ctx->pc = 0x221DE0u;
    // 0x221de0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x221de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x221de4: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x221de4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x221de8: 0x64420010  daddiu      $v0, $v0, 0x10
    ctx->pc = 0x221de8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)16);
    // 0x221dec: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x221decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x221df0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x221df0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x221df4: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x221df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x221df8: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x221df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x221dfc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x221dfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221e00: 0xa1630001  sb          $v1, 0x1($t3)
    ctx->pc = 0x221e00u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x221e04: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x221E04u;
    {
        const bool branch_taken_0x221e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221E04u;
        // 0x221e08: 0xa1630000  sb          $v1, 0x0($t3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221e04) {
            ctx->pc = 0x221ED4u;
            goto label_221ed4;
        }
    }
    ctx->pc = 0x221E0Cu;
label_221e0c:
    // 0x221e0c: 0x530018  mult        $zero, $v0, $s3
    ctx->pc = 0x221e0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_221e10:
    // 0x221e10: 0x2812  mflo        $a1
    ctx->pc = 0x221e10u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x221e14: 0x1810  mfhi        $v1
    ctx->pc = 0x221e14u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x221e18: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x221e18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x221e1c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x221e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x221e20: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x221e20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x221e24: 0x920018  mult        $zero, $a0, $s2
    ctx->pc = 0x221e24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x221e28: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x221e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x221e2c: 0x1012  mflo        $v0
    ctx->pc = 0x221e2cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x221e30: 0x5010  mfhi        $t2
    ctx->pc = 0x221e30u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x221e34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x221e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x221e38: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x221e38u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x221e3c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x221e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x221e40: 0xcf0018  mult        $zero, $a2, $t7
    ctx->pc = 0x221e40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x221e44: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x221e44u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x221e48: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x221e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x221e4c: 0x6a182d  daddu       $v1, $v1, $t2
    ctx->pc = 0x221e4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 10));
    // 0x221e50: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x221e50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x221e54: 0x2a3f8  dsll        $s4, $v0, 15
    ctx->pc = 0x221e54u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << 15);
    // 0x221e58: 0x2012  mflo        $a0
    ctx->pc = 0x221e58u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x221e5c: 0x4010  mfhi        $t0
    ctx->pc = 0x221e5cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x221e60: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x221e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x221e64: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x221e64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x221e68: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x221e68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x221e6c: 0x12e0018  mult        $zero, $t1, $t6
    ctx->pc = 0x221e6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x221e70: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x221e70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x221e74: 0x68182d  daddu       $v1, $v1, $t0
    ctx->pc = 0x221e74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 8));
    // 0x221e78: 0x2012  mflo        $a0
    ctx->pc = 0x221e78u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x221e7c: 0x4810  mfhi        $t1
    ctx->pc = 0x221e7cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x221e80: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x221e80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x221e84: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x221e84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x221e88: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x221e88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x221e8c: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x221e8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x221e90: 0x69802d  daddu       $s0, $v1, $t1
    ctx->pc = 0x221e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 9));
    // 0x221e94: 0x290102d  daddu       $v0, $s4, $s0
    ctx->pc = 0x221e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 16));
    // 0x221e98: 0x290202f  dsubu       $a0, $s4, $s0
    ctx->pc = 0x221e98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) - GPR_U64(ctx, 16));
    // 0x221e9c: 0x4d102d  daddu       $v0, $v0, $t5
    ctx->pc = 0x221e9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 13));
    // 0x221ea0: 0x8d202d  daddu       $a0, $a0, $t5
    ctx->pc = 0x221ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 13));
    // 0x221ea4: 0x21338  dsll        $v0, $v0, 12
    ctx->pc = 0x221ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 12);
    // 0x221ea8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x221ea8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x221eac: 0x42338  dsll        $a0, $a0, 12
    ctx->pc = 0x221eacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 12);
    // 0x221eb0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x221eb0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x221eb4: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x221eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x221eb8: 0x308403ff  andi        $a0, $a0, 0x3FF
    ctx->pc = 0x221eb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x221ebc: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x221ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x221ec0: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x221ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x221ec4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x221ec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221ec8: 0xa1630000  sb          $v1, 0x0($t3)
    ctx->pc = 0x221ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x221ecc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x221eccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x221ed0: 0xa1620001  sb          $v0, 0x1($t3)
    ctx->pc = 0x221ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 2));
label_221ed4:
    // 0x221ed4: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x221ed4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x221ed8: 0x6c1ffb3  bgez        $s6, . + 4 + (-0x4D << 2)
    ctx->pc = 0x221ED8u;
    {
        const bool branch_taken_0x221ed8 = (GPR_S64(ctx, 22) >= 0);
        ctx->pc = 0x221EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221ED8u;
        // 0x221edc: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221ed8) {
            ctx->pc = 0x221DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_221da8;
        }
    }
    ctx->pc = 0x221EE0u;
    // 0x221ee0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x221ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x221ee4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x221ee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x221ee8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x221ee8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x221eec: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x221eecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x221ef0: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x221ef0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x221ef4: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x221ef4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x221ef8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x221ef8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x221efc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x221efcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x221f00: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x221f00u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x221f04: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x221f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x221f08: 0x3e00008  jr          $ra
    ctx->pc = 0x221F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F08u;
        // 0x221f0c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221F10u;
label_221f10:
    // 0x221f10: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x221f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x221f14: 0x84c90000  lh          $t1, 0x0($a2)
    ctx->pc = 0x221f14u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x221f18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x221f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221f1c: 0x8c850144  lw          $a1, 0x144($a0)
    ctx->pc = 0x221f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x221f20: 0x1231818  mult        $v1, $t1, $v1
    ctx->pc = 0x221f20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x221f24: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x221f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x221f28: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x221f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x221f2c: 0x64620004  daddiu      $v0, $v1, 0x4
    ctx->pc = 0x221f2cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4);
    // 0x221f30: 0x21f78  dsll        $v1, $v0, 29
    ctx->pc = 0x221f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 29);
    // 0x221f34: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x221f34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x221f38: 0x306303ff  andi        $v1, $v1, 0x3FF
    ctx->pc = 0x221f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1023);
    // 0x221f3c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x221f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x221f40: 0x90a20080  lbu         $v0, 0x80($a1)
    ctx->pc = 0x221f40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x221f44: 0x3e00008  jr          $ra
    ctx->pc = 0x221F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221F44u;
        // 0x221f48: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221F4Cu;
    // 0x221f4c: 0x0  nop
    ctx->pc = 0x221f4cu;
    // NOP
    ctx->pc = 0x221f50u;
}
