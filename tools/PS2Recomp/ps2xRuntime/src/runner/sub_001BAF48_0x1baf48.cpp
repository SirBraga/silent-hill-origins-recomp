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

// Function: sub_001BAF48
// Address: 0x1baf48 - 0x1bb078
void sub_001BAF48_0x1baf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BAF48_0x1baf48");
#endif

    switch (ctx->pc) {
        case 0x1baf74u: goto label_1baf74;
        case 0x1bafa0u: goto label_1bafa0;
        case 0x1bafc0u: goto label_1bafc0;
        case 0x1bafd4u: goto label_1bafd4;
        case 0x1bafdcu: goto label_1bafdc;
        case 0x1bafe4u: goto label_1bafe4;
        case 0x1bb008u: goto label_1bb008;
        case 0x1bb020u: goto label_1bb020;
        case 0x1bb030u: goto label_1bb030;
        case 0x1bb04cu: goto label_1bb04c;
        case 0x1bb064u: goto label_1bb064;
        default: break;
    }

    ctx->pc = 0x1baf48u;

    // 0x1baf48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1baf48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1baf4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1baf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1baf50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1baf50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1baf54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1baf54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1baf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1baf5c: 0x8e04035c  lw          $a0, 0x35C($s0)
    ctx->pc = 0x1baf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x1baf60: 0x8c8200dc  lw          $v0, 0xDC($a0)
    ctx->pc = 0x1baf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1baf64: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1BAF64u;
    {
        const bool branch_taken_0x1baf64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF64u;
        // 0x1baf68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf64) {
            ctx->pc = 0x1BAFFCu;
            goto label_1baffc;
        }
    }
    ctx->pc = 0x1BAF6Cu;
    // 0x1baf6c: 0xc06f3f6  jal         func_1BCFD8
    ctx->pc = 0x1BAF6Cu;
    SET_GPR_U32(ctx, 31, 0x1BAF74u);
    ctx->pc = 0x1BAF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF6Cu;
    // 0x1baf70: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BCFD8u, 0x1BAF6Cu, 0x1BAF74u)) {
        return;
    }
    ctx->pc = 0x1BAF74u;
label_1baf74:
    // 0x1baf74: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1BAF74u;
    {
        const bool branch_taken_0x1baf74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF74u;
        // 0x1baf78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf74) {
            ctx->pc = 0x1BB000u;
            goto label_1bb000;
        }
    }
    ctx->pc = 0x1BAF7Cu;
    // 0x1baf7c: 0x8e02035c  lw          $v0, 0x35C($s0)
    ctx->pc = 0x1baf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x1baf80: 0x8c4300e0  lw          $v1, 0xE0($v0)
    ctx->pc = 0x1baf80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x1baf84: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAF84u;
    {
        const bool branch_taken_0x1baf84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF84u;
        // 0x1baf88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf84) {
            ctx->pc = 0x1BAFA8u;
            goto label_1bafa8;
        }
    }
    ctx->pc = 0x1BAF8Cu;
    // 0x1baf8c: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1baf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1baf90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1baf90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1baf94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1baf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1baf98: 0xc06edb8  jal         func_1BB6E0
    ctx->pc = 0x1BAF98u;
    SET_GPR_U32(ctx, 31, 0x1BAFA0u);
    ctx->pc = 0x1BAF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF98u;
    // 0x1baf9c: 0xae020320  sw          $v0, 0x320($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB6E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BB6E0u, 0x1BAF98u, 0x1BAFA0u)) {
        return;
    }
    ctx->pc = 0x1BAFA0u;
label_1bafa0:
    // 0x1bafa0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAFA0u;
    {
        const bool branch_taken_0x1bafa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAFA0u;
        // 0x1bafa4: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bafa0) {
            ctx->pc = 0x1BAFC4u;
            goto label_1bafc4;
        }
    }
    ctx->pc = 0x1BAFA8u;
label_1bafa8:
    // 0x1bafa8: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1bafa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1bafac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bafacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bafb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bafb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bafb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bafb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bafb8: 0xc06edb8  jal         func_1BB6E0
    ctx->pc = 0x1BAFB8u;
    SET_GPR_U32(ctx, 31, 0x1BAFC0u);
    ctx->pc = 0x1BAFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAFB8u;
    // 0x1bafbc: 0xae020320  sw          $v0, 0x320($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB6E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BB6E0u, 0x1BAFB8u, 0x1BAFC0u)) {
        return;
    }
    ctx->pc = 0x1BAFC0u;
label_1bafc0:
    // 0x1bafc0: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1bafc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1bafc4:
    // 0x1bafc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bafc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bafc8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1bafc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1bafcc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BAFCCu;
    SET_GPR_U32(ctx, 31, 0x1BAFD4u);
    ctx->pc = 0x1BAFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAFCCu;
    // 0x1bafd0: 0x248400f8  addiu       $a0, $a0, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BAFCCu, 0x1BAFD4u)) {
        return;
    }
    ctx->pc = 0x1BAFD4u;
label_1bafd4:
    // 0x1bafd4: 0xc06eeac  jal         func_1BBAB0
    ctx->pc = 0x1BAFD4u;
    SET_GPR_U32(ctx, 31, 0x1BAFDCu);
    ctx->pc = 0x1BAFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAFD4u;
    // 0x1bafd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BBAB0u, 0x1BAFD4u, 0x1BAFDCu)) {
        return;
    }
    ctx->pc = 0x1BAFDCu;
