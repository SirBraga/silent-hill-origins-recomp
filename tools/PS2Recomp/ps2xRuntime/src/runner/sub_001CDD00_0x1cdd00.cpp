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

// Function: sub_001CDD00
// Address: 0x1cdd00 - 0x1ce010
void sub_001CDD00_0x1cdd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDD00_0x1cdd00");
#endif

    switch (ctx->pc) {
        case 0x1cdd40u: goto label_1cdd40;
        case 0x1cdd80u: goto label_1cdd80;
        case 0x1cdd88u: goto label_1cdd88;
        case 0x1cdd9cu: goto label_1cdd9c;
        case 0x1cddacu: goto label_1cddac;
        case 0x1cddbcu: goto label_1cddbc;
        case 0x1cddccu: goto label_1cddcc;
        case 0x1cdde4u: goto label_1cdde4;
        case 0x1cddf8u: goto label_1cddf8;
        case 0x1cde0cu: goto label_1cde0c;
        case 0x1cde24u: goto label_1cde24;
        case 0x1cde38u: goto label_1cde38;
        case 0x1cde4cu: goto label_1cde4c;
        case 0x1cde64u: goto label_1cde64;
        case 0x1cde78u: goto label_1cde78;
        case 0x1cdea8u: goto label_1cdea8;
        case 0x1cdeb8u: goto label_1cdeb8;
        case 0x1cdeccu: goto label_1cdecc;
        case 0x1cdee0u: goto label_1cdee0;
        case 0x1cdf08u: goto label_1cdf08;
        case 0x1cdf18u: goto label_1cdf18;
        case 0x1cdf2cu: goto label_1cdf2c;
        case 0x1cdf40u: goto label_1cdf40;
        case 0x1cdf80u: goto label_1cdf80;
        case 0x1cdf9cu: goto label_1cdf9c;
        default: break;
    }

    ctx->pc = 0x1cdd00u;

    // 0x1cdd00: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1cdd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1cdd04: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1cdd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x1cdd08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cdd08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd0c: 0xafa50084  sw          $a1, 0x84($sp)
    ctx->pc = 0x1cdd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 5));
    // 0x1cdd10: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1cdd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x1cdd14: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x1cdd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x1cdd18: 0x263002e8  addiu       $s0, $s1, 0x2E8
    ctx->pc = 0x1cdd18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 744));
    // 0x1cdd1c: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x1cdd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x1cdd20: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x1cdd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x1cdd24: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x1cdd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x1cdd28: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x1cdd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x1cdd2c: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x1cdd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x1cdd30: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1cdd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1cdd34: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1cdd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1cdd38: 0xc06b968  jal         func_1AE5A0
    ctx->pc = 0x1CDD38u;
    SET_GPR_U32(ctx, 31, 0x1CDD40u);
    ctx->pc = 0x1CDD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD38u;
    // 0x1cdd3c: 0x263202a0  addiu       $s2, $s1, 0x2A0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE5A0u, 0x1CDD38u, 0x1CDD40u)) {
        return;
    }
    ctx->pc = 0x1CDD40u;
label_1cdd40:
    // 0x1cdd40: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1cdd40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1cdd44: 0xae200260  sw          $zero, 0x260($s1)
    ctx->pc = 0x1cdd44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
    // 0x1cdd48: 0x24630380  addiu       $v1, $v1, 0x380
    ctx->pc = 0x1cdd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x1cdd4c: 0xae200264  sw          $zero, 0x264($s1)
    ctx->pc = 0x1cdd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 0));
    // 0x1cdd50: 0xae200268  sw          $zero, 0x268($s1)
    ctx->pc = 0x1cdd50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 0));
    // 0x1cdd54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cdd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdd58: 0xae200280  sw          $zero, 0x280($s1)
    ctx->pc = 0x1cdd58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 0));
    // 0x1cdd5c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1cdd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cdd60: 0xae200288  sw          $zero, 0x288($s1)
    ctx->pc = 0x1cdd60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 0));
    // 0x1cdd64: 0xae200290  sw          $zero, 0x290($s1)
    ctx->pc = 0x1cdd64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 0));
    // 0x1cdd68: 0xae200294  sw          $zero, 0x294($s1)
    ctx->pc = 0x1cdd68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 660), GPR_U32(ctx, 0));
    // 0x1cdd6c: 0xae20029c  sw          $zero, 0x29C($s1)
    ctx->pc = 0x1cdd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 0));
    // 0x1cdd70: 0xae2002f8  sw          $zero, 0x2F8($s1)
    ctx->pc = 0x1cdd70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 760), GPR_U32(ctx, 0));
    // 0x1cdd74: 0xae2002fc  sw          $zero, 0x2FC($s1)
    ctx->pc = 0x1cdd74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 764), GPR_U32(ctx, 0));
    // 0x1cdd78: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1CDD78u;
    SET_GPR_U32(ctx, 31, 0x1CDD80u);
    ctx->pc = 0x1CDD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD78u;
    // 0x1cdd7c: 0xae230258  sw          $v1, 0x258($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1CDD78u, 0x1CDD80u)) {
        return;
    }
    ctx->pc = 0x1CDD80u;
