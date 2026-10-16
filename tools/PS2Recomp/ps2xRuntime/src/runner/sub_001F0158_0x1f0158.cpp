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

// Function: sub_001F0158
// Address: 0x1f0158 - 0x1f0668
void sub_001F0158_0x1f0158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0158_0x1f0158");
#endif

    switch (ctx->pc) {
        case 0x1f018cu: goto label_1f018c;
        case 0x1f01f0u: goto label_1f01f0;
        case 0x1f01f8u: goto label_1f01f8;
        case 0x1f0204u: goto label_1f0204;
        case 0x1f0210u: goto label_1f0210;
        case 0x1f0228u: goto label_1f0228;
        case 0x1f0240u: goto label_1f0240;
        case 0x1f024cu: goto label_1f024c;
        case 0x1f025cu: goto label_1f025c;
        case 0x1f0268u: goto label_1f0268;
        case 0x1f0290u: goto label_1f0290;
        case 0x1f02acu: goto label_1f02ac;
        case 0x1f02bcu: goto label_1f02bc;
        case 0x1f02c8u: goto label_1f02c8;
        case 0x1f02d4u: goto label_1f02d4;
        case 0x1f02e8u: goto label_1f02e8;
        case 0x1f02f4u: goto label_1f02f4;
        case 0x1f0300u: goto label_1f0300;
        case 0x1f0310u: goto label_1f0310;
        case 0x1f0320u: goto label_1f0320;
        case 0x1f0338u: goto label_1f0338;
        case 0x1f0358u: goto label_1f0358;
        case 0x1f0388u: goto label_1f0388;
        case 0x1f0398u: goto label_1f0398;
        case 0x1f03acu: goto label_1f03ac;
        case 0x1f03b8u: goto label_1f03b8;
        case 0x1f03d4u: goto label_1f03d4;
        case 0x1f03e4u: goto label_1f03e4;
        case 0x1f0404u: goto label_1f0404;
        case 0x1f040cu: goto label_1f040c;
        case 0x1f0480u: goto label_1f0480;
        case 0x1f048cu: goto label_1f048c;
        case 0x1f0498u: goto label_1f0498;
        case 0x1f04a4u: goto label_1f04a4;
        case 0x1f04c0u: goto label_1f04c0;
        case 0x1f04e0u: goto label_1f04e0;
        case 0x1f0520u: goto label_1f0520;
        case 0x1f0530u: goto label_1f0530;
        case 0x1f0578u: goto label_1f0578;
        case 0x1f0588u: goto label_1f0588;
        case 0x1f05c8u: goto label_1f05c8;
        case 0x1f05d8u: goto label_1f05d8;
        case 0x1f05e8u: goto label_1f05e8;
        case 0x1f05f0u: goto label_1f05f0;
        case 0x1f05f8u: goto label_1f05f8;
        default: break;
    }

    ctx->pc = 0x1f0158u;

    // 0x1f0158: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f0158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1f015c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1f015cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1f0160: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1f0160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1f0164: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1f0164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1f0168: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1f0168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1f016c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1f016cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1f0170: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f0170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1f0174: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1f0174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1f0178: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1f0178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x1f017c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1f017cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x1f0180: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f0180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f0184: 0xc07bfea  jal         func_1EFFA8
    ctx->pc = 0x1F0184u;
    SET_GPR_U32(ctx, 31, 0x1F018Cu);
    ctx->pc = 0x1F0188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0184u;
    // 0x1f0188: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFFA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFFA8u, 0x1F0184u, 0x1F018Cu)) {
        return;
    }
    ctx->pc = 0x1F018Cu;
label_1f018c:
    // 0x1f018c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1f018cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1f0190: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1f0190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1f0194: 0x90834130  lbu         $v1, 0x4130($a0)
    ctx->pc = 0x1f0194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x6B4130u));
    // 0x1f0198: 0x8ca2e854  lw          $v0, -0x17AC($a1)
    ctx->pc = 0x1f0198u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E854u));
    // 0x1f019c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1f019cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1f01a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1f01a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1f01a4: 0xa0834130  sb          $v1, 0x4130($a0)
    ctx->pc = 0x1f01a4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B4130u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B4130u, _value); } while (0);
    // 0x1f01a8: 0xaca2e854  sw          $v0, -0x17AC($a1)
    ctx->pc = 0x1f01a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x33E854u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x33E854u, _value); } while (0);
    // 0x1f01ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F01ACu;
    {
        const bool branch_taken_0x1f01ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F01B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F01ACu;
        // 0x1f01b0: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f01ac) {
            ctx->pc = 0x1F01BCu;
            goto label_1f01bc;
        }
    }
    ctx->pc = 0x1F01B4u;
    // 0x1f01b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F01B4u;
    {
        const bool branch_taken_0x1f01b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F01B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F01B4u;
        // 0x1f01b8: 0xdc555120  ld          $s5, 0x5120($v0) (Delay Slot)
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 2), 20768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f01b4) {
            ctx->pc = 0x1F01C4u;
            goto label_1f01c4;
        }
    }
    ctx->pc = 0x1F01BCu;
