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

// Function: sub_00211010
// Address: 0x211010 - 0x211300
void sub_00211010_0x211010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211010_0x211010");
#endif

    switch (ctx->pc) {
        case 0x2110a8u: goto label_2110a8;
        case 0x2110d4u: goto label_2110d4;
        case 0x21110cu: goto label_21110c;
        case 0x211150u: goto label_211150;
        case 0x211180u: goto label_211180;
        case 0x2111a8u: goto label_2111a8;
        case 0x2111d8u: goto label_2111d8;
        case 0x211200u: goto label_211200;
        case 0x211220u: goto label_211220;
        case 0x211248u: goto label_211248;
        case 0x211290u: goto label_211290;
        default: break;
    }

    ctx->pc = 0x211010u;

    // 0x211010: 0x27bdf730  addiu       $sp, $sp, -0x8D0
    ctx->pc = 0x211010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965040));
    // 0x211014: 0x7fb60860  sq          $s6, 0x860($sp)
    ctx->pc = 0x211014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 22));
    // 0x211018: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x211018u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21101c: 0x7fb30890  sq          $s3, 0x890($sp)
    ctx->pc = 0x21101cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 19));
    // 0x211020: 0x26c20018  addiu       $v0, $s6, 0x18
    ctx->pc = 0x211020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
    // 0x211024: 0x7fb40880  sq          $s4, 0x880($sp)
    ctx->pc = 0x211024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 20));
    // 0x211028: 0x7fb50870  sq          $s5, 0x870($sp)
    ctx->pc = 0x211028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 21));
    // 0x21102c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x21102cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211030: 0x7fb70850  sq          $s7, 0x850($sp)
    ctx->pc = 0x211030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 23));
    // 0x211034: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x211034u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211038: 0x7fbe0840  sq          $fp, 0x840($sp)
    ctx->pc = 0x211038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 30));
    // 0x21103c: 0x26970018  addiu       $s7, $s4, 0x18
    ctx->pc = 0x21103cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x211040: 0xafa20808  sw          $v0, 0x808($sp)
    ctx->pc = 0x211040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2056), GPR_U32(ctx, 2));
    // 0x211044: 0x26be001c  addiu       $fp, $s5, 0x1C
    ctx->pc = 0x211044u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
    // 0x211048: 0x7fb008c0  sq          $s0, 0x8C0($sp)
    ctx->pc = 0x211048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2240), GPR_VEC(ctx, 16));
    // 0x21104c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x21104cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x211050: 0x7fb108b0  sq          $s1, 0x8B0($sp)
    ctx->pc = 0x211050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2224), GPR_VEC(ctx, 17));
    // 0x211054: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x211054u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x211058: 0x7fb208a0  sq          $s2, 0x8A0($sp)
    ctx->pc = 0x211058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 18));
    // 0x21105c: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x21105cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x211060: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x211060u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x211064: 0xffbf0830  sd          $ra, 0x830($sp)
    ctx->pc = 0x211064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2096), GPR_U64(ctx, 31));
    // 0x211068: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x211068u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21106c: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x21106cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x211070: 0xafa2080c  sw          $v0, 0x80C($sp)
    ctx->pc = 0x211070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2060), GPR_U32(ctx, 2));
    // 0x211074: 0x2971021  addu        $v0, $s4, $s7
    ctx->pc = 0x211074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
    // 0x211078: 0xafa30804  sw          $v1, 0x804($sp)
    ctx->pc = 0x211078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2052), GPR_U32(ctx, 3));
    // 0x21107c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x21107cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x211080: 0x2be1821  addu        $v1, $s5, $fp
    ctx->pc = 0x211080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
    // 0x211084: 0xafa20814  sw          $v0, 0x814($sp)
    ctx->pc = 0x211084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2068), GPR_U32(ctx, 2));
    // 0x211088: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x211088u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x21108c: 0x8fa20804  lw          $v0, 0x804($sp)
    ctx->pc = 0x21108cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2052)));
    // 0x211090: 0xafa30810  sw          $v1, 0x810($sp)
    ctx->pc = 0x211090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2064), GPR_U32(ctx, 3));
    // 0x211094: 0xafa80800  sw          $t0, 0x800($sp)
    ctx->pc = 0x211094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2048), GPR_U32(ctx, 8));
    // 0x211098: 0x18400078  blez        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x211098u;
    {
        const bool branch_taken_0x211098 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211098u;
        // 0x21109c: 0xffa50818  sd          $a1, 0x818($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 2072), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211098) {
            ctx->pc = 0x21127Cu;
            goto label_21127c;
        }
    }
    ctx->pc = 0x2110A0u;
    // 0x2110a0: 0x8c840088  lw          $a0, 0x88($a0)
    ctx->pc = 0x2110a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2110a4: 0xafa40820  sw          $a0, 0x820($sp)
    ctx->pc = 0x2110a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2080), GPR_U32(ctx, 4));