label_1cdd80:
    // 0x1cdd80: 0xc06db44  jal         func_1B6D10
    ctx->pc = 0x1CDD80u;
    SET_GPR_U32(ctx, 31, 0x1CDD88u);
    ctx->pc = 0x1CDD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD80u;
    // 0x1cdd84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D10u, 0x1CDD80u, 0x1CDD88u)) {
        return;
    }
    ctx->pc = 0x1CDD88u;
label_1cdd88:
    // 0x1cdd88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd90: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1cdd90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1cdd94: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CDD94u;
    SET_GPR_U32(ctx, 31, 0x1CDD9Cu);
    ctx->pc = 0x1CDD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD94u;
    // 0x1cdd98: 0xae220260  sw          $v0, 0x260($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CDD94u, 0x1CDD9Cu)) {
        return;
    }
    ctx->pc = 0x1CDD9Cu;
label_1cdd9c:
    // 0x1cdd9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cdd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdda0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdda4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CDDA4u;
    SET_GPR_U32(ctx, 31, 0x1CDDACu);
    ctx->pc = 0x1CDDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDDA4u;
    // 0x1cdda8: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CDDA4u, 0x1CDDACu)) {
        return;
    }
    ctx->pc = 0x1CDDACu;
label_1cddac:
    // 0x1cddac: 0x262402c8  addiu       $a0, $s1, 0x2C8
    ctx->pc = 0x1cddacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 712));
    // 0x1cddb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cddb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cddb4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CDDB4u;
    SET_GPR_U32(ctx, 31, 0x1CDDBCu);
    ctx->pc = 0x1CDDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDDB4u;
    // 0x1cddb8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CDDB4u, 0x1CDDBCu)) {
        return;
    }
    ctx->pc = 0x1CDDBCu;
label_1cddbc:
    // 0x1cddbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cddbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cddc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cddc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cddc4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CDDC4u;
    SET_GPR_U32(ctx, 31, 0x1CDDCCu);
    ctx->pc = 0x1CDDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDDC4u;
    // 0x1cddc8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CDDC4u, 0x1CDDCCu)) {
        return;
    }
    ctx->pc = 0x1CDDCCu;
label_1cddcc:
    // 0x1cddcc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cddccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1cddd0: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x1cddd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1cddd4: 0x24a50350  addiu       $a1, $a1, 0x350
    ctx->pc = 0x1cddd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 848));
    // 0x1cddd8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1cddd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdddc: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1CDDDCu;
    SET_GPR_U32(ctx, 31, 0x1CDDE4u);
    ctx->pc = 0x1CDDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDDDCu;
    // 0x1cdde0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1CDDDCu, 0x1CDDE4u)) {
        return;
    }
    ctx->pc = 0x1CDDE4u;
label_1cdde4:
    // 0x1cdde4: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1cdde4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdde8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CDDE8u;
    {
        const bool branch_taken_0x1cdde8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDDE8u;
        // 0x1cddec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdde8) {
            ctx->pc = 0x1CDDFCu;
            goto label_1cddfc;
        }
    }
    ctx->pc = 0x1CDDF0u;
    // 0x1cddf0: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1CDDF0u;
    SET_GPR_U32(ctx, 31, 0x1CDDF8u);
    ctx->pc = 0x1CDDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDDF0u;
    // 0x1cddf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1CDDF0u, 0x1CDDF8u)) {
        return;
    }
    ctx->pc = 0x1CDDF8u;