label_1f01bc:
    // 0x1f01bc: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x1f01bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x1f01c0: 0xdc555290  ld          $s5, 0x5290($v0)
    ctx->pc = 0x1f01c0u;
    SET_GPR_U64(ctx, 21, FAST_READ64(0x735290u));
label_1f01c4:
    // 0x1f01c4: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1f01c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1f01c8: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1f01c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1f01cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f01ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f01d0: 0x2463ffde  addiu       $v1, $v1, -0x22
    ctx->pc = 0x1f01d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967262));
    // 0x1f01d4: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x1f01d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x1f01d8: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F01D8u;
    {
        const bool branch_taken_0x1f01d8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1F01DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F01D8u;
        // 0x1f01dc: 0xae830008  sw          $v1, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f01d8) {
            ctx->pc = 0x1F01E4u;
            goto label_1f01e4;
        }
    }
    ctx->pc = 0x1F01E0u;
    // 0x1f01e0: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x1f01e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
label_1f01e4:
    // 0x1f01e4: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x1f01e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1f01e8: 0xc079cee  jal         func_1E73B8
    ctx->pc = 0x1F01E8u;
    SET_GPR_U32(ctx, 31, 0x1F01F0u);
    ctx->pc = 0x1F01ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F01E8u;
    // 0x1f01ec: 0x3c10006b  lui         $s0, 0x6B (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73B8u, 0x1F01E8u, 0x1F01F0u)) {
        return;
    }
    ctx->pc = 0x1F01F0u;
label_1f01f0:
    // 0x1f01f0: 0xc079cfa  jal         func_1E73E8
    ctx->pc = 0x1F01F0u;
    SET_GPR_U32(ctx, 31, 0x1F01F8u);
    ctx->pc = 0x1F01F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F01F0u;
    // 0x1f01f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x1F01F0u, 0x1F01F8u)) {
        return;
    }
    ctx->pc = 0x1F01F8u;
label_1f01f8:
    // 0x1f01f8: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x1f01f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1f01fc: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F01FCu;
    SET_GPR_U32(ctx, 31, 0x1F0204u);
    ctx->pc = 0x1F0200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F01FCu;
    // 0x1f0200: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F01FCu, 0x1F0204u)) {
        return;
    }
    ctx->pc = 0x1F0204u;
label_1f0204:
    // 0x1f0204: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1f0204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1f0208: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F0208u;
    SET_GPR_U32(ctx, 31, 0x1F0210u);
    ctx->pc = 0x1F020Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0208u;
    // 0x1f020c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F0208u, 0x1F0210u)) {
        return;
    }
    ctx->pc = 0x1F0210u;
label_1f0210:
    // 0x1f0210: 0x3405e000  ori         $a1, $zero, 0xE000
    ctx->pc = 0x1f0210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x1f0214: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x1f0214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x1f0218: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1f0218u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1f021c: 0x52ab8  dsll        $a1, $a1, 10
    ctx->pc = 0x1f021cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 10);
    // 0x1f0220: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F0220u;
    SET_GPR_U32(ctx, 31, 0x1F0228u);
    ctx->pc = 0x1F0224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0220u;
    // 0x1f0224: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F0220u, 0x1F0228u)) {
        return;
    }
    ctx->pc = 0x1F0228u;
label_1f0228:
    // 0x1f0228: 0xde0234c0  ld          $v0, 0x34C0($s0)
    ctx->pc = 0x1f0228u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 13504)));
    // 0x1f022c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1f022cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f0230: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x1f0230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x1f0234: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x1f0234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1f0238: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F0238u;
    SET_GPR_U32(ctx, 31, 0x1F0240u);
    ctx->pc = 0x1F023Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0238u;
    // 0x1f023c: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F0238u, 0x1F0240u)) {
        return;
    }
    ctx->pc = 0x1F0240u;