label_1bafdc:
    // 0x1bafdc: 0xc06f8b4  jal         func_1BE2D0
    ctx->pc = 0x1BAFDCu;
    SET_GPR_U32(ctx, 31, 0x1BAFE4u);
    ctx->pc = 0x1BAFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAFDCu;
    // 0x1bafe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE2D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE2D0u, 0x1BAFDCu, 0x1BAFE4u)) {
        return;
    }
    ctx->pc = 0x1BAFE4u;
label_1bafe4:
    // 0x1bafe4: 0x8e0302ac  lw          $v1, 0x2AC($s0)
    ctx->pc = 0x1bafe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
    // 0x1bafe8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bafe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bafec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bafecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1baff0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1baff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1baff4: 0xac640308  sw          $a0, 0x308($v1)
    ctx->pc = 0x1baff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 776), GPR_U32(ctx, 4));
    // 0x1baff8: 0xae000354  sw          $zero, 0x354($s0)
    ctx->pc = 0x1baff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 0));
label_1baffc:
    // 0x1baffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1baffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bb000:
    // 0x1bb000: 0xc06ec1e  jal         func_1BB078
    ctx->pc = 0x1BB000u;
    SET_GPR_U32(ctx, 31, 0x1BB008u);
    ctx->pc = 0x1BB004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB000u;
    // 0x1bb004: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BB078u, 0x1BB000u, 0x1BB008u)) {
        return;
    }
    ctx->pc = 0x1BB008u;
label_1bb008:
    // 0x1bb008: 0x8e020360  lw          $v0, 0x360($s0)
    ctx->pc = 0x1bb008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x1bb00c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bb00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bb010: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BB010u;
    {
        const bool branch_taken_0x1bb010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb010) {
            ctx->pc = 0x1BB014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB010u;
            // 0x1bb014: 0x8e020328  lw          $v0, 0x328($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 808)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB038u;
            goto label_1bb038;
        }
    }
    ctx->pc = 0x1BB018u;
    // 0x1bb018: 0xc06f8b4  jal         func_1BE2D0
    ctx->pc = 0x1BB018u;
    SET_GPR_U32(ctx, 31, 0x1BB020u);
    ctx->pc = 0x1BB01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB018u;
    // 0x1bb01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE2D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE2D0u, 0x1BB018u, 0x1BB020u)) {
        return;
    }
    ctx->pc = 0x1BB020u;
label_1bb020:
    // 0x1bb020: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1bb020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bb024: 0x8e040360  lw          $a0, 0x360($s0)
    ctx->pc = 0x1bb024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x1bb028: 0xc06f98a  jal         func_1BE628
    ctx->pc = 0x1BB028u;
    SET_GPR_U32(ctx, 31, 0x1BB030u);
    ctx->pc = 0x1BB02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB028u;
    // 0x1bb02c: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE628u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE628u, 0x1BB028u, 0x1BB030u)) {
        return;
    }
    ctx->pc = 0x1BB030u;
label_1bb030:
    // 0x1bb030: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB030u;
    {
        const bool branch_taken_0x1bb030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB030u;
        // 0x1bb034: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb030) {
            ctx->pc = 0x1BB050u;
            goto label_1bb050;
        }
    }
    ctx->pc = 0x1BB038u;
label_1bb038:
    // 0x1bb038: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB038u;
    {
        const bool branch_taken_0x1bb038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb038) {
            ctx->pc = 0x1BB03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB038u;
            // 0x1bb03c: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB050u;
            goto label_1bb050;
        }
    }
    ctx->pc = 0x1BB040u;
    // 0x1bb040: 0xae000328  sw          $zero, 0x328($s0)
    ctx->pc = 0x1bb040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 0));
    // 0x1bb044: 0xc06f92c  jal         func_1BE4B0
    ctx->pc = 0x1BB044u;
    SET_GPR_U32(ctx, 31, 0x1BB04Cu);
    ctx->pc = 0x1BB048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB044u;
    // 0x1bb048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE4B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BE4B0u, 0x1BB044u, 0x1BB04Cu)) {
        return;
    }
    ctx->pc = 0x1BB04Cu;
label_1bb04c:
    // 0x1bb04c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1bb04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1bb050:
    // 0x1bb050: 0x8e040364  lw          $a0, 0x364($s0)
    ctx->pc = 0x1bb050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 868)));
    // 0x1bb054: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x1bb054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bb058: 0xc44e0bd8  lwc1        $f14, 0xBD8($v0)
    ctx->pc = 0x1bb058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1bb05c: 0xc06f618  jal         func_1BD860
    ctx->pc = 0x1BB05Cu;
    SET_GPR_U32(ctx, 31, 0x1BB064u);
    ctx->pc = 0x1BB060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB05Cu;
    // 0x1bb060: 0xc44d0bdc  lwc1        $f13, 0xBDC($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BD860u, 0x1BB05Cu, 0x1BB064u)) {
        return;
    }
    ctx->pc = 0x1BB064u;
label_1bb064:
    // 0x1bb064: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bb064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb068: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bb068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb06c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb070: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB070u;
        // 0x1bb074: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB078u;
}