label_1cddf8:
    // 0x1cddf8: 0xae220290  sw          $v0, 0x290($s1)
    ctx->pc = 0x1cddf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 2));
label_1cddfc:
    // 0x1cddfc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cddfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cde00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde04: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CDE04u;
    SET_GPR_U32(ctx, 31, 0x1CDE0Cu);
    ctx->pc = 0x1CDE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDE04u;
    // 0x1cde08: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CDE04u, 0x1CDE0Cu)) {
        return;
    }
    ctx->pc = 0x1CDE0Cu;
label_1cde0c:
    // 0x1cde0c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cde0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1cde10: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x1cde10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1cde14: 0x24a50360  addiu       $a1, $a1, 0x360
    ctx->pc = 0x1cde14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 864));
    // 0x1cde18: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1cde18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde1c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1CDE1Cu;
    SET_GPR_U32(ctx, 31, 0x1CDE24u);
    ctx->pc = 0x1CDE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDE1Cu;
    // 0x1cde20: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1CDE1Cu, 0x1CDE24u)) {
        return;
    }
    ctx->pc = 0x1CDE24u;
label_1cde24:
    // 0x1cde24: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1cde24u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cde28: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CDE28u;
    {
        const bool branch_taken_0x1cde28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDE28u;
        // 0x1cde2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cde28) {
            ctx->pc = 0x1CDE3Cu;
            goto label_1cde3c;
        }
    }
    ctx->pc = 0x1CDE30u;
    // 0x1cde30: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1CDE30u;
    SET_GPR_U32(ctx, 31, 0x1CDE38u);
    ctx->pc = 0x1CDE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDE30u;
    // 0x1cde34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1CDE30u, 0x1CDE38u)) {
        return;
    }
    ctx->pc = 0x1CDE38u;
label_1cde38:
    // 0x1cde38: 0xae220298  sw          $v0, 0x298($s1)
    ctx->pc = 0x1cde38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 2));
label_1cde3c:
    // 0x1cde3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cde3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cde40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde44: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CDE44u;
    SET_GPR_U32(ctx, 31, 0x1CDE4Cu);
    ctx->pc = 0x1CDE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDE44u;
    // 0x1cde48: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CDE44u, 0x1CDE4Cu)) {
        return;
    }
    ctx->pc = 0x1CDE4Cu;
label_1cde4c:
    // 0x1cde4c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cde4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1cde50: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x1cde50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1cde54: 0x24a50370  addiu       $a1, $a1, 0x370
    ctx->pc = 0x1cde54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 880));
    // 0x1cde58: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1cde58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde5c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1CDE5Cu;
    SET_GPR_U32(ctx, 31, 0x1CDE64u);
    ctx->pc = 0x1CDE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDE5Cu;
    // 0x1cde60: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1CDE5Cu, 0x1CDE64u)) {
        return;
    }
    ctx->pc = 0x1CDE64u;
label_1cde64:
    // 0x1cde64: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1cde64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cde68: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CDE68u;
    {
        const bool branch_taken_0x1cde68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDE68u;
        // 0x1cde6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cde68) {
            ctx->pc = 0x1CDE7Cu;
            goto label_1cde7c;
        }
    }
    ctx->pc = 0x1CDE70u;
    // 0x1cde70: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1CDE70u;
    SET_GPR_U32(ctx, 31, 0x1CDE78u);
    ctx->pc = 0x1CDE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDE70u;
    // 0x1cde74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1CDE70u, 0x1CDE78u)) {
        return;
    }
    ctx->pc = 0x1CDE78u;
label_1cde78:
    // 0x1cde78: 0xae2202f8  sw          $v0, 0x2F8($s1)
    ctx->pc = 0x1cde78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 760), GPR_U32(ctx, 2));