label_1f0240:
    // 0x1f0240: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1f0240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1f0244: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F0244u;
    SET_GPR_U32(ctx, 31, 0x1F024Cu);
    ctx->pc = 0x1F0248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0244u;
    // 0x1f0248: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F0244u, 0x1F024Cu)) {
        return;
    }
    ctx->pc = 0x1F024Cu;
label_1f024c:
    // 0x1f024c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1f024cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1f0250: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x1f0250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x1f0254: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F0254u;
    SET_GPR_U32(ctx, 31, 0x1F025Cu);
    ctx->pc = 0x1F0258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0254u;
    // 0x1f0258: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F0254u, 0x1F025Cu)) {
        return;
    }
    ctx->pc = 0x1F025Cu;
label_1f025c:
    // 0x1f025c: 0x24050261  addiu       $a1, $zero, 0x261
    ctx->pc = 0x1f025cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 609));
    // 0x1f0260: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F0260u;
    SET_GPR_U32(ctx, 31, 0x1F0268u);
    ctx->pc = 0x1F0264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0260u;
    // 0x1f0264: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F0260u, 0x1F0268u)) {
        return;
    }
    ctx->pc = 0x1F0268u;
label_1f0268:
    // 0x1f0268: 0xde0534c0  ld          $a1, 0x34C0($s0)
    ctx->pc = 0x1f0268u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 13504)));
    // 0x1f026c: 0x34029900  ori         $v0, $zero, 0x9900
    ctx->pc = 0x1f026cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39168);
    // 0x1f0270: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1f0270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1f0274: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1f0274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1f0278: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x1f0278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x1f027c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1f027cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f0280: 0x30a501ff  andi        $a1, $a1, 0x1FF
    ctx->pc = 0x1f0280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)511);
    // 0x1f0284: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x1f0284u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x1f0288: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F0288u;
    SET_GPR_U32(ctx, 31, 0x1F0290u);
    ctx->pc = 0x1F028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0288u;
    // 0x1f028c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F0288u, 0x1F0290u)) {
        return;
    }
    ctx->pc = 0x1F0290u;
label_1f0290:
    // 0x1f0290: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x1f0290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1f0294: 0x240200a8  addiu       $v0, $zero, 0xA8
    ctx->pc = 0x1f0294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x1f0298: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1f0298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1f029c: 0x5293b  dsra        $a1, $a1, 4
    ctx->pc = 0x1f029cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 4);
    // 0x1f02a0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1f02a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1f02a4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F02A4u;
    SET_GPR_U32(ctx, 31, 0x1F02ACu);
    ctx->pc = 0x1F02A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F02A4u;
    // 0x1f02a8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F02A4u, 0x1F02ACu)) {
        return;
    }
    ctx->pc = 0x1F02ACu;
label_1f02ac:
    // 0x1f02ac: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1f02acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1f02b0: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x1f02b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x1f02b4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F02B4u;
    SET_GPR_U32(ctx, 31, 0x1F02BCu);
    ctx->pc = 0x1F02B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F02B4u;
    // 0x1f02b8: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F02B4u, 0x1F02BCu)) {
        return;
    }
    ctx->pc = 0x1F02BCu;
label_1f02bc:
    // 0x1f02bc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1f02bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1f02c0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F02C0u;
    SET_GPR_U32(ctx, 31, 0x1F02C8u);
    ctx->pc = 0x1F02C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F02C0u;
    // 0x1f02c4: 0x24050241  addiu       $a1, $zero, 0x241 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 577));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F02C0u, 0x1F02C8u)) {
        return;
    }
    ctx->pc = 0x1F02C8u;
label_1f02c8:
    // 0x1f02c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f02c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f02cc: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F02CCu;
    SET_GPR_U32(ctx, 31, 0x1F02D4u);
    ctx->pc = 0x1F02D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F02CCu;
    // 0x1f02d0: 0x24050156  addiu       $a1, $zero, 0x156 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F02CCu, 0x1F02D4u)) {
        return;
    }
    ctx->pc = 0x1F02D4u;
label_1f02d4:
    // 0x1f02d4: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x1f02d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x1f02d8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1f02d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1f02dc: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x1f02dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x1f02e0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F02E0u;
    SET_GPR_U32(ctx, 31, 0x1F02E8u);
    ctx->pc = 0x1F02E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F02E0u;
    // 0x1f02e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F02E0u, 0x1F02E8u)) {
        return;
    }
    ctx->pc = 0x1F02E8u;