label_2110a8:
    // 0x2110a8: 0x8fa30820  lw          $v1, 0x820($sp)
    ctx->pc = 0x2110a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2080)));
    // 0x2110ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2110acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2110b0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2110b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2110b4: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x2110b4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2110b8: 0x216182a  slt         $v1, $s0, $s6
    ctx->pc = 0x2110b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2110bc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2110BCu;
    {
        const bool branch_taken_0x2110bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2110C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110BCu;
        // 0x2110c0: 0x2161023  subu        $v0, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2110bc) {
            ctx->pc = 0x2110ECu;
            goto label_2110ec;
        }
    }
    ctx->pc = 0x2110C4u;
    // 0x2110c4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2110c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2110c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2110c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2110cc: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x2110CCu;
    SET_GPR_U32(ctx, 31, 0x2110D4u);
    ctx->pc = 0x2110D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2110CCu;
    // 0x2110d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x2110CCu, 0x2110D4u)) {
        return;
    }
    ctx->pc = 0x2110D4u;
label_2110d4:
    // 0x2110d4: 0x8fa40808  lw          $a0, 0x808($sp)
    ctx->pc = 0x2110d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2056)));
    // 0x2110d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2110d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2110dc: 0x2041823  subu        $v1, $s0, $a0
    ctx->pc = 0x2110dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2110e0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2110e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2110e4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2110E4u;
    {
        const bool branch_taken_0x2110e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2110E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110E4u;
        // 0x2110e8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2110e4) {
            ctx->pc = 0x211148u;
            goto label_211148;
        }
    }
    ctx->pc = 0x2110ECu;
label_2110ec:
    // 0x2110ec: 0x8fa50808  lw          $a1, 0x808($sp)
    ctx->pc = 0x2110ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2056)));
    // 0x2110f0: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x2110f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2110f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2110F4u;
    {
        const bool branch_taken_0x2110f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2110F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2110F4u;
        // 0x2110f8: 0x2051023  subu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2110f4) {
            ctx->pc = 0x211120u;
            goto label_211120;
        }
    }
    ctx->pc = 0x2110FCu;
    // 0x2110fc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2110fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x211100: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211104: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x211104u;
    SET_GPR_U32(ctx, 31, 0x21110Cu);
    ctx->pc = 0x211108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211104u;
    // 0x211108: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x211104u, 0x21110Cu)) {
        return;
    }
    ctx->pc = 0x21110Cu;
label_21110c:
    // 0x21110c: 0x2161823  subu        $v1, $s0, $s6
    ctx->pc = 0x21110cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x211110: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x211110u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211114: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x211114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x211118: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x211118u;
    {
        const bool branch_taken_0x211118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211118u;
        // 0x21111c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211118) {
            ctx->pc = 0x211148u;
            goto label_211148;
        }
    }
    ctx->pc = 0x211120u;
label_211120:
    // 0x211120: 0x8fa3080c  lw          $v1, 0x80C($sp)
    ctx->pc = 0x211120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2060)));
    // 0x211124: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x211124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x211128: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x211128u;
    {
        const bool branch_taken_0x211128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211128u;
        // 0x21112c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211128) {
            ctx->pc = 0x21113Cu;
            goto label_21113c;
        }
    }
    ctx->pc = 0x211130u;
    // 0x211130: 0x8fa40808  lw          $a0, 0x808($sp)
    ctx->pc = 0x211130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2056)));
    // 0x211134: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x211134u;
    {
        const bool branch_taken_0x211134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211134u;
        // 0x211138: 0x2041023  subu        $v0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211134) {
            ctx->pc = 0x211140u;
            goto label_211140;
        }
    }
    ctx->pc = 0x21113Cu;