label_1cde7c:
    // 0x1cde7c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1cde7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1cde80: 0xafb0008c  sw          $s0, 0x8C($sp)
    ctx->pc = 0x1cde80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 16));
    // 0x1cde84: 0x24539988  addiu       $s3, $v0, -0x6678
    ctx->pc = 0x1cde84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941064));
    // 0x1cde88: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1cde88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cde8c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1cde8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1cde90: 0x263e02e9  addiu       $fp, $s1, 0x2E9
    ctx->pc = 0x1cde90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 745));
    // 0x1cde94: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x1cde94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x1cde98: 0x263602ea  addiu       $s6, $s1, 0x2EA
    ctx->pc = 0x1cde98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 746));
    // 0x1cde9c: 0x263402eb  addiu       $s4, $s1, 0x2EB
    ctx->pc = 0x1cde9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 747));
    // 0x1cdea0: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1cdea0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cdea4: 0x0  nop
    ctx->pc = 0x1cdea4u;
    // NOP
label_1cdea8:
    // 0x1cdea8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cdea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdeac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdeacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdeb0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CDEB0u;
    SET_GPR_U32(ctx, 31, 0x1CDEB8u);
    ctx->pc = 0x1CDEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDEB0u;
    // 0x1cdeb4: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CDEB0u, 0x1CDEB8u)) {
        return;
    }
    ctx->pc = 0x1CDEB8u;
label_1cdeb8:
    // 0x1cdeb8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1cdeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1cdebc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1cdebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdec0: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x1cdec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1cdec4: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1CDEC4u;
    SET_GPR_U32(ctx, 31, 0x1CDECCu);
    ctx->pc = 0x1CDEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDEC4u;
    // 0x1cdec8: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1CDEC4u, 0x1CDECCu)) {
        return;
    }
    ctx->pc = 0x1CDECCu;
label_1cdecc:
    // 0x1cdecc: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1cdeccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cded0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CDED0u;
    {
        const bool branch_taken_0x1cded0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDED0u;
        // 0x1cded4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cded0) {
            ctx->pc = 0x1CDEE4u;
            goto label_1cdee4;
        }
    }
    ctx->pc = 0x1CDED8u;
    // 0x1cded8: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1CDED8u;
    SET_GPR_U32(ctx, 31, 0x1CDEE0u);
    ctx->pc = 0x1CDEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDED8u;
    // 0x1cdedc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1CDED8u, 0x1CDEE0u)) {
        return;
    }
    ctx->pc = 0x1CDEE0u;
label_1cdee0:
    // 0x1cdee0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cdee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1cdee4:
    // 0x1cdee4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1cdee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1cdee8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1cdee8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1cdeec: 0x641ffee  bgez        $s2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1CDEECu;
    {
        const bool branch_taken_0x1cdeec = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1CDEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDEECu;
        // 0x1cdef0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdeec) {
            ctx->pc = 0x1CDEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdea8;
        }
    }
    ctx->pc = 0x1CDEF4u;
    // 0x1cdef4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1cdef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1cdef8: 0x263002c8  addiu       $s0, $s1, 0x2C8
    ctx->pc = 0x1cdef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 712));
    // 0x1cdefc: 0x245399b0  addiu       $s3, $v0, -0x6650
    ctx->pc = 0x1cdefcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941104));
    // 0x1cdf00: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1cdf00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cdf04: 0x0  nop
    ctx->pc = 0x1cdf04u;
    // NOP
label_1cdf08:
    // 0x1cdf08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cdf08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdf0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf10: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1CDF10u;
    SET_GPR_U32(ctx, 31, 0x1CDF18u);
    ctx->pc = 0x1CDF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF10u;
    // 0x1cdf14: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1CDF10u, 0x1CDF18u)) {
        return;
    }
    ctx->pc = 0x1CDF18u;
label_1cdf18:
    // 0x1cdf18: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1cdf18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1cdf1c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1cdf1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf20: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x1cdf20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1cdf24: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1CDF24u;
    SET_GPR_U32(ctx, 31, 0x1CDF2Cu);
    ctx->pc = 0x1CDF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF24u;
    // 0x1cdf28: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1CDF24u, 0x1CDF2Cu)) {
        return;
    }
    ctx->pc = 0x1CDF2Cu;
label_1cdf2c:
    // 0x1cdf2c: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1cdf2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdf30: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CDF30u;
    {
        const bool branch_taken_0x1cdf30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF30u;
        // 0x1cdf34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf30) {
            ctx->pc = 0x1CDF44u;
            goto label_1cdf44;
        }
    }
    ctx->pc = 0x1CDF38u;
    // 0x1cdf38: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1CDF38u;
    SET_GPR_U32(ctx, 31, 0x1CDF40u);
    ctx->pc = 0x1CDF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF38u;
    // 0x1cdf3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1CDF38u, 0x1CDF40u)) {
        return;
    }
    ctx->pc = 0x1CDF40u;