label_1f02e8:
    // 0x1f02e8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f02e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f02ec: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F02ECu;
    SET_GPR_U32(ctx, 31, 0x1F02F4u);
    ctx->pc = 0x1F02F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F02ECu;
    // 0x1f02f0: 0x3c050007  lui         $a1, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F02ECu, 0x1F02F4u)) {
        return;
    }
    ctx->pc = 0x1F02F4u;
label_1f02f4:
    // 0x1f02f4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1f02f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f02f8: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F02F8u;
    SET_GPR_U32(ctx, 31, 0x1F0300u);
    ctx->pc = 0x1F02FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F02F8u;
    // 0x1f02fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F02F8u, 0x1F0300u)) {
        return;
    }
    ctx->pc = 0x1F0300u;
label_1f0300:
    // 0x1f0300: 0x3c051c07  lui         $a1, 0x1C07
    ctx->pc = 0x1f0300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7175 << 16));
    // 0x1f0304: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x1f0304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x1f0308: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F0308u;
    SET_GPR_U32(ctx, 31, 0x1F0310u);
    ctx->pc = 0x1F030Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0308u;
    // 0x1f030c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F0308u, 0x1F0310u)) {
        return;
    }
    ctx->pc = 0x1F0310u;
label_1f0310:
    // 0x1f0310: 0x3c051c00  lui         $a1, 0x1C00
    ctx->pc = 0x1f0310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7168 << 16));
    // 0x1f0314: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x1f0314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x1f0318: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F0318u;
    SET_GPR_U32(ctx, 31, 0x1F0320u);
    ctx->pc = 0x1F031Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0318u;
    // 0x1f031c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F0318u, 0x1F0320u)) {
        return;
    }
    ctx->pc = 0x1F0320u;
label_1f0320:
    // 0x1f0320: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x1f0320u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1f0324: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f0324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f0328: 0x16620036  bne         $s3, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1F0328u;
    {
        const bool branch_taken_0x1f0328 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f0328) {
            ctx->pc = 0x1F0404u;
            goto label_1f0404;
        }
    }
    ctx->pc = 0x1F0330u;
    // 0x1f0330: 0xc0a074a  jal         func_281D28
    ctx->pc = 0x1F0330u;
    SET_GPR_U32(ctx, 31, 0x1F0338u);
    ctx->pc = 0x1F0334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0330u;
    // 0x1f0334: 0x24120029  addiu       $s2, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x1F0330u, 0x1F0338u)) {
        return;
    }
    ctx->pc = 0x1F0338u;
label_1f0338:
    // 0x1f0338: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x1f0338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x1f033c: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x1f033cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f0340: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x1f0340u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x1f0344: 0x421818  mult        $v1, $v0, $v0
    ctx->pc = 0x1f0344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f0348: 0x31283  sra         $v0, $v1, 10
    ctx->pc = 0x1f0348u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 10));
    // 0x1f034c: 0x528018  mult        $s0, $v0, $s2
    ctx->pc = 0x1f034cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1f0350: 0xc0a074a  jal         func_281D28
    ctx->pc = 0x1F0350u;
    SET_GPR_U32(ctx, 31, 0x1F0358u);
    ctx->pc = 0x1F0354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0350u;
    // 0x1f0354: 0x108283  sra         $s0, $s0, 10 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x1F0350u, 0x1F0358u)) {
        return;
    }
    ctx->pc = 0x1F0358u;
label_1f0358:
    // 0x1f0358: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x1f0358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x1f035c: 0x241101c0  addiu       $s1, $zero, 0x1C0
    ctx->pc = 0x1f035cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1f0360: 0x421818  mult        $v1, $v0, $v0
    ctx->pc = 0x1f0360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f0364: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1f0364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1f0368: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x1f0368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1f036c: 0x31283  sra         $v0, $v1, 10
    ctx->pc = 0x1f036cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 10));
    // 0x1f0370: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x1f0370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f0374: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x1f0374u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x1f0378: 0x529018  mult        $s2, $v0, $s2
    ctx->pc = 0x1f0378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x1f037c: 0x129283  sra         $s2, $s2, 10
    ctx->pc = 0x1f037cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 10));
    // 0x1f0380: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F0380u;
    SET_GPR_U32(ctx, 31, 0x1F0388u);
    ctx->pc = 0x1F0384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0380u;
    // 0x1f0384: 0x2328823  subu        $s1, $s1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F0380u, 0x1F0388u)) {
        return;
    }
    ctx->pc = 0x1F0388u;