label_21113c:
    // 0x21113c: 0x2161023  subu        $v0, $s0, $s6
    ctx->pc = 0x21113cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
label_211140:
    // 0x211140: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x211140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x211144: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x211144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_211148:
    // 0x211148: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x211148u;
    SET_GPR_U32(ctx, 31, 0x211150u);
    ctx->pc = 0x21114Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211148u;
    // 0x21114c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x211148u, 0x211150u)) {
        return;
    }
    ctx->pc = 0x211150u;
label_211150:
    // 0x211150: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x211150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211154: 0x8fa50820  lw          $a1, 0x820($sp)
    ctx->pc = 0x211154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2080)));
    // 0x211158: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x211158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21115c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x21115cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x211160: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x211160u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x211164: 0x215182a  slt         $v1, $s0, $s5
    ctx->pc = 0x211164u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x211168: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x211168u;
    {
        const bool branch_taken_0x211168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211168u;
        // 0x21116c: 0x2151823  subu        $v1, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211168) {
            ctx->pc = 0x21118Cu;
            goto label_21118c;
        }
    }
    ctx->pc = 0x211170u;
    // 0x211170: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x211170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x211174: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x211174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x211178: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x211178u;
    SET_GPR_U32(ctx, 31, 0x211180u);
    ctx->pc = 0x21117Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211178u;
    // 0x21117c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x211178u, 0x211180u)) {
        return;
    }
    ctx->pc = 0x211180u;
label_211180:
    // 0x211180: 0x21e1823  subu        $v1, $s0, $fp
    ctx->pc = 0x211180u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x211184: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x211184u;
    {
        const bool branch_taken_0x211184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211184u;
        // 0x211188: 0x242902d  daddu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211184) {
            ctx->pc = 0x2111C8u;
            goto label_2111c8;
        }
    }
    ctx->pc = 0x21118Cu;
label_21118c:
    // 0x21118c: 0x3d0102a  slt         $v0, $fp, $s0
    ctx->pc = 0x21118cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x211190: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x211190u;
    {
        const bool branch_taken_0x211190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211190u;
        // 0x211194: 0x21e1823  subu        $v1, $s0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211190) {
            ctx->pc = 0x2111B4u;
            goto label_2111b4;
        }
    }
    ctx->pc = 0x211198u;
    // 0x211198: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x211198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x21119c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x21119cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2111a0: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x2111A0u;
    SET_GPR_U32(ctx, 31, 0x2111A8u);
    ctx->pc = 0x2111A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2111A0u;
    // 0x2111a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x2111A0u, 0x2111A8u)) {
        return;
    }
    ctx->pc = 0x2111A8u;
label_2111a8:
    // 0x2111a8: 0x2151823  subu        $v1, $s0, $s5
    ctx->pc = 0x2111a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x2111ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2111ACu;
    {
        const bool branch_taken_0x2111ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2111B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111ACu;
        // 0x2111b0: 0x242902d  daddu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2111ac) {
            ctx->pc = 0x2111C8u;
            goto label_2111c8;
        }
    }
    ctx->pc = 0x2111B4u;
label_2111b4:
    // 0x2111b4: 0x8fa30810  lw          $v1, 0x810($sp)
    ctx->pc = 0x2111b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2064)));
    // 0x2111b8: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x2111b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2111bc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2111BCu;
    {
        const bool branch_taken_0x2111bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2111C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111BCu;
        // 0x2111c0: 0x2151823  subu        $v1, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2111bc) {
            ctx->pc = 0x2111C8u;
            goto label_2111c8;
        }
    }
    ctx->pc = 0x2111C4u;
    // 0x2111c4: 0x21e1823  subu        $v1, $s0, $fp
    ctx->pc = 0x2111c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
label_2111c8:
    // 0x2111c8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2111c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2111cc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2111ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2111d0: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x2111D0u;
    SET_GPR_U32(ctx, 31, 0x2111D8u);
    ctx->pc = 0x2111D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2111D0u;
    // 0x2111d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x2111D0u, 0x2111D8u)) {
        return;
    }
    ctx->pc = 0x2111D8u;