label_1cdf40:
    // 0x1cdf40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cdf40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1cdf44:
    // 0x1cdf44: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1cdf44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1cdf48: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1cdf48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1cdf4c: 0x641ffee  bgez        $s2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1CDF4Cu;
    {
        const bool branch_taken_0x1cdf4c = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1CDF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF4Cu;
        // 0x1cdf50: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf4c) {
            ctx->pc = 0x1CDF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdf08;
        }
    }
    ctx->pc = 0x1CDF54u;
    // 0x1cdf54: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x1cdf54u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
    // 0x1cdf58: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1cdf58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1cdf5c: 0x3c1500ff  lui         $s5, 0xFF
    ctx->pc = 0x1cdf5cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)255 << 16));
    // 0x1cdf60: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x1cdf60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf64: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x1cdf64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf68: 0x8fb0008c  lw          $s0, 0x8C($sp)
    ctx->pc = 0x1cdf68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x1cdf6c: 0x245e99a0  addiu       $fp, $v0, -0x6660
    ctx->pc = 0x1cdf6cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941088));
    // 0x1cdf70: 0x36f7ffff  ori         $s7, $s7, 0xFFFF
    ctx->pc = 0x1cdf70u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x1cdf74: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x1cdf74u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x1cdf78: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x1cdf78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cdf7c: 0x0  nop
    ctx->pc = 0x1cdf7cu;
    // NOP
label_1cdf80:
    // 0x1cdf80: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x1cdf80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1cdf84: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x1cdf84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1cdf88: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x1cdf88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1cdf8c: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x1cdf8cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x1cdf90: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x1cdf90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1cdf94: 0xc065f72  jal         func_197DC8
    ctx->pc = 0x1CDF94u;
    SET_GPR_U32(ctx, 31, 0x1CDF9Cu);
    ctx->pc = 0x1CDF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF94u;
    // 0x1cdf98: 0xafb70080  sw          $s7, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197DC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197DC8u, 0x1CDF94u, 0x1CDF9Cu)) {
        return;
    }
    ctx->pc = 0x1CDF9Cu;
label_1cdf9c:
    // 0x1cdf9c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1cdf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cdfa0: 0x93a50080  lbu         $a1, 0x80($sp)
    ctx->pc = 0x1cdfa0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cdfa4: 0x32602  srl         $a0, $v1, 24
    ctx->pc = 0x1cdfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x1cdfa8: 0x751024  and         $v0, $v1, $s5
    ctx->pc = 0x1cdfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
    // 0x1cdfac: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x1cdfacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cdfb0: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1cdfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1cdfb4: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x1cdfb4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cdfb8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1cdfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x1cdfbc: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x1cdfbcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cdfc0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1cdfc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1cdfc4: 0xa2850000  sb          $a1, 0x0($s4)
    ctx->pc = 0x1cdfc4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cdfc8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1cdfc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1cdfcc: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1cdfccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1cdfd0: 0x6c1ffeb  bgez        $s6, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1CDFD0u;
    {
        const bool branch_taken_0x1cdfd0 = (GPR_S64(ctx, 22) >= 0);
        ctx->pc = 0x1CDFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDFD0u;
        // 0x1cdfd4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdfd0) {
            ctx->pc = 0x1CDF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdf80;
        }
    }
    ctx->pc = 0x1CDFD8u;
    // 0x1cdfd8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1cdfd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdfdc: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1cdfdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1cdfe0: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1cdfe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1cdfe4: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x1cdfe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1cdfe8: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x1cdfe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1cdfec: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x1cdfecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1cdff0: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x1cdff0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1cdff4: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x1cdff4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1cdff8: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x1cdff8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1cdffc: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1cdffcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ce000: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ce000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ce004: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE004u;
        // 0x1ce008: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE00Cu;
    // 0x1ce00c: 0x0  nop
    ctx->pc = 0x1ce00cu;
    // NOP
    ctx->pc = 0x1ce010u;
}