label_1f0388:
    // 0x1f0388: 0x3c055080  lui         $a1, 0x5080
    ctx->pc = 0x1f0388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20608 << 16));
    // 0x1f038c: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x1f038cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x1f0390: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F0390u;
    SET_GPR_U32(ctx, 31, 0x1F0398u);
    ctx->pc = 0x1F0394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0390u;
    // 0x1f0394: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F0390u, 0x1F0398u)) {
        return;
    }
    ctx->pc = 0x1F0398u;
label_1f0398:
    // 0x1f0398: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1f0398u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1f039c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f039cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f03a0: 0x26100007  addiu       $s0, $s0, 0x7
    ctx->pc = 0x1f03a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x1f03a4: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F03A4u;
    SET_GPR_U32(ctx, 31, 0x1F03ACu);
    ctx->pc = 0x1F03A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F03A4u;
    // 0x1f03a8: 0x102c38  dsll        $a1, $s0, 16 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << 16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F03A4u, 0x1F03ACu)) {
        return;
    }
    ctx->pc = 0x1F03ACu;
label_1f03ac:
    // 0x1f03ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f03acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f03b0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F03B0u;
    SET_GPR_U32(ctx, 31, 0x1F03B8u);
    ctx->pc = 0x1F03B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F03B0u;
    // 0x1f03b4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F03B0u, 0x1F03B8u)) {
        return;
    }
    ctx->pc = 0x1F03B8u;
label_1f03b8:
    // 0x1f03b8: 0x118900  sll         $s1, $s1, 4
    ctx->pc = 0x1f03b8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1f03bc: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x1f03bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1f03c0: 0x26310007  addiu       $s1, $s1, 0x7
    ctx->pc = 0x1f03c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7));
    // 0x1f03c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f03c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f03c8: 0x118c38  dsll        $s1, $s1, 16
    ctx->pc = 0x1f03c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 16);
    // 0x1f03cc: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F03CCu;
    SET_GPR_U32(ctx, 31, 0x1F03D4u);
    ctx->pc = 0x1F03D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F03CCu;
    // 0x1f03d0: 0x2252825  or          $a1, $s1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F03CCu, 0x1F03D4u)) {
        return;
    }
    ctx->pc = 0x1F03D4u;
label_1f03d4:
    // 0x1f03d4: 0x3c051c00  lui         $a1, 0x1C00
    ctx->pc = 0x1f03d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7168 << 16));
    // 0x1f03d8: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x1f03d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x1f03dc: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F03DCu;
    SET_GPR_U32(ctx, 31, 0x1F03E4u);
    ctx->pc = 0x1F03E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F03DCu;
    // 0x1f03e0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F03DCu, 0x1F03E4u)) {
        return;
    }
    ctx->pc = 0x1F03E4u;
label_1f03e4:
    // 0x1f03e4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1f03e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1f03e8: 0x14530006  bne         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F03E8u;
    {
        const bool branch_taken_0x1f03e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1f03e8) {
            ctx->pc = 0x1F0404u;
            goto label_1f0404;
        }
    }
    ctx->pc = 0x1F03F0u;
    // 0x1f03f0: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x1f03f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1f03f4: 0x24420333  addiu       $v0, $v0, 0x333
    ctx->pc = 0x1f03f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 819));
    // 0x1f03f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f03f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f03fc: 0xc079222  jal         func_1E4888
    ctx->pc = 0x1F03FCu;
    SET_GPR_U32(ctx, 31, 0x1F0404u);
    ctx->pc = 0x1F0400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F03FCu;
    // 0x1f0400: 0xae820020  sw          $v0, 0x20($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4888u, 0x1F03FCu, 0x1F0404u)) {
        return;
    }
    ctx->pc = 0x1F0404u;
label_1f0404:
    // 0x1f0404: 0xc0791e8  jal         func_1E47A0
    ctx->pc = 0x1F0404u;
    SET_GPR_U32(ctx, 31, 0x1F040Cu);
    ctx->pc = 0x1F0408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0404u;
    // 0x1f0408: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E47A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E47A0u, 0x1F0404u, 0x1F040Cu)) {
        return;
    }
    ctx->pc = 0x1F040Cu;