label_2111d8:
    // 0x2111d8: 0x222882d  daddu       $s1, $s1, $v0
    ctx->pc = 0x2111d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2111dc: 0x8fa40820  lw          $a0, 0x820($sp)
    ctx->pc = 0x2111dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2080)));
    // 0x2111e0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2111e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2111e4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2111e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2111e8: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x2111e8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2111ec: 0x214182a  slt         $v1, $s0, $s4
    ctx->pc = 0x2111ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2111f0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2111F0u;
    {
        const bool branch_taken_0x2111f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2111F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2111F0u;
        // 0x2111f4: 0x2142023  subu        $a0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2111f0) {
            ctx->pc = 0x21120Cu;
            goto label_21120c;
        }
    }
    ctx->pc = 0x2111F8u;
    // 0x2111f8: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x2111F8u;
    SET_GPR_U32(ctx, 31, 0x211200u);
    ctx->pc = 0x2111FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2111F8u;
    // 0x2111fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x2111F8u, 0x211200u)) {
        return;
    }
    ctx->pc = 0x211200u;
label_211200:
    // 0x211200: 0x2172023  subu        $a0, $s0, $s7
    ctx->pc = 0x211200u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x211204: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x211204u;
    {
        const bool branch_taken_0x211204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211204u;
        // 0x211208: 0x242902d  daddu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211204) {
            ctx->pc = 0x211240u;
            goto label_211240;
        }
    }
    ctx->pc = 0x21120Cu;
label_21120c:
    // 0x21120c: 0x2f0102a  slt         $v0, $s7, $s0
    ctx->pc = 0x21120cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x211210: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x211210u;
    {
        const bool branch_taken_0x211210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211210u;
        // 0x211214: 0x2172023  subu        $a0, $s0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211210) {
            ctx->pc = 0x21122Cu;
            goto label_21122c;
        }
    }
    ctx->pc = 0x211218u;
    // 0x211218: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x211218u;
    SET_GPR_U32(ctx, 31, 0x211220u);
    ctx->pc = 0x21121Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211218u;
    // 0x21121c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x211218u, 0x211220u)) {
        return;
    }
    ctx->pc = 0x211220u;
label_211220:
    // 0x211220: 0x2142023  subu        $a0, $s0, $s4
    ctx->pc = 0x211220u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x211224: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x211224u;
    {
        const bool branch_taken_0x211224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x211228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211224u;
        // 0x211228: 0x242902d  daddu       $s2, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211224) {
            ctx->pc = 0x211240u;
            goto label_211240;
        }
    }
    ctx->pc = 0x21122Cu;
label_21122c:
    // 0x21122c: 0x8fa50814  lw          $a1, 0x814($sp)
    ctx->pc = 0x21122cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2068)));
    // 0x211230: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x211230u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x211234: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x211234u;
    {
        const bool branch_taken_0x211234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211234u;
        // 0x211238: 0x2142023  subu        $a0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211234) {
            ctx->pc = 0x211240u;
            goto label_211240;
        }
    }
    ctx->pc = 0x21123Cu;
    // 0x21123c: 0x2172023  subu        $a0, $s0, $s7
    ctx->pc = 0x21123cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_211240:
    // 0x211240: 0xc07e4e4  jal         func_1F9390
    ctx->pc = 0x211240u;
    SET_GPR_U32(ctx, 31, 0x211248u);
    ctx->pc = 0x211244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x211240u;
    // 0x211244: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x211240u, 0x211248u)) {
        return;
    }
    ctx->pc = 0x211248u;
label_211248:
    // 0x211248: 0x222882d  daddu       $s1, $s1, $v0
    ctx->pc = 0x211248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x21124c: 0xdfa30818  ld          $v1, 0x818($sp)
    ctx->pc = 0x21124cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 2072)));
    // 0x211250: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x211250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x211254: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x211254u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x211258: 0x223202a  slt         $a0, $s1, $v1
    ctx->pc = 0x211258u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21125c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x21125cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x211260: 0xfc720000  sd          $s2, 0x0($v1)
    ctx->pc = 0x211260u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 18));
    // 0x211264: 0x8fa30804  lw          $v1, 0x804($sp)
    ctx->pc = 0x211264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2052)));
    // 0x211268: 0xdfa50818  ld          $a1, 0x818($sp)
    ctx->pc = 0x211268u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 2072)));
    // 0x21126c: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x21126cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x211270: 0x224280b  movn        $a1, $s1, $a0
    ctx->pc = 0x211270u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17));
    // 0x211274: 0x1440ff8c  bnez        $v0, . + 4 + (-0x74 << 2)
    ctx->pc = 0x211274u;
    {
        const bool branch_taken_0x211274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x211278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211274u;
        // 0x211278: 0xffa50818  sd          $a1, 0x818($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 2072), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211274) {
            ctx->pc = 0x2110A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2110a8;
        }
    }
    ctx->pc = 0x21127Cu;