label_1f040c:
    // 0x1f040c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1f040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1f0410: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1f0410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1f0414: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x1F0414u;
    {
        const bool branch_taken_0x1f0414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0414u;
        // 0x1f0418: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0414) {
            ctx->pc = 0x1F05E0u;
            goto label_1f05e0;
        }
    }
    ctx->pc = 0x1F041Cu;
    // 0x1f041c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1f041cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1f0420: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F0420u;
    {
        const bool branch_taken_0x1f0420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0420) {
            ctx->pc = 0x1F0424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0420u;
            // 0x1f0424: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0428u;
            goto label_1f0428;
        }
    }
    ctx->pc = 0x1F0428u;
label_1f0428:
    // 0x1f0428: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f0428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f042c: 0x2473ff4c  addiu       $s3, $v1, -0xB4
    ctx->pc = 0x1f042cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967116));
    // 0x1f0430: 0x9e870028  lwu         $a3, 0x28($s4)
    ctx->pc = 0x1f0430u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1f0434: 0x131a00  sll         $v1, $s3, 8
    ctx->pc = 0x1f0434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
    // 0x1f0438: 0x9e850024  lwu         $a1, 0x24($s4)
    ctx->pc = 0x1f0438u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1f043c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1f043cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1f0440: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1f0440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f0444: 0x2682002e  addiu       $v0, $s4, 0x2E
    ctx->pc = 0x1f0444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 46));
    // 0x1f0448: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1f0448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1f044c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1f044cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1f0450: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x1f0450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x1f0454: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1f0454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f0458: 0x269e0030  addiu       $fp, $s4, 0x30
    ctx->pc = 0x1f0458u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x1f045c: 0x26970038  addiu       $s7, $s4, 0x38
    ctx->pc = 0x1f045cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
    // 0x1f0460: 0x2415000b  addiu       $s5, $zero, 0xB
    ctx->pc = 0x1f0460u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1f0464: 0x1812  mflo        $v1
    ctx->pc = 0x1f0464u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1f0468: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1f0468u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f046c: 0x2a620101  slti        $v0, $s3, 0x101
    ctx->pc = 0x1f046cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x1f0470: 0x102980a  movz        $s3, $t0, $v0
    ctx->pc = 0x1f0470u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 8));
    // 0x1f0474: 0xd3302a  slt         $a2, $a2, $s3
    ctx->pc = 0x1f0474u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1f0478: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F0478u;
    SET_GPR_U32(ctx, 31, 0x1F0480u);
    ctx->pc = 0x1F047Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0478u;
    // 0x1f047c: 0x6980a  movz        $s3, $zero, $a2 (Delay Slot)
    if (GPR_U64(ctx, 6) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F0478u, 0x1F0480u)) {
        return;
    }
    ctx->pc = 0x1F0480u;
label_1f0480:
    // 0x1f0480: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1f0480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f0484: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F0484u;
    SET_GPR_U32(ctx, 31, 0x1F048Cu);
    ctx->pc = 0x1F0488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0484u;
    // 0x1f0488: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F0484u, 0x1F048Cu)) {
        return;
    }
    ctx->pc = 0x1F048Cu;
label_1f048c:
    // 0x1f048c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f048cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0490: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F0490u;
    SET_GPR_U32(ctx, 31, 0x1F0498u);
    ctx->pc = 0x1F0494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0490u;
    // 0x1f0494: 0x240501d3  addiu       $a1, $zero, 0x1D3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 467));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F0490u, 0x1F0498u)) {
        return;
    }
    ctx->pc = 0x1F0498u;
label_1f0498:
    // 0x1f0498: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1f0498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1f049c: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F049Cu;
    SET_GPR_U32(ctx, 31, 0x1F04A4u);
    ctx->pc = 0x1F04A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F049Cu;
    // 0x1f04a0: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F049Cu, 0x1F04A4u)) {
        return;
    }
    ctx->pc = 0x1F04A4u;
label_1f04a4:
    // 0x1f04a4: 0x132843  sra         $a1, $s3, 1
    ctx->pc = 0x1f04a4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 19), 1));
    // 0x1f04a8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1f04a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1f04ac: 0x34424040  ori         $v0, $v0, 0x4040
    ctx->pc = 0x1f04acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x1f04b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f04b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f04b4: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x1f04b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x1f04b8: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F04B8u;
    SET_GPR_U32(ctx, 31, 0x1F04C0u);
    ctx->pc = 0x1F04BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F04B8u;
    // 0x1f04bc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F04B8u, 0x1F04C0u)) {
        return;
    }
    ctx->pc = 0x1F04C0u;
label_1f04c0:
    // 0x1f04c0: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1f04c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1f04c4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1f04c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1f04c8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f04c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1f04cc: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x1f04ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
    // 0x1f04d0: 0x2452e890  addiu       $s2, $v0, -0x1770
    ctx->pc = 0x1f04d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
    // 0x1f04d4: 0x64b018  mult        $s6, $v1, $a0
    ctx->pc = 0x1f04d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
    // 0x1f04d8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f04d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f04dc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1f04dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1f04e0:
    // 0x1f04e0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f04e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f04e4: 0x96450002  lhu         $a1, 0x2($s2)
    ctx->pc = 0x1f04e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1f04e8: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1f04e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1f04ec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1f04ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1f04f0: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x1f04f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f04f4: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1f04f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1f04f8: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x1f04f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
    // 0x1f04fc: 0x2e23021  addu        $a2, $s7, $v0
    ctx->pc = 0x1f04fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1f0500: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x1f0500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x1f0504: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1f0504u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1f0508: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1f0508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1f050c: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x1f050cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1f0510: 0x94510000  lhu         $s1, 0x0($v0)
    ctx->pc = 0x1f0510u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f0514: 0x94d00000  lhu         $s0, 0x0($a2)
    ctx->pc = 0x1f0514u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f0518: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F0518u;
    SET_GPR_U32(ctx, 31, 0x1F0520u);
    ctx->pc = 0x1F051Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0518u;
    // 0x1f051c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F0518u, 0x1F0520u)) {
        return;
    }
    ctx->pc = 0x1F0520u;
label_1f0520:
    // 0x1f0520: 0x108438  dsll        $s0, $s0, 16
    ctx->pc = 0x1f0520u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 16);
    // 0x1f0524: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1f0524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f0528: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F0528u;
    SET_GPR_U32(ctx, 31, 0x1F0530u);
    ctx->pc = 0x1F052Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0528u;
    // 0x1f052c: 0x2302825  or          $a1, $s1, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F0528u, 0x1F0530u)) {
        return;
    }
    ctx->pc = 0x1F0530u;
label_1f0530:
    // 0x1f0530: 0x6a3ffeb  bgezl       $s5, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1F0530u;
    {
        const bool branch_taken_0x1f0530 = (GPR_S64(ctx, 21) >= 0);
        if (branch_taken_0x1f0530) {
            ctx->pc = 0x1F0534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0530u;
            // 0x1f0534: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F04E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f04e0;
        }
    }
    ctx->pc = 0x1F0538u;
    // 0x1f0538: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1f0538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f053c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1f053cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1f0540: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1f0540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f0544: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1f0544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1f0548: 0x34634040  ori         $v1, $v1, 0x4040
    ctx->pc = 0x1f0548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16448);
    // 0x1f054c: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x1f054cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f0550: 0x2415000b  addiu       $s5, $zero, 0xB
    ctx->pc = 0x1f0550u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1f0554: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f0554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0558: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1f0558u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f055c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1f055cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f0560: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x1f0560u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f0564: 0xb32818  mult        $a1, $a1, $s3
    ctx->pc = 0x1f0564u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1f0568: 0x52a43  sra         $a1, $a1, 9
    ctx->pc = 0x1f0568u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 9));
    // 0x1f056c: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x1f056cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x1f0570: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F0570u;
    SET_GPR_U32(ctx, 31, 0x1F0578u);
    ctx->pc = 0x1F0574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0570u;
    // 0x1f0574: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F0570u, 0x1F0578u)) {
        return;
    }
    ctx->pc = 0x1F0578u;
label_1f0578:
    // 0x1f0578: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f0578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1f057c: 0x2452e8f0  addiu       $s2, $v0, -0x1710
    ctx->pc = 0x1f057cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961392));
    // 0x1f0580: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1f0580u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E8F4u));
    // 0x1f0584: 0x0  nop
    ctx->pc = 0x1f0584u;
    // NOP
label_1f0588:
    // 0x1f0588: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f0588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f058c: 0x96450002  lhu         $a1, 0x2($s2)
    ctx->pc = 0x1f058cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1f0590: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x1f0590u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1f0594: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1f0594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1f0598: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x1f0598u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f059c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1f059cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1f05a0: 0x5293a  dsrl        $a1, $a1, 4
    ctx->pc = 0x1f05a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 4);
    // 0x1f05a4: 0x2e23021  addu        $a2, $s7, $v0
    ctx->pc = 0x1f05a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1f05a8: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x1f05a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
    // 0x1f05ac: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1f05acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1f05b0: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1f05b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1f05b4: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x1f05b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1f05b8: 0x94510000  lhu         $s1, 0x0($v0)
    ctx->pc = 0x1f05b8u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f05bc: 0x94d00000  lhu         $s0, 0x0($a2)
    ctx->pc = 0x1f05bcu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f05c0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F05C0u;
    SET_GPR_U32(ctx, 31, 0x1F05C8u);
    ctx->pc = 0x1F05C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F05C0u;
    // 0x1f05c4: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F05C0u, 0x1F05C8u)) {
        return;
    }
    ctx->pc = 0x1F05C8u;