label_21127c:
    // 0x21127c: 0x8fa40804  lw          $a0, 0x804($sp)
    ctx->pc = 0x21127cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2052)));
    // 0x211280: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x211280u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211284: 0x18800010  blez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x211284u;
    {
        const bool branch_taken_0x211284 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x211288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211284u;
        // 0x211288: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211284) {
            ctx->pc = 0x2112C8u;
            goto label_2112c8;
        }
    }
    ctx->pc = 0x21128Cu;
    // 0x21128c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21128cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_211290:
    // 0x211290: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x211290u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211294: 0xdfa50818  ld          $a1, 0x818($sp)
    ctx->pc = 0x211294u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 2072)));
    // 0x211298: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x211298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21129c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21129Cu;
    {
        const bool branch_taken_0x21129c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2112A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21129Cu;
        // 0x2112a0: 0x8fa50804  lw          $a1, 0x804($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2052)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21129c) {
            ctx->pc = 0x2112B8u;
            goto label_2112b8;
        }
    }
    ctx->pc = 0x2112A4u;
    // 0x2112a4: 0x8fa50800  lw          $a1, 0x800($sp)
    ctx->pc = 0x2112a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2048)));
    // 0x2112a8: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x2112a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2112ac: 0xa0530000  sb          $s3, 0x0($v0)
    ctx->pc = 0x2112acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x2112b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2112b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2112b4: 0x8fa50804  lw          $a1, 0x804($sp)
    ctx->pc = 0x2112b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2052)));
label_2112b8:
    // 0x2112b8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2112b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2112bc: 0x265102a  slt         $v0, $s3, $a1
    ctx->pc = 0x2112bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2112c0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2112C0u;
    {
        const bool branch_taken_0x2112c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2112C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2112C0u;
        // 0x2112c4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2112c0) {
            ctx->pc = 0x211290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_211290;
        }
    }
    ctx->pc = 0x2112C8u;
label_2112c8:
    // 0x2112c8: 0x7bb008c0  lq          $s0, 0x8C0($sp)
    ctx->pc = 0x2112c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2240)));
    // 0x2112cc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2112ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2112d0: 0x7bb108b0  lq          $s1, 0x8B0($sp)
    ctx->pc = 0x2112d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2224)));
    // 0x2112d4: 0x7bb208a0  lq          $s2, 0x8A0($sp)
    ctx->pc = 0x2112d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
    // 0x2112d8: 0x7bb30890  lq          $s3, 0x890($sp)
    ctx->pc = 0x2112d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
    // 0x2112dc: 0x7bb40880  lq          $s4, 0x880($sp)
    ctx->pc = 0x2112dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
    // 0x2112e0: 0x7bb50870  lq          $s5, 0x870($sp)
    ctx->pc = 0x2112e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
    // 0x2112e4: 0x7bb60860  lq          $s6, 0x860($sp)
    ctx->pc = 0x2112e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 2144)));
    // 0x2112e8: 0x7bb70850  lq          $s7, 0x850($sp)
    ctx->pc = 0x2112e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2128)));
    // 0x2112ec: 0x7bbe0840  lq          $fp, 0x840($sp)
    ctx->pc = 0x2112ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 2112)));
    // 0x2112f0: 0xdfbf0830  ld          $ra, 0x830($sp)
    ctx->pc = 0x2112f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2096)));
    // 0x2112f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2112F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2112F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2112F4u;
        // 0x2112f8: 0x27bd08d0  addiu       $sp, $sp, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2112F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2112FCu;
    // 0x2112fc: 0x0  nop
    ctx->pc = 0x2112fcu;
    // NOP
    ctx->pc = 0x211300u;
}