label_1f05c8:
    // 0x1f05c8: 0x108438  dsll        $s0, $s0, 16
    ctx->pc = 0x1f05c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 16);
    // 0x1f05cc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1f05ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f05d0: 0xc079d0e  jal         func_1E7438
    ctx->pc = 0x1F05D0u;
    SET_GPR_U32(ctx, 31, 0x1F05D8u);
    ctx->pc = 0x1F05D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F05D0u;
    // 0x1f05d4: 0x2302825  or          $a1, $s1, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F05D0u, 0x1F05D8u)) {
        return;
    }
    ctx->pc = 0x1F05D8u;
label_1f05d8:
    // 0x1f05d8: 0x6a3ffeb  bgezl       $s5, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1F05D8u;
    {
        const bool branch_taken_0x1f05d8 = (GPR_S64(ctx, 21) >= 0);
        if (branch_taken_0x1f05d8) {
            ctx->pc = 0x1F05DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F05D8u;
            // 0x1f05dc: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0588;
        }
    }
    ctx->pc = 0x1F05E0u;
label_1f05e0:
    // 0x1f05e0: 0xc079ca0  jal         func_1E7280
    ctx->pc = 0x1F05E0u;
    SET_GPR_U32(ctx, 31, 0x1F05E8u);
    ctx->pc = 0x1F05E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F05E0u;
    // 0x1f05e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1F05E0u, 0x1F05E8u)) {
        return;
    }
    ctx->pc = 0x1F05E8u;
label_1f05e8:
    // 0x1f05e8: 0xc079cf4  jal         func_1E73D0
    ctx->pc = 0x1F05E8u;
    SET_GPR_U32(ctx, 31, 0x1F05F0u);
    ctx->pc = 0x1E73D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73D0u, 0x1F05E8u, 0x1F05F0u)) {
        return;
    }
    ctx->pc = 0x1F05F0u;
label_1f05f0:
    // 0x1f05f0: 0xc0c8574  jal         func_3215D0
    ctx->pc = 0x1F05F0u;
    SET_GPR_U32(ctx, 31, 0x1F05F8u);
    ctx->pc = 0x1F05F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F05F0u;
    // 0x1f05f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3215D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3215D0u, 0x1F05F0u, 0x1F05F8u)) {
        return;
    }
    ctx->pc = 0x1F05F8u;
label_1f05f8:
    // 0x1f05f8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1f05f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1f05fc: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x1f05fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1f0600: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x1f0600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x1f0604: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f0604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f0608: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1f0608u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 4)); // MMIO: 0x1000e010
    // 0x1f060c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1f060cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1f0610: 0x34429020  ori         $v0, $v0, 0x9020
    ctx->pc = 0x1f0610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36896);
    // 0x1f0614: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1f0614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1f0618: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f0618u;
    runtime->Store32(rdram, ctx, 0x10009020u, GPR_U32(ctx, 0)); // MMIO: 0x10009020
    // 0x1f061c: 0x34639030  ori         $v1, $v1, 0x9030
    ctx->pc = 0x1f061cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36912);
    // 0x1f0620: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1f0620u;
    runtime->Store32(rdram, ctx, 0x10009030u, GPR_U32(ctx, 5)); // MMIO: 0x10009030
    // 0x1f0624: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1f0624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1f0628: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1f0628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1f062c: 0x24030145  addiu       $v1, $zero, 0x145
    ctx->pc = 0x1f062cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
    // 0x1f0630: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f0630u;
    runtime->Store32(rdram, ctx, 0x10009000u, GPR_U32(ctx, 3)); // MMIO: 0x10009000
    // 0x1f0634: 0xf  sync
    ctx->pc = 0x1f0634u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1f0638: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1f0638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f063c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1f063cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f0640: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1f0640u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f0644: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1f0644u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f0648: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1f0648u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f064c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f064cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f0650: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1f0650u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f0654: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1f0654u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f0658: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1f0658u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f065c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f065cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0660: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0660u;
        // 0x1f0664: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0668u;
}
